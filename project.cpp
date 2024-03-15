#include <iostream>

using namespace std;

int main() {
    double merchandise_cost, employee_salary, yearly_rent, electricity_cost;
    const double desired_profit = 0.1; 
    


    cout << "Enter the total cost of the merchandise: "<< endl;
    
    cin >> merchandise_cost;
    cout << "Enter the yearly salary of the employees (including Linda's salary): "<< endl;

    cin >> employee_salary;
    cout << "Enter the yearly rent: " << endl;

    cin >> yearly_rent;
    cout << "Enter the estimated electricity cost: " << endl;

    cin >> electricity_cost;

    
    double total_expenses = merchandise_cost + employee_salary + yearly_rent + electricity_cost;
    
    
    double revenue_needed = total_expenses / (1 - desired_profit);
    
    
    double markup_percentage = ((revenue_needed / (1 - 0.15) - merchandise_cost) / merchandise_cost) * 100;

    
    cout << "The merchandise should be marked up by approximately " << markup_percentage << "%\n";
    
    return 0;
}