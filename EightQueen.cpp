#include<iostream>
using namespace std;


void printSolition(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

bool find(int a[],int r,int c){
	int i,j;
	if(c==9){
		if(r==1){
			return false;
		}
	}
	a[r-1]=c;
	for(i=c;i<9;i++){
		for(j=1;j<r;j++){
			if(abs(i-a[r-j-1])==j||abs(i-a[r-j-1])==0){
				break;
			}
		}
		if(j==r){
			break;
		}
		
	}
	if(i==9){
		
		find(a,r-1,a[r-2]+1);
		
		//return true;
	}
	else{
		a[r-1]=i;
		if(r==8){
			printSolition(a,8);
			find(a,r-1,a[r-2]+1);
			
		}
		else
			find(a,r+1,1);
	}
	
}


int main(){
	int a[8];

	find(a,1,1);
	
	
	
	return 0;

}