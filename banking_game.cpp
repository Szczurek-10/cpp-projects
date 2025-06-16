#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{

    double balance = 0;
    int choice = 0;

    do{
        cout << "*********************\n";
        cout << "enter your choice: \n";
        cout << "*********************\n";
        cout << "1. show balance\n";
        cout << "2. deposit money\n";
        cout << "3. withdraw money\n";
        cout << "4. exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice)
        {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout << "thanks for visiting\n";
                break;
        default: cout << "invalid choice\n";

        }
    }while(choice != 4);
    


    return 0;
}


void showBalance(double balance)
{
    cout << "your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}


double deposit()
{
    double amount = 0;
    
    cout << "enter amount to be deposited: ";
    cin >> amount;

    if(amount > 0)
    {
        return amount;
    }
    else
    {
       cout << "that is not a valid amount\n"; 
       return 0;
    }

    return amount;
}


double withdraw(double balance)
{
    double amount = 0;
    cout << "enter amount to be withdrawn: ";
    cin >> amount;
    
    if(amount > balance)
    {
        cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0)
    {
        cout << "thats not a valid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
    return amount;
}