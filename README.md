# Inventory Management System (C++)

## Overview

This project is a console-based **Inventory Management System** developed in C++. It allows users to manage products, invoices, and sales efficiently through a menu-driven interface. The system demonstrates object-oriented programming concepts such as classes, encapsulation, and dynamic memory allocation.

## Features

### Product Management

* Add new products
* Update existing product details
* Delete products (with validation against sales records)
* Display all products
* Search and display product by ID

### Invoice Management

* Create new invoices
* Update invoice details
* Delete invoices
* Display all invoices
* Search invoice by invoice number
* Display invoices with discount greater than 10%

### Sales Management

* Record new sales
* Update sales records
* Delete sales entries
* Display all sales
* Search sales using Product ID, Invoice Number, and Quantity

## Technologies Used

* C++ (Core Language)
* Object-Oriented Programming (OOP)
* Standard Libraries:

  * `<iostream>` for input/output
  * `<cstring>` for string handling
  * `<limits>` for input validation

## Program Structure

The system is divided into three main classes:

* **Product Class**

  * Handles product details such as ID, name, quantity, reorder level, and rate.

* **Invoice Class**

  * Manages invoice information including invoice number, date, discount, customer name, and phone number.

* **Sale Class**

  * Stores sales data linking products and invoices with quantity.

## How It Works

1. The user specifies the number of products, invoices, and sales at the start.
2. Dynamic arrays are created to store records.
3. A main menu allows navigation between:

   * Product management
   * Invoice management
   * Sales management
4. Each section provides CRUD operations (Create, Read, Update, Delete).
5. Input validation ensures correct data entry.

## Compilation and Execution

### Compile

```bash
g++ main.cpp -o inventory
```

### Run

```bash
./inventory
```

## Limitations

* Uses static arrays (fixed size defined at runtime)
* No file handling (data is not saved permanently)
* Basic input validation
* Limited error handling for edge cases

## Future Improvements

* Add file handling for data persistence
* Replace arrays with dynamic data structures (e.g., vectors)
* Improve user interface
* Add reporting and analytics features
* Implement database integration

## Author
Ahmad Shahid: Developed as part of an academic project to demonstrate core programming and system design concepts in C++.
