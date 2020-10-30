#include <iostream>
using namespace std;
void calcPos();

int main(int argc, char *argv[]) {
	calcPos();
	return 0;
}


void calcPos(){
	int T = 0;
	int n = 0;
	int m = 0;
	
	cout << "Ingrese el número de casos de prueba: ";
	cin >> T;
	
	if(1 <= T && T <= 5000){
		while(0<T){
			cout << "Ingrese un valor para n: ";
			cin >> n;
			cout << "Ingrese un valor para m: ";
			cin >> m;
			
			//cuando n < m o cuando n == m
			if(n < m || n == m){
				if(n % 2 == 0)cout << 'L';
				else cout << 'R';
			}
			
			//cuando n > m
			if(n > m){
				if(m % 2 == 0)cout << 'U';
				else cout << 'D';
			}
			
			cout<< '\n';
			T--;
		}
	}else{
		cout << "T debe ser mayor a 1 y menor a 5000";
	}
}
