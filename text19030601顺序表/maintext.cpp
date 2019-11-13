#include "SeqList.cpp"
#include "iostream"
using namespace std;

typedef int Status;

#define PI 3.14
#define Second 2;

#define First 1;


void main()
{
	int number[10];
	int aaa;
	cout << "input number 10:" << endl;

	for (int i=0;i<10;i++)
	{
		cin >> number[i];
	}
	SeqList<int> text(number, 10);
	text.GetElem(5, aaa);
	cout << aaa;
	//text.~SeqList();


                cout<<Second;

               cout<<First;

}


