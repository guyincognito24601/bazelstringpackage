#include <string>

class ExampleError {
public:
    ExampleError(const char* error) : m_error(error) {}
private:
    std::string m_error;
};
