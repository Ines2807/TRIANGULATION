#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a,b;
	float x,y;
	float d1,d2,d3;
	float A,B;
	
	cout<<"Veillez entrer la coordonnée en abscice du lieu de premier bracage\n";
	cin>>a;	
	cout<<"Veillez entrer la coordonnee en ordonne du lieu de premier bracage\n";
	cin>>b;
	
	cout<<"Veillez entrer la coordonnee en abscisse du lieu de second bracage\n";
	cin>>x;	
	cout<<"Veillez entrer la coordonnee en ordonne du lieu de second bracage\n";
	cin>>y;
	
	
	tan=(y-b)/(x-a);
	A=a+(y-b)/tan;
	B=b+(a-x)/tan;
	
	cout<<" la coordonnee en abscisse du domicile du bandit est :\n"<<A;
	cout<<" \n la coordonnee en ordonnee du domicile du bandit est :\n"<<B;
	
	
	return 0;
}
