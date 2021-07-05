#include <Iter.hpp>

int main()
{
	int a[] = {10, 20, 32, 78, 6, 1};
	::iter<int>(a, 6, ft_print);
}