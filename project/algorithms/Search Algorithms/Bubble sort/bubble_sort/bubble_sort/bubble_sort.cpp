#include <iostream>
#include <vector>

using namespace std;

class Somthing {
private:
    int a;
public:
	Somthing(int value)
	{
		a = value;
	}

	Somthing(Somthing& obj) {
		a = obj.a;
	}

	int operator+(Somthing b) {
		return a + b.a;
	}

};

int main()
{
    cout << "Hello World!\n";

	Somthing a(1),b(a);

	int c = a + b;

	cout << "c is = " << c;


}

