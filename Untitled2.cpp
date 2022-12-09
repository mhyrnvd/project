#include <iostream>
#include <string>
using namespace std;
void sort(int *p1,int *p2,int *p3){
	int a1,a2,a3;
 if(*p1>*p2 && *p1>*p3){
 	a1 = *p1;
 	if(*p2>*p3){
    a2 = *p2;
    a3 = *p3;
}
 	else{
    a3 = *p2;
    a2 = *p3;
}
 if(*p2>*p1 && *p2>*p3){
 	a1 = *p2;
 	if(*p1>*p3){
    a2 = *p1;
    a3 = *p3;
}
 	else{
    a3 = *p1;
    a2 = *p3;
}
 }
  if(*p3>*p2 && *p1<*p3){
 	a1 = *p3;
 	if(*p2>*p1){
    a2 = *p2;
    a3 = *p1;
}
 	else{
    a3 = *p2;
    a2 = *p1;
}
    cout<< "a after sort:" << a1 << " b after sort:" << a2<< " c after sort:" << a3;

}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<< "a before sort:" << a << " b before sort:" <<b<<"c before sort:" << c << endl;
int *p1=&a;
int *p2=&b;
int *p3=&c;
sort(p1,p2,p3)
}