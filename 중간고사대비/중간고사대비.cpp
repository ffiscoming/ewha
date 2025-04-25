#include <iostream>
using namespace std;

struct TermDeposit
{
	char name[20];
	int deposit;
	double interestRate;
	bool interestType;
	int year;
};
struct Account
{
	char ID[20];
	int number;
	TermDeposit* termDeposits;
	int *balances;
	int* interestTaxes;
};

void setAccount(Account&);
void showAccount(const Account&);
char* showComma(const int);

int main()
{
	Account account = {};
	setAccount(account);
	showAccount(account);
	return 0;
}

void setTermDeposit(TermDeposit& termDeposit)
{
	cout << "Enter name: ";
	cin >> termDeposit.name;
	cout << "Enter deposit: ";
	cin >> termDeposit.deposit;
	cout << "Enter interest rate: ";
	cin >> termDeposit.interestRate;
	cout << "Enter interest type (0 for simple, 1 for compound): ";
	cin >> termDeposit.interestType;
	cout << "Enter year: ";
	cin >> termDeposit.year;
}
void showTermDeposit(const TermDeposit& termDeposit)
{
	cout << "Name: " << termDeposit.name << endl;
	cout << "Deposit: " << showComma(termDeposit.deposit) << endl;
	cout << "Interest Rate: " << termDeposit.interestRate << "%" << endl;
	cout << "Interest Type: ";
	if (termDeposit.interestType)
		cout << "Simple" << endl;
	else
		cout << "Compound" << endl;
	cout << "Year: " << termDeposit.year << endl;
}
int claSimpleInterest(const TermDeposit& termDeposit)
{
	return int(termDeposit.deposit * termDeposit.interestRate / 100 * termDeposit.year);
}
int claCompoundInterest(const TermDeposit& termDeposit)
{
	return int(termDeposit.deposit * (pow(1 + termDeposit.interestRate / 100, termDeposit.year) - 1));
}
int calInterest(const TermDeposit& termDeposit)
{
	if (termDeposit.interestType)
		return claSimpleInterest(termDeposit);
	else
		return claCompoundInterest(termDeposit);
}
int calInterestTax(const TermDeposit& termDeposit)
{
	return int(calInterest(termDeposit) * 15.4/100);
}
int calBalance(const TermDeposit& termDeposit)
{
	return termDeposit.deposit + calInterest(termDeposit) - calInterestTax(termDeposit);
}
void setAccount(Account& theAccount)
{
	cout << "Enter ID: ";
	cin >> theAccount.ID;
	cout << "Enter number of term deposits: ";
	cin >> theAccount.number;

	theAccount.termDeposits = new TermDeposit[theAccount.number];
	theAccount.balances = new int[theAccount.number];
	theAccount.interestTaxes = new int[theAccount.number];
	for (int i = 0; i < theAccount.number; ++i)
	{
		cout << "-------------------------\n";
		cout << "account " << i + 1 << ":" << endl;
		setTermDeposit(theAccount.termDeposits[i]);
		theAccount.balances[i] = calBalance(theAccount.termDeposits[i]);
		theAccount.interestTaxes[i] = calInterestTax(theAccount.termDeposits[i]);
	}
}
void showAccount(const Account& theAccount)
{
	cout << "==========================\n";
	cout << theAccount.ID << "'s account info\n";
	for (int i = 0; i < theAccount.number; i++)
	{
		cout << "==========================\n";
		showTermDeposit(theAccount.termDeposits[i]);
		cout << "Balance: " << showComma(theAccount.balances[i]) << endl;
		cout << "Interest Tax: " << showComma(theAccount.interestTaxes[i]) << endl;
	}
	cout << "==========================\n";
}
char* showComma(const int n)
{
	int len(0), m(n);
	while (m > 0)
	{
		m /= 10;
		len++;
	}
	int num_comma(0);
	for (int i = 1; i <= len; i++)
		if (!(i % 3)) num_comma++;
	char* char_comma = new char[len + num_comma + 1];
	char_comma[len + num_comma] = '\0';
	m = n;
	int index_char(len + num_comma - 1);
	for (int i = 1; i <= len; i++)
	{
		char_comma[index_char] = char('0' + m % 10);
		index_char--;
		m /= 10;
		if (!(i % 3))
		{
			char_comma[index_char] = '.';
			index_char--;
		}
	}
	return char_comma;
}