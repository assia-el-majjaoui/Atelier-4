#include <iostream>
using namespace std;
class Elments ;
class Chien ;
class Repas ;
class Race {
	protected :
	    char specificite;
	    israseHybride();
	    Race(){ cout<<"class Race\n";
		}
};

class Animal {
	protected :
		string nom;
		int age;
		string genre;
		Animal(){ cout<<"class Animal\n";
		}
};
class Chat : public Animal {
	private :
	    string type;
	public :
		Repas * rep ;
	    sauter();
		Chat(){ cout<<"class Chat\n";
		}
};
class Entraineur {
	private :
		string nom ; 
		string description ;
		Chien *chn;
		Entraineur(){ cout<<"class Entrainteur \n";
		}	
};
class Chien : public Animal , public Race {
	private :
		string taille ;
		Entraineur * entr ;
	public : 
	    ischass3();
	    Chien(){ cout<<"class Chien\n";
		}
};
class Repas {
	private :
	    string nom ;
		int heure ;
		string description ; 
    	Elments *elm;
	public :
	    Chat * ch ; 
    	Repas(){ cout<<"class Repas\n";
		}
};
class Elments {
	private :
		string nom ;
		string type ;
		Elments(){ cout<<"class Elments\n";
		}	
};

class Compitition {
	private :
		string date ;
		string nom ;
	public : 
	    int ordre ;
		Compitition(){ cout<<"class Comptition\n";
		}    
};
int main (){
 Chat ch ;// pour tester
 cout<<endl;
 Chien c;	// pour tester

	
}
