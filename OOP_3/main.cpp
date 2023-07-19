#include <iostream>


class MyArray
{
private:
	int* mArray;
	int mLength;

public:
	MyArray(int len) : mLength{ len }, mArray{ new int [len] {} }
	{
		//mArray = new int[len] {};
	}

	~MyArray()
	{
		delete[] mArray;
	}
};


int main()
{
	MyArray array{ 100 };
}