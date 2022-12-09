#include <iostream>
using namespace std;
void swap(int * , int *);
void sort(int [] , int );
main(){
	int a[5]={3,4,2,5,1};
	sort(a,5);
	for(int i=0; i<5; i++)
		cout<<a[i];
}

void sort(int a[],int n){
	int *p = a;
	for(int i=0; i<5; i++)
		for(int j=0; j<4; j++){
			if(*(p+j)>*(p+j+1)){
				swap((p+j),(p+j+1));
			}
		}
		
	
}
void swap(int *p1,int *p2){
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	}