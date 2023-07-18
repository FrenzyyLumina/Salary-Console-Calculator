#include <iostream>
#include <string>

// You might see someone with similar code, thats probably because I helped them.

// Pro C++ Programmers never use "using namespace std;"
using std::string;
using std::endl;
using std::cout;
using std::cin;


int main() {
	// Variables
	string EmployeeName;
	string PayRollPeriod;

	int RegularWorkHours;
	int OvertimeWorkHours;

	double RegularRate = 246.12;
	double OvertimePay;
	double GrossPay;
	double BasicSalary;
	double NetPay;

	double Tax;

	// Main
	cout << " Hi User, I am here to calculate your salary just please answer my questions and I will calculate it for you!\n";

	cout << "Please Input PayrollPeriod in the format of StartDate-EndDate\n";
	cin >> PayRollPeriod;
	

	cout << "Please input workers name.\n ";
	cin >> EmployeeName;

	cout << "Please Input Regular Work Hours\n";
	cin >> RegularWorkHours;

	cout << "Please Input Overtime Work Hours\n";
	cin >> OvertimeWorkHours;

	// Calculate
	BasicSalary = RegularRate * RegularWorkHours;

	OvertimePay = OvertimeWorkHours * (RegularRate * 1.5);

	GrossPay = OvertimePay + BasicSalary;

	Tax = GrossPay * 0.15;

	NetPay = GrossPay - Tax;
	
	// Output
	cout << "Payroll Period: " << PayRollPeriod << endl;
	cout << EmployeeName << "'s Salary\n";
	cout << EmployeeName << "'s Basic Salary: " << BasicSalary << endl;
	cout << EmployeeName << "'s Overtime Salary: " << OvertimePay << endl;	
	cout << EmployeeName << "'s GrossPay: " << GrossPay << endl;
	cout << "Tax: " << Tax << endl;
	cout << EmployeeName << "'s Total Pay: " << NetPay << endl;

	return 0;	
	}