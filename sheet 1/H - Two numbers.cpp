#include <iostream>
using namespace std;
int main(){
double num1 ,num2;
cin >> num1 >> num2;
double reslut = num1 / num2;
cout <<"floor "<<num1 <<" / " << num2<<" = " <<floor(reslut)<<endl;
cout <<"ceil "<<num1 <<" / " << num2 <<" = "<<ceil(reslut)<<endl;
cout <<"round "<<num1 <<" / " << num2 <<" = "<<round(reslut)<<endl;

}
