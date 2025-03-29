import matplotlib.pyplot as plt

# Define the scheduling algorithms being compared
algorithms = ["FCFS", "SJN", "RR", "DVFS", "DPM", "EARR"]

# Define corresponding power consumption values (lower is better)
power_consumption = [80, 75, 85, 50, 45, 30]

# Define execution time values (lower is better)
execution_time = [50, 40, 45, 60, 55, 35]

# Set up the figure size for better visualization
plt.figure(figsize=(9, 5))

# Plot horizontal bars for power consumption and execution time
plt.barh(algorithms, power_consumption, color='skyblue', label="Power Consumption")
plt.barh(algorithms, execution_time, color='lightcoral', label="Execution Time", alpha=0.7)

# Add labels and title for clarity
plt.xlabel("Measurement Value")
plt.ylabel("Scheduling Algorithm")
plt.title("Comparative Analysis of CPU Scheduling Algorithms")

# Display legend for differentiation
plt.legend()

# Show the plot
plt.show()
