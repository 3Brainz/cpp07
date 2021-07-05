#pragma once
#include <iostream>
#include <exception>

template<class T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const &toCopy);
	~Array();
	Array &	operator = (const Array & toCopy);
	T&	operator[](unsigned int i);
protected:

private:
	T				*_arr;
	unsigned int	len;
};
