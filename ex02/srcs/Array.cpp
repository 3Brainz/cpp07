#include <Array.hpp>

template<class T>
Array<T>::Array() : _arr(NULL), _len(0)
{}

template<class T>
Array<T>::Array(unsigned int len) : _len(len)
{
	_arr = new T[_len];
}

template<class T>
Array<T>::~Array()
{
	delete (_arr);
}

Array::Array(Array const &toCopy)
{
}

Array &	Array::operator = (const Array & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Array &Array)
{
	return (stream);
}
