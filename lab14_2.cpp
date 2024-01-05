#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void showMatrix(const bool M[][N])
{
 for(int a=0;a<N;a++){
    for(int b=0;b<N;b++){
	cout<<M[a][b];
	cout<<" ";
	}
  cout<<endl;
 }
}
void inputMatrix(double M[][N]){
 for(int a=0; a<N; a++)
  {
	cout << "Row " << a+1 << ": ";
    for(int b=0;b<N;b++) {
	cin>>M[a][b];
  }
}
}
void findLocalMax(const double M[][N], bool S[][N]){
for(int i = 0; i<N; i++){
	for (int j = 0; j<N; j++){
		if(M[i][j]>= M[i-1][j] && M[i][j]>= M[i][j+1] && M[i][j]>= M[i][j-1] && M[i][j]>= M[i+1][j] ){
			S[i][j]=1;
		}
		else{
			S[i][j]=0;
		}
		S[i][0] = 0;
        S[i][N-1] = 0;
		}
	for(int I = 0; I < N; I++) S[0][I] = 0;
    for(int J = 0; J < N; J++ ) S[N-1][J] = 0;
}

}