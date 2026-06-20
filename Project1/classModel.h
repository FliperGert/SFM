#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include "list.h"
#include <utility>

class ModelProcess {
private:
	List<char> list_input_name;
	List<long double> list_input_values;

	List<char> list_output_name;
	ListModel<long double> list_output_values;
public:
	ModelProcess() {};

	const List<long double>& getListInputValues() const { return list_input_values; }
	const ListModel<long double>& getListOutputValues() const { return list_output_values; }

	void setListInputValues(const List<long double>& liv) { list_input_values = liv; }
	void setListInputValues(List<long double>&& liv) { list_input_values = std::move(liv); }

	void setListOutputValues(const ListModel<long double>& lov) { list_output_values = lov; }
	void setListOutputValues(ListModel<long double>&& lov) { list_output_values = std::move(lov); }

	void addOutputValues(const List<long double>& values) { list_output_values.push_back(values); }
	void addOutputValues(List<long double>&& values) { list_output_values.push_back(std::move(values)); }

	const List<char>& getListInputName() const { return list_input_name; }
	const List<char>& getListOutputName() const { return list_output_name; }

	void setListInputName(const List<char>& lim) { list_input_name = lim; }
	void setListInputName(List<char>&& lim) { list_input_name = std::move(lim); }
	void setListOutputName(const List<char>& lom) { list_output_name = lom; }
	void setListOutputName(List<char>&& lom) { list_output_name = std::move(lom); }

	~ModelProcess() {};
};


