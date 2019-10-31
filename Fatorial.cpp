#include <iostream>
using namespace std;

int fatorial(int n){
	int fat = 1;
	if(n == 0){
		fat = 1;	
	}else	if(n>0){
			fat = n * fatorial(n-1);
		}
	return fat;
}

int quadrado(int n){

	int quad = 0;

	quad = n*n;

	return quad;

}

int main(void){
	int n = 0, fat = 0;
	int quad = 0;
	
	cout << "Please, enter a number for calcule the fatorial: ";
	cin >> n;
	cout << "\n";
	
	fat = fatorial(n);
	quad = quadrado(n);

	cout << "The fatorial(" << n << ") is: "  << fat << "\n";

	cout << "The quad of(" << n << ") is: "  << quad << "\n";

	return 0;
}
