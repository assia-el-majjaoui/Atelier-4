#include <iostream>

#include <string>
using namespace std;
int main(){
	string chaine;
 cout<<" entrez votre chaine :  ";
 cin>>chaine;
    cout<<"\n  la chaine de caractere represente la date du : \t";
   if ( chaine.length() != 12 )
        cout << "cette Chaine invalide" << endl;
    else{ 
     if(chaine.substr(2,1)=="0" || chaine.substr(2,1)=="1"){
	
	    if(chaine.substr(0,2)=="01"){ cout<< chaine.substr(0,2)<<"er";}
	    else   cout<< chaine.substr(0,2) <<"eme";
	if(chaine.substr(2,1)=="0") {

   	    if(chaine.substr(3,1)=="1"){cout<<" Janvier "; }
	 	else if(chaine.substr(3,1)=="2"){cout<<" fevrier "; }
	 	else if(chaine.substr(3,1)=="3"){cout<<" Mars "; }
	 	else if(chaine.substr(3,1)=="4"){cout<<" Avril "; }
	 	else if(chaine.substr(3,1)=="5"){cout<<" Mai "; }
	 	else if(chaine.substr(3,1)=="6"){cout<<" Juin "; }
	 	else if(chaine.substr(3,1)=="7"){cout<<" Juillet "; }
	 	else if(chaine.substr(3,1)=="8"){cout<<" Aout "; }
	 	else if(chaine.substr(3,1)=="9"){cout<<" Septembre "; }}
   else if(chaine.substr(2,1)=="1"){
	 	 if(chaine.substr(3,1)=="0"){cout<<" Octobre "; }
	 	else if(chaine.substr(3,1)=="1"){cout<<" Novembre "; }
	 	else if(chaine.substr(3,1)=="2"){cout<<" Decembre "; }
} 
        cout<<chaine.substr(4,4) << " a ";
        cout <<chaine.substr(8,2) << "h" << chaine.substr(10,2);
}
  else cout<< "mois invalide";
  	}}
   

