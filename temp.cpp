#include<iostream>
using namespace std;
int main()
{
	double temp,celsius,fahre,kelvin;
	char unit;
	
	cout<<"Enter the temperature: ";
	cin>>temp;
	cout<<"Enter the unit(c for celsius,f for fahre,k for kelvin): ";
	cin>>unit;
	
	if(unit=='C'||unit=='c')
	{
		fahre=(temp * 9/5) + 32;
        kelvin=temp + 273.15;
        cout<<"\nCelsius: "<<temp<<" Degree C"<<endl;
        cout<<"Fahrenheit: "<<fahre<<" Degree F"<<endl;
        cout<<"Kelvin: "<<kelvin<<" K" <<endl;
    } 
	else if(unit=='F'||unit=='f') 
	{
        celsius=(temp - 32) * 5/9;
        kelvin=(temp - 32) * 5/9 + 273.15;
        cout<<"\nFahrenheit: "<<temp<<" Degree F"<<endl;
        cout<<"Celsius: "<<celsius<<" Degree C"<<endl;
        cout<<"Kelvin: "<<kelvin<<" K"<<endl;
    } 
	else if(unit=='K'||unit=='k') 
	{
        celsius=temp - 273.15;
        fahre=(temp - 273.15) * 9/5 + 32;
        cout<<"\nKelvin: "<<temp<<" K"<<endl;
        cout<<"Celsius: "<<celsius<<" Degree C"<<endl;
        cout<<"Fahrenheit: "<<fahre<<" Degree F"<<endl;
    } 
	else 
	{
        cout<<"Invalid unit of measurement."<<endl;
	}
    return 0;
}
