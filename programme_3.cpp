#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
	int a ,n;
list <int> list1;
cout<<"entrez le nombre des entiers :  " ;
cin>>n;
cout << endl;
for (int i = 0; i < n; ++i)
{
cout<<"donnez la valeur de entier numero "<<i+1<<" : " ;
	 cin>>a;	
	 list1.push_back(a);
}
cout<<endl;
list1.sort();
cout<<"la liste triee est :  ";
list <int> :: iterator it;
for(it = list1.begin(); it != list1.end(); ++it)
cout << '\t' << *it;


return 0;
}
