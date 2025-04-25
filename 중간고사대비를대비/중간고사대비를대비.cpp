#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int classifyRate(int income) 
{
    if (income <= 1200) return 1;
    else if (income <= 4600) return 2;
    else if (income <= 8800) return 3;
    else if (income <= 15000) return 4;
    else if (income <= 30000) return 5;
    else if (income <= 50000) return 6;
    else return 7;
}

int taxRate(int rateClass) 
{
    switch (rateClass) 
    {
    case 1: return 6;
    case 2: return 15;
    case 3: return 24;
    case 4: return 35;
    case 5: return 38;
    case 6: return 40;
    case 7: return 42;
    default: exit(1);
    }
}

void calTax(int income, int& tax) 
{
    int rateClass = classifyRate(income);
    int rate = taxRate(rateClass);
    tax = income * rate / 100;
}

void showResults(int income, int tax) 
{
    cout << income << ", tax: " << tax << endl;
}

void showResults(int i, int income, int tax) 
{
    cout << i << ": " << income << ", tax: " << tax << endl;
}

int main() 
{
    srand(time(0));
    int n;
    cout << "Enter the iteration number: ";
    cin >> n;

    int totalTax = 0;
    for (int i = 1; i <= n; ++i) 
    {
        int income = rand() % 70001 + 1000;
        int tax;
        calTax(income, tax);
        showResults(i, income, tax);
        totalTax += tax;
    }

    cout << "tax average = " << totalTax / n << endl;

    return 0;
}
