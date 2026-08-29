#pragma once

class BankAccount
{
private:
    int accountNumber;
    int balance;

public:
    BankAccount(int accountNumber, int balance);

    int getBalance();
    int getAccountNumber();

    void deposit(int amount);
    void withdraw(int amount);
};