class ModelProcess_1 : public ModelProcess {
public:
	ModelProcess_1(List<long double>&& data) : ModelProcess() {
		char input_names[] = { 'x', 'v', 'a', 't', 'd' };
		setListInputName(List<char>(input_names, 5));

		setListInputValues(std::move(data));

		char output_names[] = { 'x', 'v', 'a', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	ModelProcess_1(const List<long double>& data) : ModelProcess() {
		char input_names[] = { 'x', 'v', 'a', 't', 'd' };
		setListInputName(List<char>(input_names, 5));

		setListInputValues(data);

		char output_names[] = { 'x', 'v', 'a', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	void update(long double x0, long double v0, long double a, long double d, int step) {
		List<long double> output_values;
		long double t = step * d;
		output_values.push_back(x0 + v0 * t + 0.5 * a * t * t);
		output_values.push_back(v0 + a * t);
		output_values.push_back(a);
		output_values.push_back(t);

		addOutputValues(std::move(output_values));
	}

	void full() {
		const List<long double>& input_values = getListInputValues();

		int maxSteps = static_cast<int>(input_values[3] / input_values[4]);
		for (int step = 0; step <= maxSteps; ++step) {
			update(input_values[0], input_values[1], input_values[2], input_values[4], step);
		}
	}
};


class ModelProcess_2: public ModelProcess {
public:
	ModelProcess_2(List<long double>&& data) : ModelProcess() {
		char input_names[] = { 'k', 'x', 'm', 't', 'd' };
		setListInputName(List<char>(input_names, 5));

		setListInputValues(std::move(data));

		char output_names[] = { 'x', 'v', 'a', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	ModelProcess_2(const List<long double>& data) : ModelProcess() {
		char input_names[] = { 'k', 'x', 'm', 't', 'd' };
		setListInputName(List<char>(input_names, 5));

		setListInputValues(data);

		char output_names[] = { 'x', 'v', 'a', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	void update(long double k, long double x, long double m, long double d, int step) {
		List<long double> output_values;
		long double t = step * d;
		long double w = sqrt(k / m);
		output_values.push_back(x * cos(w * t));
		output_values.push_back(-x * w * sin(w * t));
		output_values.push_back(-x * w * w * cos(w * t));
		output_values.push_back(t);

		addOutputValues(std::move(output_values));
	}

	void full() {
		const List<long double>& input_values = getListInputValues();

		int maxSteps = static_cast<int>(input_values[3] / input_values[4]);
		for (int step = 0; step <= maxSteps; ++step) {
			update(input_values[0], input_values[1], input_values[2], input_values[4], step);
		}
	}
};

class ModelProcess_3 : public ModelProcess {
public:
	ModelProcess_3(List<long double>&& data) : ModelProcess() {
		char input_names[] = { 'v', 'a', 't', 'd'};
		setListInputName(List<char>(input_names, 4));

		setListInputValues(std::move(data));

		char output_names[] = { 'x', 'y', 'v', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	ModelProcess_3(const List<long double>& data) : ModelProcess() {
		char input_names[] = { 'v', 'a', 't', 'd'};
		setListInputName(List<char>(input_names, 4));

		setListInputValues(data);

		char output_names[] = { 'x', 'y', 'v', 't' };
		setListOutputName(List<char>(output_names, 4));
	};

	void update(long double v, long double alpha, long double d, int step, bool& work) {
		List<long double> output_values;
		long double t = step * d;
		output_values.push_back(v * cos(alpha * M_PI / 180) * t);
		output_values.push_back(v * sin(alpha * M_PI / 180) * t - 0.5 * 9.81 * t * t);
		output_values.push_back(sqrt(pow(v * sin(alpha * M_PI / 180) - 9.81 * t / 2, 2) + pow(v * cos(alpha * M_PI / 180), 2)));
		output_values.push_back(t);

		addOutputValues(std::move(output_values));

		if ((v * sin(alpha * M_PI / 180) * t - 0.5 * 9.81 * t * t) < 0) {
			work = false;
		}
	}

	void full() {
		const List<long double>& input_values = getListInputValues();

		int maxSteps = static_cast<int>(input_values[2] / input_values[3]);
		bool work = true;
		for (int step = 0; (step <= maxSteps) && work; ++step) {
			update(input_values[0], input_values[1], input_values[3], step, work);
		}
	}
};

class ModelProcess_4 : public ModelProcess {
public:
	ModelProcess_4(List<long double>&& data) : ModelProcess() {
		char input_names[] = { 'h', 'S', 'k', 'm', 't', 'd'};
		setListInputName(List<char>(input_names, 6));

		setListInputValues(std::move(data));

		char output_names[] = { 'F', 'v', 'a', 'S' , 'x', 't'};
		setListOutputName(List<char>(output_names, 6));
	};

	ModelProcess_4(const List<long double>& data) : ModelProcess() {
		char input_names[] = { 'h', 'S', 'k', 'm', 't', 'd'};
		setListInputName(List<char>(input_names, 6));

		setListInputValues(data);

		char output_names[] = { 'F', 'v', 'a', 'S' , 'x', 't'};
		setListOutputName(List<char>(output_names, 6));
	};

	void update(long double s, long double k, long double h, long double m, long double d, long double& S, int step, bool& work) {
		List<long double> output_values;
		long double beta = s * k * 1.293;
		long double v_limit = sqrt((m * 9.81) / beta);

		long double t = step * d;
		long double v = v_limit * (tanh((9.81 * t) / v_limit));
		S += v * d;

		output_values.push_back(beta * v * v);
		output_values.push_back(v);
		output_values.push_back(9.81 - (beta * v * v) / m);
		output_values.push_back(S);
		output_values.push_back(h - S);
		output_values.push_back(t);

		addOutputValues(std::move(output_values));

		if (S >= h) {
			work = false;
		}
	}

	void full() {
		const List<long double>& input_values = getListInputValues();
		// требуется минимум 6 значений: h, S, k, m, t, d
		if (input_values.size() < 6) return;
		if (input_values[5] == 0) return;
		long double S = 0;
		bool work = true;
		int maxSteps = static_cast<int>(input_values[4] / input_values[5]);
		for (int step = 0; (step <= maxSteps) && work; ++step) {
			update(input_values[0], input_values[1], input_values[2], input_values[3], input_values[5], S, step, work);
		}
	}
};