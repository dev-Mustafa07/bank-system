#include <iostream>
#include <vector>

double currentbalance = 0;
double diposingmoney = 0;
double withdrawmoneyy = 0;

void depositmoney()
{
    std::cout << "Enter Monay to Deposit: ";
    std::cin >> diposingmoney;
    currentbalance += diposingmoney;
}
void withdrawmoney()
{
    std::cout << "Enter Monay to Withdraw: ";
    std::cin >> withdrawmoneyy;
    currentbalance -= withdrawmoneyy;
}
void checkcurrentbalance()
{
    std::cout << "Your current balanace in M.M bank is " << currentbalance << " /=\n";
}
void accountbalance()
{
    std::cout << "\nUsername: Muhammad Mustafa\n";
    std::cout << "Passkey: 25082010\n";
    std::cout << "Your current balanace: " << currentbalance << " /=\n\n";
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
        { // User Bank Otions
            std::cout << "Please enter Valid no\n";
            std::cout << "---------------------------\n";
            std::cout << "1.Deposit Money\n";
            std::cout << "2.Withdraw Money\n";
            std::cout << "3.Check Current Balance\n";
            std::cout << "4.Account Detils\n";
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
        std::cout << "\nDo you want to continue the Program: ";
        std::cin >> userchoice;
        std::cout << "\n";
    } while (userchoice == 'y' || userchoice == 'Y');
    return 0;
}