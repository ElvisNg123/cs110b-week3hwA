#include <iostream>
#include <cmath>
using namespace std; 
void showmenu(){
	cout <<"Enter your choice"<< endl;
	cout <<"1 for Addition"<< endl;
	cout <<"2 for Subtraction"<< endl;
	cout <<"3 for Multiplication"<< endl;
	cout <<"4 for Division"<< endl;
	cout <<"5 for Square Root"<< endl;
	cout <<"6 for Square"<< endl;
	cout <<"7 for Cube Root"<< endl;
	cout <<"8 for Cube"<< endl;
	cout <<"9 for Power"<< endl;
}

float Addition(float num1, float num2){
  return (num1 + num2);
}

float Subtraction(float num1, float num2){
  return (num1 - num2);
}

float Multiplication(float num1, float num2){
  return (num1 * num2);
}

float Division(float num1, float num2){
  return (num1/num2);
}

float Squareroot(float num1){
  return (sqrt(num1));
}

float Square(float num1){
  return (num1 * num1);
}

float Cuberoot(float num1){
  return (cbrt(num1));
}

float Cube(float num1){
  return (num1*num1*num1);
}

float Power(float num1, float num2){
  return pow(num1, num2);
}

int main(){
	int  choice;
  float num1, num2, result;
  showmenu();
	cin >> choice;
	
while(choice > 0 || choice < 10){
		switch(choice){ //do addition
			case 1: 
        cout << "Enter your first number" << endl;
        cin >> num1;
        cout <<"Enter second number"<< endl;
        cin >> num2;
        result = Addition(num1, num2);
			  break;
			case 2: //do subtraction
        cout << "Enter first number" << endl;
        cin >> num1;
        cout<<"Enter a number to be subtracted"<< endl;
        cin >> num2;
			  result = Subtraction(num1, num2);
			  break;
			case 3://do multiplication
        cout << "Enter first number"<< endl;
        cin >> num1;
        cout<<"Enter second number"<< endl;
        cin >> num2;
        result = Multiplication(num1,num2);
			break;
			case 4://do division
			cout <<"Enter first number"<< endl;
			cin >> num1;
			cout<<"Enter second number"<< endl;
			cin >> num2;
			if (num2<=0){
        cout<<" Cannot be divided by 0 or a negative number"<< endl;
      }else{
        result = Division(num1,num2);
      }
			break;
			case 5: //Square Root
			cout << "Enter a number"<< endl;
			cin >> num1;
			result = Squareroot(num1);
			break;
			case 6: //Square
			cout << "Enter first number"<< endl;
			cin >> num1;
			result = Square(num1);
			break;
			case 7: // Cuberoot
			cout << "Enter a number"<< endl;
			cin >> num1;
			result = Cuberoot(num1);
			break;
			case 8:// Cube
			cout << "Enter first number"<< endl;
			cin >> num1;
			result = Cube(num1);
			break;
			case 9:// Power
			cout << "Enter number"<< endl;
			cin >> num1;
			cout << "Enter the power"<< endl;
			cin >> num2;
			result = Power(num1, num2);
			default:  
			cout << "Invalid Input, try again"<< endl;	
		}

		cout << "The result is " << result << endl;
    cout <<"Enter your choice"<< endl;
	  cin >> choice;
	  }
}



