#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<windows.h>
#include <time.h>
#pragma warning(disable : 4996)
struct car {
    int id;
    char name[50];
    int capacity;
    int price;
};
struct rented_car {
    int id;
    char name[50];
    int value;
};

struct car_specs {
    char model[50];
    int horsePower;
    int seatingCapacity;
    float fuelEfficiency;
};

void printHeader1() {
    printf("+------+--------------------------------------+-----------+-------+\n");
    printf("|  ID  |                Model                 | Num Seats | Speed |\n");
    printf("+------+--------------------------------------+-----------+-------+\n");
}

void printCar1(struct car car) {
    printf("| %4d | %-36s | %9d | %5d |\n", car.id, car.name, car.capacity, car.price);
}

void printFooter1() {
    printf("+------+--------------------------------------+-----------+-------+\n");
}

void printHeader2() {
    printf("+--------------------------------------+------------+-----------------+-------------------+\n");
    printf("|               Model                  | Horse Power| Seating Capacity| Fuel Efficiency   |\n");
    printf("+--------------------------------------+------------+-----------------+-------------------+\n");
}

void printCar2(struct car_specs car) {
    printf("| %-36s | %10d | %15d | %17.1f |\n", car.model, car.horsePower, car.seatingCapacity, car.fuelEfficiency);
}

