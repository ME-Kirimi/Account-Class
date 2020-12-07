#include<iostream>
#include <string>
#include "..\Account.h"
using namespace std;



int main()
{
	Account Account1(89);// set your own values
	Account Account2(-76);
	cout << "Account1's initial balance is: " << Account1.getAccountBalance() << "\nAccount2's initial balance is: " << Account2.getAccountBalance() << endl;
	Account1.credit(200);
	Account2.credit(34);
	cout << "\nAccount1's balance is: " << Account1.getAccountBalance() << "\nAccount2's balance is: " << Account2.getAccountBalance() << endl;
	Account1.debit(50);
	Account2.debit(34);
	cout << "\nAccount1's balance is: " << Account1.getAccountBalance() << "\nAccount2's balance is: " << Account2.getAccountBalance() << endl;
}

