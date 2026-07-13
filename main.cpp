#include <iostream>
#include <vector>

double currentbalance = 0;
double vardipositmoney = 0;
double varwithdrawmoney = 0;

void depositmoney()
{
    std::cout << "Enter Money to Deposit: ";
    std::cin >> vardipositmoney;
    currentbalance += vardipositmoney;
    std::cout << vardipositmoney << " is Deposit successfully!\n";
}
void withdrawmoney()
{
    std::cout << "Enter Money to Withdraw: ";
    std::cin >> varwithdrawmoney;
    if (varwithdrawmoney > currentbalance)
    {
        std::cout << "------------------------------------------------------------------\n";
        std::cout << "\tOops! Something Went Wrong.\n\tWithdraw amount is large can't perform operation";
        std::cout << "\n------------------------------------------------------------------";
    }
    else
    {
        currentbalance -= varwithdrawmoney;
        std::cout << varwithdrawmoney << " is Withdraw successfully!\n";
    }
}
void checkcurrentbalance()
{
    std::cout << "Your current balance in M.M bank is " << currentbalance << " /=\n";
}
void accountbalance()
{
    std::cout << "\n------------------------------------------------------";
    std::cout << "\n\tUsername: Muhammad Mustafa\n";
    std::cout << "\tPasskey: 25082010\n";
    std::cout << "\tYour current balance: " << currentbalance << " /=\n";
    std::cout << "\n------------------------------------------------------";
}
int main()
{
    std::cout << "=================================";
    std::cout << "\n\tM.M Bank System\n";
    std::cout << "=================================\n\n";
    char userchoice;
    int bankuserchoice;
    do
    {
        { // User Bank Options
            std::cout << "Please enter Valid no\n";
            std::cout << "---------------------------\n";
            std::cout << "1.Deposit Money\n";
            std::cout << "2.Withdraw Money\n";
            std::cout << "3.Check Current Balance\n";
            std::cout << "4.Account Details\n";
            std::cout << "5.Exit\n";
            std::cout << "---------------------------\n";
            std::cout << "\nEnter Number: ";
            std::cin >> bankuserchoice;
        }

        if (bankuserchoice == 1)
        {
            depositmoney();
        }
        else if (bankuserchoice == 2)
        {
            withdrawmoney();
        }
        else if (bankuserchoice == 3)
        {
            checkcurrentbalance();
        }
        else if (bankuserchoice == 4)
        {
            accountbalance();
        }
        else if (bankuserchoice == 5)
        {
        }
        std::cout << "\nDo you want to continue the Program: ";
        std::cin >> userchoice;
        std::cout << "\n";
    } while (userchoice == 'y' || userchoice == 'Y');

    return 0;
}