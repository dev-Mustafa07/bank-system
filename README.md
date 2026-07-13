# M.M Bank System

A simple console-based Bank Management System written in C++. It simulates core banking operations — deposits, withdrawals, balance checks, and account details — through an interactive command-line menu.

## Features

- 💰 **Deposit Money** — add funds to the current balance
- 💸 **Withdraw Money** — withdraw funds, with a safeguard against withdrawing more than the available balance
- 📊 **Check Current Balance** — view the up-to-date account balance
- 🧾 **Account Details** — display account holder info alongside the current balance
- 🔁 **Loop Menu** — perform multiple operations in one session without restarting the program

## Demo

```
=================================
        M.M Bank System
=================================

Please enter Valid no
---------------------------
1.Deposit Money
2.Withdraw Money
3.Check Current Balance
4.Account Details
5.Exit
---------------------------

Enter Number:
```

## Getting Started

### Prerequisites

- A C++ compiler (e.g. `g++`)

### Build & Run

Clone the repository:

```bash
git clone https://github.com/dev-Mustafa07/bank-system.git
cd bank-system
```

Compile and run:

```bash
g++ main.cpp -o bank-system
./bank-system
```

## How It Works

The program presents a menu-driven loop where the user selects an operation by number:

| Option | Action |
|--------|--------|
| 1 | Deposit money into the account |
| 2 | Withdraw money (blocked if it exceeds the current balance) |
| 3 | Check the current balance |
| 4 | View account details (username, passkey, balance) |
| 5 | Exit the program |

After each operation, the user is asked whether they'd like to continue (`y`/`n`), allowing multiple transactions in a single run.

## Tech Stack

- **Language:** C++
- **Libraries:** `<iostream>`

## Project Status

This is a beginner-friendly console project focused on core C++ fundamentals — functions, conditionals, and loops. The account balance is stored in memory only and resets each time the program is run (no file persistence yet).

## Possible Improvements

- Persist account data to a file so balances survive between runs
- Support multiple user accounts instead of a single hardcoded account
- Add input validation for invalid/non-numeric menu choices
- Replace the hardcoded passkey with a proper login system

## Author

**Muhammad Mustafa** ([@dev-Mustafa07](https://github.com/dev-Mustafa07))

## License

This project is open source and available for learning purposes.
