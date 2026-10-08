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

    // Pre calculate drift and volatility terms
    const double drift = (r - 0.5 * sigma * sigma) * T;
    const double vol_sqrt_T = sigma * std::sqrt(T);

    // Random number generator setup
    std::mt19937_64 rng(42);
    std::normal_distribution<double> std_normal(0.0, 1.0);

    double total_payoff = 0.0;
}