void printFooter2() {
    printf("+--------------------------------------+------------+-----------------+-------------------+\n");
}
int main()
{

    char selection_nb[100];
    int choice;
    char car_name;
    char enter_car;
    struct rented_car rented_cars[] = {
        {1, "Toyota Camry 2014", 0},
    {2, "Honda Accord 2020", 0},
    {3, "Ford Mustang 2022", 0},
    {4, "Chevrolet Corvette 1999", 0},
    {5, "Tesla Model S 2021", 0},
    {6, "BMW 3 Series 2024", 0},
    {7, "Mercedes-Benz S-580 2022", 0},
    {8, "Audi A4 2023", 0},
    {9, "Nissan Altima 2017", 0},
    {10, "Volkswagen Golf 2020", 0},
    {11, "Jeep Wrangler 2016", 0},
    {12, "Ford Explorer 2022", 0},
    {13, "Chevrolet Camaro RS 2021", 0},
    {14, "Toyota Land Cruiser 2022", 0},
    {15, "Lamborghini Aventador 2022", 0},
    {16, "Mazda CX-5 2018", 0},
    {17, "Lexus RX 2020", 0},
    {18, "Ferrari 812 2016", 0},
    {19, "Kia Picanto 2023", 0},
    {20, "Porsche 911 2022", 0},
    {21, "Subaru Outback 2021", 0},
    {22, "Hyundai Sonata 2019", 0},
    {23, "Jaguar F-Type 2023", 0},
    {24, "Dodge Charger 2022", 0},
    {25, "Volvo XC90 2021", 0},
    {26, "GMC Sierra 1500 2022", 0},
    {27, "Chrysler 300 2020", 0},
    {28, "Acura NSX 2022", 0},
    {29, "Infiniti Q50 2018", 0},
    {30, "Mini Cooper 2023", 0},
    {31, "Subaru Impreza 2022", 0},
    {32, "Buick Enclave 2021", 0},
    {33, "Range Rover Vogue 2023", 0},
    {34, "Tesla Model 3 2022", 0},
    {35, "Cadillac Escalade 2022", 0},
    {36, "Nissan Rogue 2019", 0},
    {37, "Volkswagen Passat 2020", 0},
    {38, "Porsche Cayenne 2023", 0},
    {39, "Ford F-150 2022", 0},
    {40, "Audi Q7 2021", 0},
    {41, "Toyota Prius 2022", 0},
    {42, "Chevrolet Equinox 2020", 0},
    {43, "Mercedes-AMG GT 2022", 0},
    {44, "Kia Soul 2023", 0},
    {45, "BMW X5 2021", 0},
    {46, "Honda CR-V 2022", 0},
    {47, "Lexus ES 2023", 0},
    {48, "Alfa Romeo Giulia 2022", 0},
    {49, "Ford Bronco 2023", 0},
    {50, "Range Rover Evoque 2021", 1}
    };
    struct car cars[] = {
       {1, "Toyota Camry 2014", 3, 40},
       {2, "Honda Accord 2020", 2, 130},
       {3, "Ford Mustang 2022", 4, 250},                                       //Initializing the struct with elements
       {4, "Chevrolet Corvette 1999", 4, 300},                                //that are also structs containg the same 
       {5, "Tesla Model S 2021", 3, 280},                                    //elements of struct Car
       {6, "BMW 3 Series 2024", 4, 400},
       {7, "Mercedes-Benz S-580 2022", 5, 500},
       {8, "Audi A4 2023", 3, 210},
       {9, "Nissan Altima 2017", 4, 60},
       {10, "Volkswagen Golf 2020", 2, 50},
       {11, "Jeep Wrangler 2016", 3, 30},
       {12, "Ford Explorer 2022", 4, 55},
       {13, "Chevrolet Camaro RS 2021", 3, 160},
       {14, "Toyota Land Cruiser 2022", 2, 250},
       {15, "Lamborghini Aventador SVJ 2022", 2, 1000},
       {16, "Mazda CX-5 2018", 3, 80},
       {17, "Lexus RX 2020", 4, 210},
       {18, "Ferrari 812 2016", 2, 900},
       {19, "Kia Picanto 2023", 6, 30},
       {20, "Porsche 911 2022", 1, 860},
       {21, "Subaru Outback 2021", 5, 70},
       {22, "Hyundai Sonata 2019", 3, 45},
       {23, "Jaguar F-Type 2023", 2, 350},
       {24, "Dodge Charger 2022", 4, 200},
       {25, "Volvo XC90 2021", 3, 180},
       {26, "GMC Sierra 1500 2022", 5, 80},
       {27, "Chrysler 300 2020", 2, 60},
       {28, "Acura NSX 2022", 1, 600},
       {29, "Infiniti Q50 2018", 4, 55},
       {30, "Mini Cooper 2023", 6, 40},
       {31, "Subaru Impreza 2022", 3, 50},
       {32, "Buick Enclave 2021", 2, 90},
       {33, "Range Rover Vogue 2023", 3, 350},
       {34, "Tesla Model 3 2022", 5, 300},
       {35, "Cadillac Escalade 2022", 2, 250},
       {36, "Nissan Rogue 2019", 4, 40},
       {37, "Volkswagen Passat 2020", 3, 35},
       {38, "Porsche Cayenne 2023", 1, 450},
       {39, "Ford F-150 2022", 6, 70},
       {40, "Audi Q7 2021", 2, 280},
       {41, "Toyota Prius 2022", 4, 30},
       {42, "Chevrolet Equinox 2020", 3, 45},
       {43, "Mercedes-AMG GT 2022", 1, 500},
       {44, "Kia Soul 2023", 5, 25},
       {45, "BMW X5 2021", 2, 300},
       {46, "Honda CR-V 2022", 4, 55},
       {47, "Lexus ES 2023", 3, 220},
       {48, "Alfa Romeo Giulia 2022", 1, 400},
       {49, "Ford Bronco 2023", 3, 60},
       {50, "Range Rover Evoque 2021", 3, 200}
    };
    struct car_specs cars_specs[50] = {
        {"Toyota Camry 2014", 181, 5, 8.1},
        {"Honda Accord 2020", 192, 5, 7.8},
        {"Ford Mustang 2022", 350, 4, 15.1},                        //struct that holds all the cars specs ready to be displayed
        {"Chevrolet Corvette 1999", 345, 2, 18.5},                 // it includes: car model/horse power/seating capacity/fuel efficiency
        {"Tesla Model S 2021", 1020, 5, 0.0},
        {"BMW 3 Series 2024", 255, 5, 7.2},
        {"Mercedes-Benz S-580 2022", 496, 5, 11.6},
        {"Audi A4 2023", 201, 5, 7.4},
        {"Nissan Altima 2017", 179, 5, 8.4},
        {"Volkswagen Golf 2020", 147, 5, 7.5},
        {"Jeep Wrangler 2016", 270, 5, 15.5},
        {"Ford Explorer 2022", 300, 7, 15.5},
        {"Chevrolet Camaro RS 2021", 275, 4, 16.5},
        {"Toyota Land Cruiser 2022", 383, 8, 15.0},
        {"Lamborghini Aventador 2022", 759, 2, 17.2},
        {"Mazda CX-5 2018", 187, 5, 8.7},
        {"Lexus RX 2020", 295, 5, 9.2},
        {"Ferrari 812 2016", 789, 2, 15.8},
        {"Kia Picanto 2023", 83, 5, 5.5},
        {"Porsche 911 2022", 473, 2, 11.3},
        {"Subaru Outback 2021", 180, 5, 7.0},
        {"Hyundai Sonata 2019", 245, 5, 9.0},
        {"Jaguar F-Type 2023", 350, 2, 13.0},
        {"Dodge Charger 2022", 292, 4, 11.8},
        {"Volvo XC90 2021", 316, 5, 8.5},
        {"GMC Sierra 1500 2022", 355, 5, 11.8},
        {"Chrysler 300 2020", 292, 2, 9.8},
        {"Acura NSX 2022", 573, 1, 11.0},
        {"Infiniti Q50 2018", 300, 4, 10.2},
        {"Mini Cooper 2023", 228, 6, 6.7},
        {"Subaru Impreza 2022", 152, 5, 7.6},
        {"Buick Enclave 2021", 310, 5, 10.6},
        {"Range Rover Vogue 2023", 400, 1, 12.4},
        {"Tesla Model 3 2022", 353, 5, 0.0},
        {"Cadillac Escalade 2022", 420, 5, 12.4},
        {"Nissan Rogue 2019", 170, 4, 8.7},
        {"Volkswagen Passat 2020", 174, 5, 9.4},
        {"Porsche Cayenne 2023", 450, 1, 11.8},
        {"Ford F-150 2022", 400, 6, 12.4},
        {"Audi Q7 2021", 248, 5, 10.2},
        {"Toyota Prius 2022", 121, 4, 4.5},
        {"Chevrolet Equinox 2020", 252, 5, 9.3},
        {"Mercedes-AMG GT 2022", 523, 1, 15.7},
        {"Kia Soul 2023", 201, 5, 7.6},
        {"BMW X5 2021", 335, 5, 9.8},
        {"Honda CR-V 2022", 190, 4, 7.4},
        {"Lexus ES 2023", 302, 5, 8.1},
        {"Alfa Romeo Giulia 2022", 280, 1, 8.4},
        {"Ford Bronco 2023", 330, 5, 11.8},
        {"Range Rover Evoque 2021", 350, 5, 9.4}
    };



    printf("\nWelcome to WanderWheels, where seamless journeys begin with our exceptional rental car services, ensuring you explore with comfort and style at every turn.\n");
    printf("\nThe road is yours to shape. Please consider:\n 1. Embrace the adventure and explore our curated services.\n 2. Seek personalized guidance by contacting our dedicated customer support.\nMake your selection by entering the corresponding number and let your journey unfold with us.\n");

    printf("\nplease select(to exit type exit): ");
    gets_s(selection_nb);



    printf("---------------------------------------------------------------------------------------");


    while (strcmp(selection_nb, "exit") != 0) {
        char choice_specs[100];
        if (strcmp(selection_nb, "1") == 0) {
            printf("\nWanderWheels Menu:\n");
            printf("1. Display available cars\n");
            printf("2. Rent a car\n");
            printf("3. Return a car\n");
            printf("4. Exit\n");
            printf("\n");

            printf("\nEnter your choice (1-4):");
            scanf_s("%d", &choice);

            switch (choice) {
            case 1:
                printf("---------------------------------------------------------------------------------------");
                printf("\n");


                printf("---------------------------------------------------------------------------------------\n");
                printf("\nAvailable cars in our shop\n");
                printHeader1();

                for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); ++i) {
                    printCar1(cars[i]);
                }
                printFooter1();

                printf("------------------------------------------------------------------------------------------------------------------------\n");

                printf("\nDo you want to see car specs(yes/no)? ");
                scanf_s("%s", choice_specs, sizeof(choice_specs));

                for (int i = 0; i < strlen(choice_specs); ++i) {
                    choice_specs[i] = tolower(choice_specs[i]);
                }

                while (strcmp(choice_specs, "yes") == 0) {
                    char car_name[50];
                    printf("Please enter the car name: ");
                    getchar(); // Consume the newline character left by scanf_s
                    gets_s(car_name, sizeof(car_name));

                    for (int i = 0; i < 50; ++i) {
                        if (strcmp(car_name, cars_specs[i].model) == 0) {
                            printf("Car Name: %s\n", car_name);
                            printf("Horse Power: %d\n", cars_specs[i].horsePower);
                            printf("Seating Capacity: %d\n", cars_specs[i].seatingCapacity);
                            printf("Fuel Efficiency: %.1f\n", cars_specs[i].fuelEfficiency);
                            printf("Do you want to see car specs(yes/no)? ");
                            scanf_s("%s", choice_specs, sizeof(choice_specs));
                            for (int i = 0; i < strlen(choice_specs); ++i) {
                                choice_specs[i] = tolower(choice_specs[i]);
                            }
                            if (strcmp(choice_specs, "no") == 0)
                                break;
                        }
                    }
                }

                printf("\n------------------------------------------------------------------------------------------------------------------------\n");

                break;


            case 2:
                printf("---------------------------------------------------------------------------------------");
                int rent_a_car;
                printHeader1();

                for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); ++i) {
                    printCar1(cars[i]);
                }
                printFooter1();
                printf("Kindly select your preferred car for rental by specifying its corresponding number from the table above: ");
                scanf("%d", &rent_a_car);

                while (rent_a_car > 50 || rent_a_car <= 0) {
                    printf("Invalid Number!!\n");
                    printf("Kindly select a valid input(1-50): ");
                    scanf("%d", &rent_a_car);
                }

                while (cars[rent_a_car - 1].capacity == 0) {
                    printf("Sorry, This car is not available!!\n");
                    printf("Kindly select another option: ");
                    scanf("%d", &rent_a_car);
                }

                if (cars[rent_a_car - 1].capacity != 0) {
                    printf("You have selected %s\n", cars_specs[rent_a_car - 1].model);
                    int rent_duration;
                    printf("Kindly provide the number of days you wish to rent the car for: ");
                    scanf("%d", &rent_duration);
                    srand(time(NULL));

                    // Generating a random captcha
                    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    char a[] = "abcdefghijklmnopqrstuvwxyz";
                    char numbers[] = "0123456789";
                    char captcha[7] = "";
                    for (int i = 0; i < 2; ++i) {
                        captcha[i * 3] = A[rand() % (sizeof(A) - 1)];
                        captcha[i * 3 + 1] = a[rand() % (sizeof(a) - 1)];
                        captcha[i * 3 + 2] = numbers[rand() % (sizeof(numbers) - 1)];
                    }
                    captcha[6] = '\0';

                    printf("%s\n", captcha);

                    char verification_user[7];
                    printf("Enter the kaptcha code above: ");
                    scanf("%s", verification_user);

                    // Verifying the captcha
                    while (strcmp(verification_user, captcha) != 0) {
                        // Regenerate captcha if verification fails
                        for (int i = 0; i < 2; ++i) {
                            captcha[i * 3] = A[rand() % (sizeof(A) - 1)];
                            captcha[i * 3 + 1] = a[rand() % (sizeof(a) - 1)];
                            captcha[i * 3 + 2] = numbers[rand() % (sizeof(numbers) - 1)];
                        }
                        captcha[6] = '\0';

                        printf("Oops!! Verification failed. \n\n");
                        printf("%s\n", captcha);

                        printf("Enter the kaptcha code above: ");
                        scanf("%s", verification_user);
                    }
                    printf("Verification completed.\n\n");

                    // Simulating a delay for processing
                    printf("Processing your request...\n");
                    for (int j = 0; j < 10000000; ++j)
                        ;

                    // Updating car availability
                    cars[rent_a_car - 1].capacity--;
                    rented_cars[rent_a_car - 1].value++;

                    printf("\nCongrats on your rental!\n\n");
                    printf("                      ====== Your receipt ======\n\n");
                    printf("*Car NB: %d\n", rent_a_car);
                    printf("*Car name: %s\n", cars_specs[rent_a_car - 1].model);
                    printf("*Rented days: %d\n", rent_duration);
                    printf("*Total price: $%d\n", cars[rent_a_car - 1].price * rent_duration);

                    // Displaying the current date and time
                    time_t t = time(NULL);
                    struct tm tm = *localtime(&t);

                    printf("\n*Thank you for choosing WanderWheels. Your rental period begins on %d-%02d-%02d %02d:%02d:%02d\n",
                        tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

                    printf("\n");
                }

                break;


            case 3:
                printf("---------------------------------------------------------------------------------------");
                int return_car;
                printHeader1();

                for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); ++i) {
                    printCar1(cars[i]);
                }
                printFooter1();
                printf("\nBased on the above table, please enter the number of the car you would like to return: ");
                scanf("%d", &return_car);

                while (rented_cars[return_car - 1].value <= 0) {
                    printf("Sorry, This car cannot be returned!!\n");
                    printf("Please enter a valid number of the car you would like to return: ");
                    scanf("%d", &return_car);
                }

                for (int i = 0; i < sizeof(rented_cars) / sizeof(rented_cars[0]); ++i) {
                    if (return_car == rented_cars[i].id) {
                        rented_cars[i].value--;
                        for (int j = 0; j < sizeof(cars) / sizeof(cars[0]); ++j) {
                            if (return_car == cars[j].id) {
                                cars[j].capacity++;
                                printf("Processing\n");
                                int total_steps = 20;
                                for (int i = 1; i <= total_steps; i++) {
                                    float progress = (float)i / total_steps;
                                    int percentage = (int)(progress * 100);
                                    int bar_length = (int)(progress * 20);
                                    printf("\r[");
                                    for (int k = 0; k < bar_length; k++) {
                                        printf("=");
                                    }
                                    for (int k = 0; k < (20 - bar_length); k++) {
                                        printf("-");
                                    }
                                    printf("] %d%%", percentage);
                                    fflush(stdout);
                                    Sleep(100);
                                }
                                break;
                            }
                        }
                        break;
                    }
                }

                break;



            case 4:
                printf("---------------------------------------------------------------------------------------");
                printf("\nYou have successfully exited the program!");
                break;

            default:
                printf("Enter a valid input: ");
                scanf_s("%d", &choice);
                break;
            }
            if (choice == 4) {
                break;
            }
        }

        else if ((strcmp(selection_nb, "2") == 0)) {
            printf("\n\n Need help? Our customer support team is ready to assist you. Call us at 01 234 567 for immediate assistance or drop us an email at custsupport@wanderwheels.com for a prompt response.");

            printf("For assistance tailored to your needs, contact our dedicated team:\n\n\tSales Inquiries: 09 876 543\n\tTechnical Support: 03 134 246\n\n\tFeel free to reach out via email as well:\n\n\tGeneral Inquiries: info@wanderwheels.com\n\tSales: sales@wanderwheels.com\n\tTechnical Support: techsupport@wanderwheels.com\n\tWe're here to help you in any way we can!");
            break;

        }

        else {
            printf("\nWhoops!! It appears there's a hiccup in the data you entered. Please review and try once more\n");
            printf("\nplease select(to exit type exit): ");
            gets_s(selection_nb);
        }
    }


    printf("\nexited because entered exit");


    return 0;
}