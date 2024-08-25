
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <windows.h> 

using namespace std;

void Typetext(const string& text, int delayMilliSeconds)
{
    for (char c : text)
    {
        cout << c;
        Sleep(delayMilliSeconds);
    }
}

void loading()
{
    char x = 178;
    system("color 03");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\tW E L C O M E     T O    S P I C E     D E L I G H T    R E S T A U R A N T" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t\t L O A D I N G" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    for (int i = 0; i < 20; i++)
    {
        cout << x << setw(0);
        int loading_time = 10;
        Sleep(loading_time);
    }

    Typetext("\n\n\n\t\t\t\t\t\t\t\tMADE BY: \tHamza Masood", 23);
    Sleep(500);
    cout << endl;
}

void AddToFile()
{
    fstream file;
    file.open("Delivery Data.txt", ios::app);

    string name;
    string phoneNumber;
    string address;

    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter Phone Number " << endl;
    cin >> phoneNumber;
    cout << "Enter address" << endl;
    cin >> address;

    file << "Name: " << name << endl;
    file << "Phone Number: " << phoneNumber << endl;
    file << "Address: " << address << endl;

    file.close();
}


const int NOODLE_SIZE = 3;
const int PASTA_SIZE = 3;
const int CHIPS_SIZE = 3;

const int Chicken_Size = 3;
const int Mutton_Size = 3;
const int Beef_Size = 3;

const int BonelessFish_Size = 3;
const int FishCuts_Size = 3;
const int Crustances_Size = 3;

const int Soup_Size = 3;

const int Spaghetti_Size = 3;
const int Rice_Size = 3;
const int Chomen_Size = 3;

const int Tea_Size = 3;
const int Cold_Size = 3;
const int Juice_Size = 3;

const int IceCream_Size = 3;
const int Pasteries_Size = 3;
const int HomeMade_Size = 3;



float Noodles_Price[NOODLE_SIZE] = { 150, 180, 200 };
float Pasta_Price[PASTA_SIZE] = { 350, 500, 700 };
float Chips_Price[CHIPS_SIZE] = { 50, 100, 150 };

float Chicken_Price[Chicken_Size] = { 1000, 1500, 1700 };
float Mutton_Price[Mutton_Size] = { 2000, 2200, 2500 };
float Beef_Price[Beef_Size] = { 3000, 3200, 3500 };

float BoneLessFish_Price[BonelessFish_Size] = { 1500, 2000, 2500 };
float FishCuts_Price[FishCuts_Size] = { 1000, 1500, 2000 };
float Crustances_Price[Crustances_Size] = { 3000, 4000, 4500 };

float Soup_Price[Soup_Size] = { 500, 700, 900 };

float Spaghetti_Price[Spaghetti_Size] = { 200, 400, 500 };
float Rice_Price[Crustances_Size] = { 250, 300, 450 };
float Chomen_Price[Chomen_Size] = { 350, 600, 700 };

float Tea_Price[Tea_Size] = { 100, 150, 200 };
float Cold_Price[Cold_Size] = { 100, 100, 500 };
float Juice_Price[Juice_Size] = { 200, 250, 250 };

float IceCream_Price[IceCream_Size] = { 200, 250, 250 };
float Pasteries_Price[Pasteries_Size] = { 150, 300, 500 };
float HomeMade_Price[HomeMade_Size] = { 300, 400, 500 };


float cart;
float bill;

void update_prices();

float Instant(void);
float Noodles(void);
float Pasta(void);
float Chips(void);

float Meat(void);
float Chicken(void);
float Mutton();
float Beef();

float Fish(void);
float BoneLess();
float FishCuts();
float Crustances();

float Soups();
float Soup();

float Cusine();
float Spaghetti();
float Rice();
float Chomen();

float Drinks();
float Tea();
float Cold();
float Juices();

float Sweet();
float IceCream();
float Pasteries();
float HomeMade();

