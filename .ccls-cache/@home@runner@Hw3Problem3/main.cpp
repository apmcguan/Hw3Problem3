#include <iostream>
#include <cmath>
using namespace std;



int main() {
  float E;
  float R;
  float RC;
  float t;
  
  

  cout<<"E is the voltage of the battery in volts. \nR is the value of the resistor in ohms.\nC is the value of the capacitor in farads. \nt is the time in seconds after the switch is closed."<<endl;
  cout<<" Enter value for E: "<<endl;
  cin>>E;
  cout<<" Enter value for R: " <<endl;
  cin>>R;
  cout<<" Enter value for RC:" <<endl;
  cin>>RC;
   cout<<" Enter value for t: " <<endl;
  cin>>t;


  /*double current;
  current = pow((E/R)*e,((-t/(R*C))));*/
  double e ;
  e =  2.71828;
  double i;
  //i=pow((E/R),e*((-t/(RC))));
  i = (E/R) * pow(e,(-t/(RC)));
  cout<<" Current of the circut = "<< i <<endl;
  
  
  
  
  
  
  
  
 
  
}