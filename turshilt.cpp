#include<iostream>

 using namespace std;
 
 int main(){
 	float a,b,c,d,e,f,g,h,i,j,k,l;
 	
 	cout<<"type number seven  = ";
 	cin>>a;
    cout<<"Multiply by the month of your birth = ";
    cin>>b;
    cout<<"answer is = "<<a*b<<endl;
    
    cout<<"Subtract 1 = ";
    cin>>c;
    cout<<"answer is = "<<a*b+c<<endl;
    
    
    cout<<"Multiply by 13 = ";
    cin>>d;
    cout<<"answer is = "<<(a*b-1)*d<<endl;
    
    
    cout<<" Add the day of your birth= ";
    cin>>e;
    cout<<"answer is = "<<(a*b-1)*d+e<<endl;
    
    cout<<" Add 3= ";
    cin>>f;
    cout<<"answer is = "<<(a*b-1)*d+e+f<<endl;
    
    cout<<" Multiply by 11= ";
    cin>>g;
    cout<<"answer is = "<<((a*b-1)*d+e+f)*g<<endl;
    
    cout<<" Subtract the month of your birth= " ;
    cin>>h;
    cout<<"answer is = "<<((a*b-1)*d+e+f)*g+h<<endl;
    
    cout<<" Subtract the day of your birth= ";
    cin>>i;
    cout<<"answer is = "<<((a*b-1)*d+e+f)*g+h+i<<endl;
    
    cout<<" Divide by 10= ";
    cin>>j;
    cout<<"answer is = "<<(((a*b-1)*d+e+f)*g+h+i)/j<<endl;
    
    cout<<" Add 11 = ";
    cin>>k;
    cout<<"answer is = "<<(((a*b-1)*d+e+f)*g+h+i)/j+k<<endl;
    
    cout<<" Divide by 100 = ";
    cin>>l;
    cout<<"Hello your birthday is "<<((((a*b-1)*d+e+f)*g+h+i)/j+k)/l<<endl;
    
   

 	
 	
 	
 }