int main()
{
    double rev = 196564.61;
    float category;
    char choice1;
    int choice;

    loading();

    for (int mvp = 0; mvp < 1; mvp++)
    {
        while (true)
        {
            system("cls");
            system("color B0");

            Typetext("\n\n\n\t\t\t\t\t\t\t\tWELCOME TO SPICE DELIGHT RESTAURANT", 23);
            Sleep(500);
            cout << endl;

            cout << "\n\n" << endl;
            cout << "\t\t\tHungry? Let's Make It Delicious!" << endl;
            cout << "\n\t\t\t1. Instant" << endl;
            cout << "\t\t\t2. Meat " << endl;
            cout << "\t\t\t3. Fish " << endl;
            cout << "\t\t\t4. Soup " << endl;
            cout << "\t\t\t5. Cusine " << endl;
            cout << "\t\t\t6. Drinks " << endl;
            cout << "\t\t\t7. Desserts " << endl;
            cout << "\t\t\t8. Update Prices" << endl;
            cout << "\t\t\t9. Exit" << endl;
            cout << "\n\n\t\t\tEnter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cart += Instant();
                break;
            case 2:
                cart += Meat();
                break;
            case 3:
                cart += Fish();
                break;
            case 4:
                cart += Soup();
                break;
            case 5:
                cart += Cusine();
                break;
            case 6:
                cart += Drinks();
                break;
            case 7:
                cart += Sweet();
                break;
            case 8:
                update_prices();
                break;
            case 9:
                for (int i = 0; i < 1; i++)
                {
                    system("cls");
                    system("color 06");
                    AddToFile();
                    cout << "Press 'y' To Continue  \n\nPress 'n' To Re - Enter Information : ";
                    cin >> choice1;
                    if (choice1 == 'n' || choice1 == 'N')
                        i--;
                    system("cls");
                }

                system("color ce");
                cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t Your Total Bill: " << cart << endl;
                cout << "\n\n\n\t\t\t\t\t\t\t         ----------------------------------------\n";
                cout << "\n\n\n\n\t\t\t\t\t\t\tYou will receive your order at your doorstep in 30 minutes!\n";
                cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t Thank you !\n";
                cout << "\n\n\n\t\t\t\t\t\t\t         ----------------------------------------\n\n";
                cout << "\n\n\n\n\t\t\t\t\t\t\t    S P I C E   D E L I G H T    R E S T A U R A N T  !\n";
                Sleep(3000);

            default:
                cout << "Invalid choice. Try again." << endl;
                break;
            }
        }

        system("cls");

        system("color ce");
        cout << "\n\n\nYour Total Bill = Rs. " << cart;
        rev += cart;
        cout << "\n\nPress 'Y' if You Want To Add More Items From The Main Category or Press anyother key to end Here.";
        cin >> choice1;
        if (choice1 == 'y' || choice1 == 'Y')
            mvp--;
    }



}

