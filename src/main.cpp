#include <iostream>
#include <random>
#include <cmath>
#include <algorithm>

int main()
{
    // Financial Parameters
    const double S0 = 100.0;   // Current stock price ($)
    const double K = 105.0;    // Strike price ($)
    const double r = 0.05;     // Risk-free interest rate (5%)
    const double sigma = 0.20; // Annual volatility (20%)
    const double T = 1.0;      // Time to expiry in years
    const long long num_simulations = 10'000'000;
}
