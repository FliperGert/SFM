#include "list.h"
#include <string>

class Model {
private:
	List<const char> list_input_name;
	List<long double> list_input_values;

	List<const char> list_output_name;
	List<long double> list_output_values;
public:
	const List<long double> getListInputValues() const { return list_input_values; }
	const List<long double> getListOutputValues() const { return list_output_values; }

	void setListInputValues(List<long double> liv) { list_input_values = liv; }
	void setListOutputValues(List<long double> lov) { list_output_values = lov; }

	const List<const char> getListInputName() const { return list_input_name; }
	const List<const char> getListOutputName() const { return list_output_name; }

	void setListInputName(List<const char> lim) { list_input_name = lim; }
	void setListOutputName(List<const char> lom) { list_output_name = lom; }
	
};