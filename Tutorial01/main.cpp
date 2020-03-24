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
/**
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
**/

// cpp 07 - statements 
/**
#include <iostream>

using namespace std;

int main(){
    
    int num1; 
    cout << "Enter a number: ";
    cin >> num1;
    
    // IF statement 
    if(num1 < 3){
        cout << "Num1 is less than 3." << endl; 
    }
    else if(num1 > 3){
        cout << "Num1 is greater than 3." << endl;
    }
    else {
        cout << "Num1 is equal 3" << endl;
    }
    
    // Switch case 
    char grade;
    cout << "Enter a grade" << endl;
    cin >> grade;
    
    // char grade = 'B';
    switch(grade){
        case 'A':{
            cout << "You made a 90 or above." << endl;
            break;
        }
        case 'B':{
            cout << "You made a 80 or above." << endl;
            break;
        }
        case 'C':{
            cout << "You made a 70 or above." << endl;
            break;
        }
        case 'F':{
            cout << "You failed." << endl;
            break;
        }
        default:
            cout << "You dont have a grad" << endl;
    }
    return 0;
}

**/
/**
// CPP 08 - Practical Application
#include <iostream>

using namespace std;

int main(){
    
    int choice;
    double number_1, number_2;
    cout << "Enter number 1: ";
    cin >> number_1;
    cout << endl << endl << "Enter number 2: ";
    cin >> number_2;
    cout << endl << endl << endl;
    
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl; 
    cout << "4. Division" << endl; 
    cout << endl << endl << "Enter a choice: ";
    cin >> choice;
    
    switch(choice){
       case 1: {
           cout << "RESULT = " << number_1 + number_2 << endl;
           break;
       }
       case 2: {
           cout << "RESULT = " << number_1 - number_2 << endl;
           break;
       }
       case 3: {
           cout << "RESULT = " << number_1 * number_2 << endl; 
           break;
       }
       case 4: {
           cout << "RESULT = " << number_1 / number_2 << endl;
           break;
       }
       default:
            cout << "Exiting: You entered an invalid number." << endl;
    }
    
    return 0;
}
**/

// CPP09 - Loops 
/**
#include <iostream>

using namespace std;

int main(){
    
    int run = 10;
    
    // while loop 
    while (run >= 0){
        cout << run << endl;
        run +=1;
    }
    
    // Do while loop
    do{
        cout << run << endl;
        run -=2;
    } while (run >= 0);
    
    // For loop
    int value = 0;
    for(int index = 0; index < 10; index++){
        cout << value << endl;
        value+=5;
    }
    
    return 0;
    
}
 **/
 
// CPP 10 - Arrays
/**
#include <iostream>
#include <fstream>
 
using namespace std; 
 
int main()
{
//     const int SIZE = 3;
//     string grocery_list[SIZE] = {"eggs", "milk", "bread"};
//     for(int index = 0; index < SIZE, index++){
//         cout << grocery_list[index] << endl;
//     }
     
     ofstream output_file("names.txt");
     if(!output_file){
         cout << "The file could not be found." << endl;
         return -5;
     }
     
     string name = "Zach";
     output_file << name << endl; 
     
     return 0;

}
**/

// CPP 11 - Inputs
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main()
{
    const int SIZE = 12;
    string names_list[SIZE] = {""};
    string temp_name; 
    
    ifstream input_file("names.txt");
    if(!input_file){
        cout << "File not found." << endl;
        return -6;
    }
    
    // Pre-Read 
    input_file.ignore(255, '\n');
//    input_file >> temp_name;
    getline(input_file, temp_name);
    int index = 0;
    while(!input_file.eof()){
        
        names_list[index] = temp_name;
        index++;
        // Post-Read
//        input_file >> temp_name;
        getline(input_file, temp_name);
    }
    
    for(int i = 0; i < SIZE; i++){
        cout << i << "  " << names_list[i] << endl; 
    }
    
    cout << left << setprecision(2) << fixed;
    double double_value = 201.792;
    int integer_value = 227;
    cout << endl << endl << endl;
    cout << setw(25) << double_value << setw(25) << integer_value << endl;
    return 0;
}
