//C++ Implementation of EARR Algorithm
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Structure to represent a process in the scheduling queue
struct Process {
    int id;          // Process ID
    int burstTime;   // Total execution time required
    int remainingTime; // Time left for execution
    int priority;    // Priority level (higher number = higher priority)
};

// Function to simulate the Energy-Aware Round Robin (EARR) Scheduling Algorithm
void energyAwareRoundRobin(vector<Process> &processes, int baseTimeQuantum) {
    queue<Process> readyQueue;
    int currentTime = 0; // Keeps track of total execution time

    // Load all processes into the ready queue
    for (const auto &p : processes) {
        readyQueue.push(p);
    }

    // Process execution loop
    while (!readyQueue.empty()) {
        Process currentProcess = readyQueue.front();
        readyQueue.pop();

        // Adjust time quantum dynamically based on process priority
        int adjustedQuantum = (currentProcess.priority > 5) ? baseTimeQuantum / 2 : baseTimeQuantum * 2; 
        int executionTime = min(currentProcess.remainingTime, adjustedQuantum);

        // Execute the process for the given time slice
        currentProcess.remainingTime -= executionTime;
        currentTime += executionTime;

        cout << "Process " << currentProcess.id 
             << " executed for " << executionTime 
             << " units, remaining time: " << currentProcess.remainingTime << " units.\n";

        // If the process is not yet complete, add it back to the queue
        if (currentProcess.remainingTime > 0) {
            readyQueue.push(currentProcess);
        }
    }
}

// Main function to initialize processes and run the scheduling simulation
int main() {
    // List of processes {Process ID, Burst Time, Remaining Time, Priority}
    vector<Process> processes = {
        {1, 10, 10, 3}, 
        {2, 5, 5, 8}, 
        {3, 8, 8, 6}
    };

    int baseTimeQuantum = 4; // Base time quantum for Round Robin scheduling

    // Execute the Energy-Aware Round Robin algorithm
    energyAwareRoundRobin(processes, baseTimeQuantum);

    return 0;
}
