//Bao Trang
//Computer Science - Professor Benjamin Shelton
//The program prints a 10 X 10 table in which 
//each entry in the table is the sum of the row and column numbers
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ofstream outFile("output.txt");
	int r, c, sum =0, num;
	//sum is the accumulator 
	//sum is the sum of all table entries
	// When processing a table with a nested loop, the row loop goes on the
	// outside, and the column loop goes on the inside
	for (r = 1; r <= 10; r++)
	{
		for (c = 1; c <= 10 ; c++)
		{
			num = r + c;
			outFile << setw(3) << num;
			sum += num;
		}
		outFile << "\n";
	}
	outFile << "The sum of all the numvers in the table is " << sum << endl;
	
	return 0;
}