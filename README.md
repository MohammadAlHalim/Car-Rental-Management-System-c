# WanderWheels Car Rental System

Welcome to **WanderWheels**, a car rental management system that provides seamless rental services to ensure your journeys are comfortable and stylish.

---

## Table of Contents
- [About the Project](#about-the-project)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Contributing](#contributing)
- [License](#license)

---

## About the Project
The **WanderWheels Car Rental System** is a console-based application written in C. It allows users to:
- View available cars.
- Rent a car from the available options.
- Return a rented car.
- View detailed specifications of cars, including horsepower, seating capacity, and fuel efficiency.

This system provides a structured and interactive experience for managing car rentals.

---

## Features
1. **Car List Display**: View all available cars with their ID, model name, seating capacity, and rental price.
2. **Car Specifications**: Display technical specifications such as horsepower, seating capacity, and fuel efficiency.
3. **Rent a Car**: Rent any car from the available fleet.
4. **Return a Car**: Return a previously rented car.

---

## Getting Started

### Prerequisites
- A C compiler (e.g., GCC, MinGW).
- A terminal or IDE to compile and execute the program.
- Windows operating system (required for the `<windows.h>` dependency).

### Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/MohammadAlHalim/Car-Rental-Management-System-c

2. Navigate to the project directory:
 cd WanderWheels
3.Compile the program using a C compiler:
gcc -o wanderwheels wanderwheels.c

### Usage
1.Run the executable:
./wanderwheels
2.Follow the on-screen prompts:
Select from the main menu options:
--1: Display available cars.
--2: Rent a car.
--3: Return a car.
--4: Exit the program.
-View car specifications or proceed with renting or returning cars as desired.

### Code Structure
-Structures:
--struct car: Stores car ID, name, seating capacity, and price.
--struct rented_car: Tracks rented cars.
--struct car_specs: Holds detailed specifications for each car.
-Functions:
--printHeader1, printCar1, printFooter1: Display car list table.
--printHeader2, printCar2, printFooter2: Display car specifications table.
--Main function: Handles menu navigation and program logic.

### Contributing
Contributions are welcome! Follow these steps:

-Fork the project.
1.Create a new branch (git checkout -b feature/YourFeature).
2.Commit your changes (git commit -m 'Add a new feature').
3.Push to the branch (git push origin feature/YourFeature).
4.Open a pull request.

### License
This project is licensed under the MIT License.
