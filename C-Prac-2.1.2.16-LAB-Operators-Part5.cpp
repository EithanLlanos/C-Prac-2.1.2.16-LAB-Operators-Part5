//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them, but do not change any numeric values.
//
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//#include <stdio.h>
//
//int main()
//{
//	int xValue = 4 * 6 % 5;
//	int eightValue = 2 xValue 10 5;
//	printf("The value of eight is: %d\n", eightValue);
//	return 0;
//}
//
//Expected output
//The value of eight is : 8
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
	int xValue = 4 * 6 + 5;
	int eightValue = 2 * (xValue % 10 % 5);
	printf("The value of eight is: %d\n", eightValue);
	return 0;
}








