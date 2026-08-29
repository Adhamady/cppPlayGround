#include <iostream>
#include "bank.h"
#include <stdexcept>
BankAccount::BankAccount(int accountNumber, int balance)
    : accountNumber(accountNumber), balance(balance)
{
    if (balance < 0)
    {
        throw std::invalid_argument("Balance cannot be negative");
    }
}
int BankAccount::getBalance()
{
    return balance;
}
int BankAccount::getAccountNumber()
{
    return accountNumber;
}
void BankAccount::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}
