#include <iostream>
#include <cmath>
using namespace std;



int main() {
  float E;
  float R;
  float C;
  float t;
  float e;
  e =  2.71828;
  

  cout<<"E is the voltage of the battery in volts. \nR is the value of the resistor in ohms.\nC is the value of the capacitor in farads. \nt is the time in seconds after the switch is closed."<<endl;
  cout<<" Enter value for E: "<<endl;
  cin>>E;
  cout<<" Enter value for R: " <<endl;
  cin>>R;
  cout<<" Enter value for C:" <<endl;
  cin>>C;
  cout<<" Enter value for t: " <<endl;
  cin>>t;

  /*double current;
  current = pow((E/R)*e,((-t/(R*C))));*/
  double i;
  i=pow((E/R)*e,((-t/(R*C))));
  cout<<" Current of the cirrcut = "<< i <<endl;
  
  
  
  
  
  
 
  
}