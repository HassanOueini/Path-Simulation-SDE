# Path-Simulation-SDE
The SDE Simulator is a C++ project that simulates the paths of a stochastic differential equation (SDE), typically used in financial modeling, physics, and other fields requiring probabilistic simulations. This project implements the Geometric Brownian Motion (GBM) model, a popular SDE used in stock price modeling, using a numerical solution for discrete time steps.
# What It Does
The simulator generates multiple paths of the stock price over time, based on a set of user-defined parameters such as the drift rate (mu), volatility (sigma), and initial price (S0). It then allows for analysis of the generated paths (mean, variance) and stores the results.
# How to Modify It
- To modify the behavior of the simulator, you can change the following parameters:
- mu: Drift rate of the process (expected return or growth rate of the asset).
- sigma: Volatility of the asset (how much it fluctuates). 
- S0: initial value of the asset.
- dt: Time step size for the simulation. Smaller values give more precise results at the cost of performance. 
- steps: The number of time steps for each path simulation. 
- numPaths: The number of paths to simulate. 
- You can also modifty the RandomGenerator calss to use different random distributions or the PathAnalyzer class to analyze the paths in different ways. 

## How to Run it
Make sure you have C++17 or later. A compiler such as g++ or clang++. Make tool to build the project (if using the provided Makefile). After making sure of all those prerequisites: clone the repository, compile the project (make), run the simulator (./SDE_Simulator) 

## The Math Behind It 
The simulator uses Geometric Brownian Motion (GBM) to model the asset price over time. The SDE is given by: $$dS_t = \mu S_t dt + \sigma S_t dW_t$$  Where $S_t$ is the price of the asset at time t. $\mu$ is the drift term (the expected return or growth rate of asset). $\sigma$ is the volatility (standard deviation of returns). $dW_t$ is the increment of a Wiener process (also known as Brownian motion). In discrete time, the equation is approximated as: 

## Parameters and Their Interactions:

- **`mu`**: The drift term represents the average return rate of the asset. A higher value of `mu` means the asset is expected to grow faster over time.
- **`sigma`**: This parameter controls the volatility of the asset. A higher value of `sigma` means more fluctuations in the asset's price.
- **`S0`**: The initial price of the asset. This can be any positive value and will be the starting point for each simulation.
- **`dt`**: The time step determines the precision of the simulation. Smaller `dt` values result in a more accurate path but require more computational steps.
- **`steps`**: The total number of time steps in the simulation. This is linked to the time horizon over which you want to simulate the asset's price.
- **`numPaths`**: The number of different simulated paths. More paths provide a better estimate of the statistical properties of the asset's price.

## Output

The simulator outputs the following:
1. **Path Mean**: The average price of the asset over all simulated paths at each time step.
2. **Path Variance**: The variance of the asset's price over all simulated paths at each time step.
3. **CSV File**: A CSV file with the simulated paths. Each row represents a time step, and each column represents the price of the asset at that time step for each path.
