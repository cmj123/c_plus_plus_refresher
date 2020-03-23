/**
#include <stdio.h>

using namespace std; 

int main(int argc, char **argv)
{
//	 printf("hello world\n");
	return 0;
}
**/

// CPP 04 - Complile Output
/**
#include <iostream>

using namespace std; 

int main(){
    
    char letter = 'B';
    int number = 7;
    string name = "Bill99";
    double decimal = 7.77;
    
    cout << "Hello World " << endl << letter << endl << number << endl << name << endl << decimal << endl;
    return 0;
}
**/

// CPP 05 - Compiler Input
/**
#include <iostream>

using namespace std;

int main(){
    
    string name = "Zach";
    int age = 23;
    cout << name << " is " << age <<  " years old." << endl << endl;
    
    // Get name 
    string name_2;
    cout << "Enter name 2: ";
    cin >> name_2;
    cout << endl << "You entered: " << name_2 << endl;
    
    // Get age 
    int age_2;
    cout << "Enter age 2: ";
    cin >> age_2;
    cout << endl << "You entered: " << age_2 << endl;
    
    
    return 0;
}
 **/

// cpp 06 - operations 
#include <iostream>

using namespace std;

int main(){
    
    int num1 = 60;
    int num2 = 6;
    
    cout << "Sum - " << (num1 + num2) << endl;
    cout << "Subract - " << (num1 - num2) << endl;
    cout << "Multiply - " << (num1 * num2) << endl;
    cout << "Division - " << (num1 / num2) << endl;
    cout << endl;
    
    // String concantenation
    string first_name = "Tom";
    string last_name = "Jones";
    string  fullname = first_name + " " + last_name;
    cout << fullname << endl;
    return 0;
}
