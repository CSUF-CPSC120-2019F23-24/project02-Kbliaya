// Name: Kaylee Bliaya
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{

  //Declare the variables.

  std::string location;
  double days, hotel, meal, total;

  //Introduction.

  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  //Get the location of the trip.

  std::cout << "What is the business trip location? ";
  getline(std::cin, location);

  //Get the amount of days the trip will take.

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Get the total hotel expenses.

  std::cout << "What are the total hotel expenses? ";
  std::cin >> hotel;

  //Get the total meal expenses.

  std::cout << "What are the total meal expenses? ";
  std::cin >> meal;

  //Calculate the total expenses.

  total = meal + hotel;

  //Create a string for the dollar sign.

  std::string dollar;
  dollar.assign(1, '$');

  //Print the header row.

  std::cout << std::setw(15) << "Location"
    << std::setw(13) << "Days"
    << std::setw(13) << "Hotel"
    << std::setw(13) << "Meal"
    << std::setw(13) << "Total\n";

  //Print results with dollar amounts that have 2 digits after the decimal.
  std::stringstream sshotel, ssmeal, sstotal;
  sshotel << std::setprecision(2) << std::fixed << dollar << hotel;
  ssmeal << std::setprecision(2) << std::fixed << dollar << meal;
  sstotal << std::setprecision(2) << std::fixed << dollar << total;
  std::cout << std::setw(15) << location.substr(0,20)
    << std::setw(13) << days
    << std::setw(13) << sshotel.str()
    << std::setw(13) << ssmeal.str()
    << std::setw(13) << sstotal.str() << '\n';

    return 0;

}
