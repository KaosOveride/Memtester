#include <Windows.h>
#include <iostream>
#include <string>

#define CHAR_ARRAY_SIZE 128

using namespace std;

int main() {
	int varInt(123456);
	string varString("DefaultString");
	char arrChar[CHAR_ARRAY_SIZE] = "Long char array right there ->";
	int* ptr2int(&varInt);
	int** ptr2ptr(&ptr2int);
	int*** ptr2ptr2(&ptr2ptr);

	do {
		cout << "Process ID: " << dec << GetCurrentProcessId() << endl;//using Windows.h to get current process id
		cout << endl;
		cout << "varInt       (0x" << hex << uppercase << &varInt << ") = " << dec << varInt << endl;//getting/displaying the address of varInt
		cout << "varString    (0x" << hex << uppercase << &varString << ") = " << varString << endl; //getting/displaying address of varString
		cout << "arrChar[" << dec << CHAR_ARRAY_SIZE << "] (0x" << hex << uppercase << &arrChar << ") = " << arrChar << endl;//getting/displaying address of arrChar
		cout << endl;
		cout << "ptr2int      (0x" << hex << uppercase << &ptr2int << ") = 0x" << ptr2int << endl;//getting/displaying address of pointer 1
		cout << "ptr2ptr      (0x" << hex << uppercase << &ptr2ptr << ") = 0x" << ptr2ptr << endl;//getting/displaying of pointer 2
		cout << "ptr2ptr2     (0x" << hex << uppercase << &ptr2ptr2 << ") = 0x" << ptr2ptr2 << endl;//getting/displaying of pointer 3
		cout << endl;
		cout << "Press ENTER to print again." << endl;
		getchar();//waiting for enter key
		cout << endl << "---------------------------------------------------" << endl << endl;
	} while (true);

	return EXIT_SUCCESS;
}