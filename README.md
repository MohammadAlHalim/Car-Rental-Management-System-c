WanderWheels Car Rental System
Overview
Welcome to WanderWheels, a rental car service program that allows users to view available cars, rent them, and explore detailed car specifications. The program is designed to enhance user experience with easy navigation and detailed features.

Features
Display Available Cars: View a list of cars along with their seating capacity and speed.
Rent a Car: Select a car to rent from the available inventory.
Return a Car: Return a previously rented car.
Car Specifications: Explore detailed specifications, including horsepower, seating capacity, and fuel efficiency.
Requirements
Operating System: Windows
Compiler: GCC or any C compiler supporting C11.
Libraries:
stdio.h
stdlib.h
string.h
ctype.h
time.h
windows.h
Installation
Clone or download the source code from the repository.
Open the code in an IDE or a text editor that supports C (e.g., Visual Studio, Code::Blocks).
Compile the code using your C compiler.
bash
Copy
Edit
gcc WanderWheels.c -o WanderWheels.exe
Usage
Run the Program: Execute the compiled binary:

bash
Copy
Edit
WanderWheels.exe
Follow the Menu:

Type 1 to display available cars.
Type 2 to rent a car.
Type 3 to return a rented car.
Type 4 to exit the program.
Viewing Car Specifications:

After displaying available cars, choose to view specifications by entering yes.
Input the car name as displayed in the list to fetch its specifications.
Exiting the Program: Type exit at any time to quit.

Code Structure
1. Data Structures
struct car: Represents available cars with details like ID, name, capacity, and price.
struct rented_car: Represents rented cars with IDs and rental status.
struct car_specs: Holds detailed specifications for each car.
2. Functions
printHeader1, printCar1, printFooter1: Handle displaying car lists.
printHeader2, printCar2, printFooter2: Display car specifications.
main: Manages the user interface and program logic.
3. Control Flow
The user is prompted to select an action from the main menu.
Sub-menus guide the user to view cars, rent or return cars, and explore detailed specifications.
Example Output
Main Menu
vbnet
Copy
Edit
Welcome to WanderWheels!
The road is yours to shape. Please consider:
1. Display available cars
2. Rent a car
3. Return a car
4. Exit
Available Cars
diff
Copy
Edit
+------+--------------------------------------+-----------+-------+
|  ID  |                Model                 | Num Seats | Speed |
+------+--------------------------------------+-----------+-------+
|    1 | Toyota Camry 2014                   |         3 |    40 |
|    2 | Honda Accord 2020                   |         2 |   130 |
...
+------+--------------------------------------+-----------+-------+
Car Specifications
yaml
Copy
Edit
Please enter the car name: Toyota Camry 2014
Car Name: Toyota Camry 2014
Horse Power: 181
Seating Capacity: 5
Fuel Efficiency: 8.1
Contributing
Contributions are welcome! Feel free to submit pull requests or report issues.

License
This project is licensed under the MIT License.

Author Mohammad Alhalim
mohammadalhalim@outlook.com
