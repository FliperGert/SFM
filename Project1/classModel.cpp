#include "list.h"
#include <string>

class Model {
private:
	List<std::string> list_input_values;
	List<std::string> list_output_values;
public:
	const List<std::string> getListInputValues() const { return list_input_values; }
	const List<std::string> getListOutputValues() const { return list_output_values; }

	void setListInputValues(List<std::string> liv) { list_input_values = liv; }
	void setListOutputValues(List<std::string> lov) { list_output_values = lov; }

	
};