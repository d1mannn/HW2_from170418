#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Vector
{
public:
	Vector() :cur_size(0), buf_size(0), elements(nullptr) {};

	Vector(int size) {
		this->cur_size = size;
		this->buf_size = size;
		elements = new int[size];
		for (int i = 0; i < buf_size; i++)
			elements[i] = 0;
	}

	//constructior copy
	Vector(const Vector &src) {
		this->buf_size = src.buf_size;
		this->cur_size = src.cur_size;
		this->elements = new int[cur_size];
		for (int i = 0; i < buf_size; i++)
			elements[i] = src.elements[i];
	}

	void push_back(const int &element) {
		if (cur_size >= buf_size)
		{	
			buf_size *= 2;
			int *temp = new int[buf_size];
			for (int i = 0; i < buf_size; i++)
				temp[i] = elements[i];
			delete[] elements;
			elements = temp;
		}
		elements[cur_size++] = element;
	}


	void push_back(const int &element, int position) {
		if (cur_size >= buf_size || cur_size <= position)
		{
			while (buf_size < position)
			{
				buf_size *= 2;
			}
			int *temp = new int[buf_size];
			for (int i = 0; i < buf_size; i++)
				temp[i] = elements[i];
			for (int i = cur_size; i < buf_size; i++)
				temp[i] = 0;
			delete[] elements;
			elements = temp;
		}
		//elements[cur_size++] = 0;
		for (int i = 0; i < buf_size; i++)
		{
			if (i == position)
				elements[i - 1] = element;
		}
	}

	void push_forward(const int &position) {
		if (position == cur_size)
			elements[cur_size--];
		else
		{	
			int * temp = new int[cur_size - 1];
			int j = 0;
			for (int i = 0; i < cur_size; i++)
			{
				if (i + 1 == position)
				{	
					i++;
					for (int k = i; k < cur_size; k++)
					{
						temp[j] = elements[k];
						j++;
						i++;
					}
				}
				else
				{
					temp[j] = elements[i];
					j++;
				}
					
			}
			delete[]elements;
			elements = temp;
			elements[cur_size--];
		}
	}

	void printVector() {
		for (int i = 0; i < cur_size; i++)
			cout << left << setw(5) << elements[i];
	}

	void printVector2() {
		for (int i = 0; i < buf_size; i++)
			cout << left << setw(5) << elements[i];
	}

	void printVector3() {
		for (int i = 0; i < buf_size; i++)
			printf("%d) %d\t", i + 1, elements[i]);
	}

	void VectorFilling(const int &length) {
		for (int i = 0; i < length; i++)
		{
			elements[i] = i + 1;
		}
	}

	void PositionChange(const int &length, const int &pos, const int &numb) {
		for (int i = 0; i < length; i++)
		{
			if (i + 1 == pos)
				elements[i] = numb;
		}
	}

	int getMeaning(const int &length, const int & pos) {
		for (int i = 0; i < length; i++)
		{
			if (i + 1 == pos)
				return elements[i];
		}
	}

	~Vector() { delete[]elements; };
private:
	int cur_size;
	int buf_size;
	int *elements;
};

//Vector::Vector()
//{
//}
//
//Vector::~Vector()
//{
//}