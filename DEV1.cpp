#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Valid( int N){
	int J,R,D;
	
	R = (N*N)/10;
	J = (N*N)%10;
	D = 10;
	while ((R!=0)&&(J!=N)){
			
		J =J + (R%10)*D;
		R = R/10;
		D = D*10;
		
	}
	
	return J;
	
}


int main(int argc, char** argv) {
	
	int N,J;
	
	printf("Give an Integer N: ");
	scanf("%d",&N);
	
	J=Valid(N);
	
	if ( J == N){
		printf("This number is valid");
	}
	else{
		printf("This number is not valid");
	}
	
	return 0;
}
