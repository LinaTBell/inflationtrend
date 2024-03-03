#include <iostream>

using namespace std;

// Function to get input
void get_input(double& current_price, double& price_one_year_ago, double& price_two_years_ago) {
    cout << "Enter the current price of the item: ";
    cin >> current_price;
    cout << "Enter the price of the item one year ago: ";
    cin >> price_one_year_ago;
    cout << "Enter the price of the item two years ago: ";
    cin >> price_two_years_ago;
}

// Function to calculate inflation rates
void calculate_inflation_rates(double current_price, double price_one_year_ago, double price_two_years_ago,
    double& inflation_rate_one_year, double& inflation_rate_two_years) {
    inflation_rate_one_year = (current_price - price_one_year_ago) / price_one_year_ago;
    inflation_rate_two_years = (price_one_year_ago - price_two_years_ago) / price_two_years_ago;
}

// Function to output results
void output_results(double inflation_rate_one_year, double inflation_rate_two_years) {
    cout << "Inflation rate for the first year: " << inflation_rate_one_year * 100 << "%" << endl;
    cout << "Inflation rate for the second year: " << inflation_rate_two_years * 100 << "%" << endl;

    if (inflation_rate_one_year < inflation_rate_two_years) {
        cout << "The inflation trend is decreasing." << endl;
    }
    else if (inflation_rate_one_year > inflation_rate_two_years) {
        cout << "The inflation trend is increasing." << endl;
    }
    else {
        cout << "The inflation trend is constant." << endl;
    }
}

int main() {
    double current_price, price_one_year_ago, price_two_years_ago;
    get_input(current_price, price_one_year_ago, price_two_years_ago);

    double inflation_rate_one_year, inflation_rate_two_years;
    calculate_inflation_rates(current_price, price_one_year_ago, price_two_years_ago, inflation_rate_one_year, inflation_rate_two_years);

    output_results(inflation_rate_one_year, inflation_rate_two_years);

    return 0;
}
