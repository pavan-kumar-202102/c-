#include<iostream>
#include<string>
using namespace std;
class car{
	public:
		string name;
		int year;
		string model;
		car(string x,string y,int z){
			name=x;
			model=y;
			year=z;
		}
};
int main()
{
	int a,b;
	car obj("bmw","xnxy",1999);
	cin>>
	a>>b;
	a=a+b;
	cout<<a;
	cout<<obj.name<<" "<<obj.model<<" "<<obj.year;
	return 0;
}