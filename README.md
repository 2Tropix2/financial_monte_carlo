# Financial Monte Carlo Option Pricer

A simple C++ Monte Carlo simulation engine made to price European Call Options under the **Geometric Brownian Motion (GBM)** model.

---

## Mathematical Model

Under the Geometric Brownian Motion model, the terminal stock price $S_T$ at time $T$ is calculated by the stochastic differential equation:

$$S_T = S_0 \exp\left( \left(r - \frac{\sigma^2}{2}\right)T + \sigma \sqrt{T} Z \right)$$

where:
* $S_0$ = Initial stock price
* $K$ = Strike price
* $r$ = Risk-free interest rate
* $\sigma$ = Volatility
* $T$ = Time to maturity in years
* $Z \sim \mathcal{N}(0, 1)$ = Standard normal random variable

The European Call Option price is calculated by discounting the expected payoff:

$$C \approx e^{-rT} \cdot \frac{1}{N} \sum_{i=1}^{N} \max(S_T^{(i)} - K, 0)$$

---

## 📂 Project Structure

```text
financial_monte_carlo/
├── .vscode/          # VS Code build tasks & debug configuration
│   ├── tasks.json
│   └── launch.json
├── build/            
├── include/          
├── src/
│   └── main.cpp      
├── .gitignore        
├── requirements.txt  
└── README.md         