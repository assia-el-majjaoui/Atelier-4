#include<iostream>
using namespace std;
class complexe {
	float re;
	float im;
	public :
	complexe(float re=0 , float im =0) :  re(re), im(im){ }
	
			
 complexe operator+( const complexe & x){
 	      complexe S ;
	      S.re =re+x.re;
	      S.im =im+x.im;   
	     cout<<S.re<<" + i "<< S.im ;
	     
	   }
			
 complexe operator-( const complexe & x){
 	      complexe St ;
	      St.re =re-x.re;
	      St.im =im-x.im;   
	      cout<<St.re<<" + i "<< St.im ;
	     
	   }
			
 complexe operator/( const complexe & x){
 	      complexe D ;
	      D.re =re/x.re;
	      D.im =im/x.im;   
	        cout<<D.re<<" + i "<< D.im ;  
	     
	   }
			
 complexe operator*( const complexe & x){
 	      complexe P;
	      P.re =re*x.re;
	      P.im =im*x.im;   
	        cout<<P.re<<" + i "<< P.im ; 
	   }
};
int main (){
float a , b , c , d;
 
    	cout<<"entrez la partie reelle de premier nombre : " ;
		cin>>a;
		cout<<"entrez la partie imaginaire de premier nombre : " ;
		cin>>b;
		cout<<endl;
		cout<<"entrez la partie reelle de deuxieme nombre : ";
		cin>>c;
		cout<<"entrez la partie imaginaire de deuxieme nombre : " ;
		cin>>d;
		cout<<endl;
complexe N1(a,b);
complexe N2(c,d);

cout<< "la somme de ces nombres complexes est :  " ;  N1+N2; 
cout<<endl;
cout<< "le produit de ces nombres complexes est :  " ; N1*N2; 
cout<<endl,
cout<< "la soustraction de ces nombres complexes est :  " ; N1-N2; 
cout<<endl,
cout<< "la devision de ces nombres complexes est :  " ; N1/N2; 
}