void update_prices()
{
    int category;
    int sub_category;
    int item;
    float new_price;
    system("cls");

    cout << "Select category to update prices:" << endl;
    cout << "1. Instant" << endl;
    cout << "2. Meat" << endl;
    cout << "3. Fish" << endl;
    cout << "4. Soups" << endl;
    cout << "5. Cuisine" << endl;
    cout << "6. Drinks" << endl;
    cout << "7. Desserts" << endl;

    cin >> category;

    switch (category) {
    case 1:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Noodles" << endl;
        cout << "2. Pasta" << endl;
        cout << "3. Chips" << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Kolson Noodles" << endl;
            cout << "2. Knorr Noodles" << endl;
            cout << "3. Samyang Noodles" << endl;
            cin >> item;
            if (item >= 1 && item <= NOODLE_SIZE) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Noodles_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Vermicelli Pasta" << endl;
            cout << "2. Elbow Pasta" << endl;
            cout << "3. Spaghetti Pasta" << endl;
            cin >> item;
            if (item >= 1 && item <= PASTA_SIZE) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Pasta_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Pringles" << endl;
            cout << "2. Lays" << endl;
            cout << "3. Twisters" << endl;
            cin >> item;
            if (item >= 1 && item <= CHIPS_SIZE) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Chips_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    case 2:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Chicken" << endl;
        cout << "2. Mutton" << endl;
        cout << "3. Beef" << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Chicken Karahi" << endl;
            cout << "2. White Meat" << endl;
            cout << "3. Desi Karahi" << endl;
            cin >> item;
            if (item >= 1 && item <= Chicken_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Chicken_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Mutton Korma" << endl;
            cout << "2. Mutton Nihari" << endl;
            cout << "3. Mutton Curry" << endl;
            cin >> item;
            if (item >= 1 && item <= Mutton_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Mutton_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Beef Shanks" << endl;
            cout << "2. Beef Chucks" << endl;
            cout << "3. Beef Ribs" << endl;
            cin >> item;
            if (item >= 1 && item <= Beef_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Beef_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    case 3:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Boneless Fish" << endl;
        cout << "2. Fish Cuts" << endl;
        cout << "3. Crustances" << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Kala Paplet" << endl;
            cout << "2. Cat Fish (Khagga)" << endl;
            cout << "3. Croacker Mushka" << endl;
            cin >> item;
            if (item >= 1 && item <= BonelessFish_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                BoneLessFish_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Fillet Cuts" << endl;
            cout << "2. Lion Cuts" << endl;
            cout << "3. Tail Cuts" << endl;
            cin >> item;
            if (item >= 1 && item <= FishCuts_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                FishCuts_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Crab" << endl;
            cout << "2. Cray Fish" << endl;
            cout << "3. Lobster" << endl;
            cin >> item;
            if (item >= 1 && item <= Crustances_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Crustances_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    case 4:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Soups " << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Kala Paplet" << endl;
            cout << "2. Cat Fish (Khagga)" << endl;
            cout << "3. Croacker Mushka" << endl;
            cin >> item;
            if (item >= 1 && item <= Soup_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Soup_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    case 5:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Spaghetti " << endl;
        cout << "2. Rice " << endl;
        cout << "3. Chomen " << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Spaghettini " << endl;
            cout << "2. Spaghettoni" << endl;
            cout << "3. Stringozzi" << endl;
            cin >> item;
            if (item >= 1 && item <= Spaghetti_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Spaghetti_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Chicken Biryani " << endl;
            cout << "2. Pulao " << endl;
            cout << "3. Chinese " << endl;
            cin >> item;
            if (item >= 1 && item <= Rice_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Rice_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. crispy chow mein " << endl;
            cout << "2. steamed chow mein " << endl;
            cout << "3. yaki-soba noodles" << endl;
            cin >> item;
            if (item >= 1 && item <= Chomen_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Chomen_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    case 6:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Tea  " << endl;
        cout << "2. Cold Drinks  " << endl;
        cout << "3. Juices  " << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Quetaa Dudh Pati  " << endl;
            cout << "2. Special " << endl;
            cout << "3. Green Tea " << endl;
            cin >> item;
            if (item >= 1 && item <= Tea_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Tea_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Any Regular cold drink" << endl;
            cout << "2. Sting  " << endl;
            cout << "3. Red Bull  " << endl;
            cin >> item;
            if (item >= 1 && item <= Cold_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Cold_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Nestle Box " << endl;
            cout << "2. Fresh Juice " << endl;
            cout << "3. Milk Shake " << endl;
            cin >> item;
            if (item >= 1 && item <= Juice_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Juice_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;


    case 7:
        system("cls");
        cout << "Select sub-category to update prices:" << endl;
        cout << "1. Ice- Creams   " << endl;
        cout << "2. Pasteries " << endl;
        cout << "3. Home Made  " << endl;
        cin >> sub_category;

        switch (sub_category) {
        case 1:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Tutti Fruti " << endl;
            cout << "2. Blue Berry  " << endl;
            cout << "3. Choco Lava " << endl;
            cin >> item;
            if (item >= 1 && item <= IceCream_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                IceCream_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 2:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Brownie " << endl;
            cout << "2. Dessert   " << endl;
            cout << "3. Chocolate " << endl;
            cin >> item;
            if (item >= 1 && item <= Pasteries_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                Pasteries_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        case 3:
            system("cls");
            cout << "Select item to update:" << endl;
            cout << "1. Kheer Mix " << endl;
            cout << "2. Custard " << endl;
            cin >> item;
            if (item >= 1 && item <= HomeMade_Size) {
                cout << "Enter new price for selected item: ";
                cin >> new_price;
                HomeMade_Price[item - 1] = new_price;
            }
            else {
                cout << "Invalid item number." << endl;
            }
            break;

        default:
            cout << "Invalid sub-category." << endl;
            break;
        }
        break;

    default:
        cout << "Invalid category." << endl;
        break;
    }
}


float Instant()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. Noodles" << endl;
        cout << "2. Pasta" << endl;
        cout << "3. Chips" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += Noodles();
            break;
        case 2:
            cart += Pasta();
            break;
        case 3:
            cart += Chips();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float Noodles()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Kolson Noodles  Rs:" << Noodles_Price[0] << endl;
        cout << "Select 2 for Knorr Noodles   Rs:" << Noodles_Price[1] << endl;
        cout << "Select 3 for Samyang Noodles   Rs:" << Noodles_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice)
        {
        case 1:
            cart += Noodles_Price[0] * quantity;
            break;
        case 2:
            cart += Noodles_Price[1] * quantity;
            break;
        case 3:
            cart += Noodles_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        cout << "\nBill = " << cart << endl;
    }
    return cart;
}

float Pasta()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for vermicelli pasta   Rs:" << Pasta_Price[0] << endl;
        cout << "Select 2 for elbow pasta        Rs:" << Pasta_Price[1] << endl;
        cout << "Select 3 for spaghetti pasta    Rs:" << Pasta_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Pasta_Price[0] * quantity;
            break;
        case 2:
            cart += Pasta_Price[1] * quantity;
            break;
        case 3:
            cart += Pasta_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        cout << "Bill = " << cart << endl;
    }
    Sleep(3000);
    return cart;
}

float Chips()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Pringles  Rs:" << Chips_Price[0] << endl;
        cout << "Select 2 for Lays      Rs:" << Chips_Price[1] << endl;
        cout << "Select 3 for Twisters  Rs:" << Chips_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Chips_Price[0] * quantity;
            break;
        case 2:
            cart += Chips_Price[1] * quantity;
            break;
        case 3:
            cart += Chips_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Meat()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. Chicken" << endl;
        cout << "2. Mutton" << endl;
        cout << "3. Beaf" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += Chicken();
            break;
        case 2:
            cart += Mutton();
            break;
        case 3:
            cart += Beef();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float Chicken()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Chicken Karahi (1kg)   Rs:" << Chicken_Price[0] << endl;
        cout << "Select 2 for White Meat (1kg)       Rs:" << Chicken_Price[1] << endl;
        cout << "Select 3 for Desi Karahi (1kg)      Rs:" << Chicken_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Chicken_Price[0] * quantity;
            break;
        case 2:
            cart += Chicken_Price[1] * quantity;
            break;
        case 3:
            cart += Chicken_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Mutton()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Mutton Korma    Rs:" << Mutton_Price[0] << endl;
        cout << "Select 2 for Mutton  Nihari  Rs:" << Mutton_Price[1] << endl;
        cout << "Select 3 for Mutton Curry    Rs:" << Mutton_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Mutton_Price[0] * quantity;
            break;
        case 2:
            cart += Mutton_Price[1] * quantity;
            break;
        case 3:
            cart += Mutton_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Beef()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Beef Shank   Rs:" << Beef_Price[0] << endl;
        cout << "Select 2 for Beef Chucks  Rs:" << Beef_Price[1] << endl;
        cout << "Select 3 for Beef Ribs    Rs:" << Beef_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Beef_Price[0] * quantity;
            break;
        case 2:
            cart += Beef_Price[1] * quantity;
            break;
        case 3:
            cart += Beef_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Fish()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. BoneLess" << endl;
        cout << "2. Fish Cuts" << endl;
        cout << "3. Crustances" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += BoneLess();
            break;
        case 2:
            cart += FishCuts();
            break;
        case 3:
            cart += Crustances();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float BoneLess()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Press 1 for Kala Paplet (1kg)           Rs:" << BoneLessFish_Price[0] << endl;
        cout << "Press 2 for Cat Fish ( khagga) (1kg)    Rs:" << BoneLessFish_Price[1] << endl;
        cout << "Select 3 for croaker (Mushka) (1kg)      Rs:" << BoneLessFish_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += BoneLessFish_Price[0] * quantity;
            break;
        case 2:
            cart += BoneLessFish_Price[1] * quantity;
            break;
        case 3:
            cart += BoneLessFish_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float FishCuts()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Fillet Cuts     Rs:" << FishCuts_Price[0] << endl;
        cout << "Select 2 for Loin Cuts       Rs:" << FishCuts_Price[1] << endl;
        cout << "Select 3 for Tail Cuts       Rs:" << FishCuts_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += FishCuts_Price[0] * quantity;
            break;
        case 2:
            cart += FishCuts_Price[1] * quantity;
            break;
        case 3:
            cart += FishCuts_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Crustances()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Crab          Rs:" << Crustances_Price[0] << endl;
        cout << "Select 2 for Cray Fish     Rs:" << Crustances_Price[1] << endl;
        cout << "Select 3 for Lobster       Rs:" << Crustances_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Crustances_Price[0] * quantity;
            break;
        case 2:
            cart += Crustances_Price[1] * quantity;
            break;
        case 3:
            cart += Crustances_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Soups()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {

        system("cls");
        cout << "1. Soups" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += Soup();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float Soup()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Cream soup      Rs:" << Soup_Price[0] << endl;
        cout << "Select 2 for Chowders Soup   Rs:" << Soup_Price[1] << endl;
        cout << "Select 3 for Bisque Soup     Rs:" << Soup_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Soup_Price[0] * quantity;
            break;
        case 2:
            cart += Soup_Price[1] * quantity;
            break;
        case 3:
            cart += Soup_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Cusine()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. Spaghetti " << endl;
        cout << "2. Rice" << endl;
        cout << "3. Chomen" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += Spaghetti();
            break;
        case 2:
            cart += Rice();
            break;
        case 3:
            cart += Chomen();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float Spaghetti()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Spaghettini    Rs:" << Spaghetti_Price[0] << endl;
        cout << "Select 2 for Spaghettoni    Rs:" << Spaghetti_Price[1] << endl;
        cout << "Select 3 for Stringozzi     Rs:" << Spaghetti_Price[2] << endl;;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Spaghetti_Price[0] * quantity;
            break;
        case 2:
            cart += Spaghetti_Price[1] * quantity;
            break;
        case 3:
            cart += Spaghetti_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Rice()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Chicken Biryani   Rs:" << Rice_Price[0] << endl;
        cout << "Select 2 for Chicken Pulao     Rs:" << Rice_Price[1] << endl;
        cout << "Select 3 for Chinese Rice      Rs:" << Rice_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Rice_Price[0] * quantity;
            break;
        case 2:
            cart += Rice_Price[1] * quantity;
            break;
        case 3:
            cart += Rice_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Chomen()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for crispy chow mein      Rs:" << Chomen_Price[0] << endl;
        cout << "Select 2 for steamed chow mein     Rs:" << Chomen_Price[1] << endl;
        cout << "Select 3 for yaki-soba noodles     Rs:" << Chomen_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Chomen_Price[0] * quantity;
            break;
        case 2:
            cart += Chomen_Price[1] * quantity;
            break;
        case 3:
            cart += Chomen_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Drinks()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. Tea's " << endl;
        cout << "2. Cold Drink's" << endl;
        cout << "3. Juices's" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cart += Tea();
            break;
        case 2:
            cart += Cold();
            break;
        case 3:
            cart += Juices();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float Tea()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Quetta Tea     Rs:" << Tea_Price[0] << endl;
        cout << "Select 2 for Special Tea    Rs:" << Tea_Price[1] << endl;
        cout << "Select 3 for Green Tea      Rs:" << Tea_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Tea_Price[0] * quantity;
            break;
        case 2:
            cart += Tea_Price[1] * quantity;
            break;
        case 3:
            cart += Tea_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Cold()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Regular ( Pepsi , 7up, Mirinda , Sprite )      Rs:" << Cold_Price[0] << endl;
        cout << "Select 2 for Sting                                          Rs:" << Cold_Price[1] << endl;
        cout << "Select 3 for Red Bull                                       Rs:" << Cold_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Cold_Price[0] * quantity;
            break;
        case 2:
            cart += Cold_Price[1] * quantity;
            break;
        case 3:
            cart += Cold_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Juices()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Nestle Box Juices Any     Rs:" << Juice_Price[0] << endl;
        cout << "Select 2 for Fresh Juice               Rs:" << Juice_Price[1] << endl;
        cout << "Select 3 for Milk Shakes               Rs:" << Juice_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice)
        {
        case 1:
            cart += Juice_Price[0] * quantity;
            break;
        case 2:
            cart += Juice_Price[1] * quantity;
            break;
        case 3:
            cart += Juice_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}



float Sweet()
{
    float cart = 0.0;
    int choice;
    char Choice;

    do
    {
        system("cls");
        cout << "1. Ice-Cream " << endl;
        cout << "2. Pasteries " << endl;
        cout << "3. Home Made " << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            cart += IceCream();
            break;
        case 2:
            cart += Pasteries();
            break;
        case 3:
            cart += HomeMade();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << "Enter Y to add more items from Instant category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    return cart;
}

float IceCream()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Tutti Fruiti      Rs:" << IceCream_Price[0] << endl;
        cout << "Select 2 for Blue Berry        Rs:" << IceCream_Price[1] << endl;
        cout << "Select 3 for Choco Laven       Rs:" << IceCream_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice)
        {
        case 1:
            cart += IceCream_Price[0] * quantity;
            break;
        case 2:
            cart += IceCream_Price[1] * quantity;
            break;
        case 3:
            cart += IceCream_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float Pasteries()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for brownie      Rs:" << Pasteries_Price[0] << endl;
        cout << "Select 2 for desserts     Rs:" << Pasteries_Price[1] << endl;
        cout << "Select 3 for chocolate    Rs:" << Pasteries_Price[2] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice)
        {
        case 1:
            cart += Pasteries_Price[0] * quantity;
            break;
        case 2:
            cart += Pasteries_Price[1] * quantity;
            break;
        case 3:
            cart += Pasteries_Price[2] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}

float HomeMade()
{
    float cart = 0.0;
    system("cls");
    int choice;
    char Choice;

    cout << "\n\n\n\n\n\n";

    do
    {
        int quantity;
        cout << "Select 1 for Kheer Mix     Rs:" << HomeMade_Price[0] << endl;
        cout << "Select 2 for Custard       Rs:" << HomeMade_Price[1] << endl;
        cout << endl;
        cout << "Enter your Choice..." << endl;
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;


        switch (choice) {
        case 1:
            cart += HomeMade_Price[0] * quantity;
            break;
        case 2:
            cart += HomeMade_Price[1] * quantity;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
        cout << "Enter Y to add more items from this category..." << endl;
        cin >> Choice;
    } while (Choice == 'y');

    cout << "Enter B for bill..." << endl;
    cin >> Choice;
    if (Choice == 'b')
    {
        system("cls");
        cout << "Bill = " << cart << endl;
    }
    return cart;
}
