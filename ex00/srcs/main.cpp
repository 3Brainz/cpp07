#include <Templates.hpp>

int main()
{
	int a = 10;
	int b = 23;

	cout << "a:" << a << "b:" << b << std::endl;
	::swap<int>(a, b);
	cout << "a:" << a << "b:" << b << std::endl;
	cout << "max 1, 2:" << ::max<int>(1,2) << std::endl;
	cout << "min 1, 2:" << ::min<int>(1,2) << std::endl;
}