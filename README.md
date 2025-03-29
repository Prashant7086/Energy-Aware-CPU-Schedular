# Energy-Aware-CPU-Schedular
Energy-Aware CPU Scheduling Algorithm
Project Overview:
This project implements an energy-efficient CPU scheduling algorithm called Energy-Aware Round Robin (EARR). It dynamically adjusts time quantum and CPU frequency based on task priority to reduce power consumption while maintaining performance.

Features
Dynamic adjustment of time quantum based on process priority

CPU frequency scaling for energy efficiency

Comparative analysis with traditional scheduling methods

Performance visualization using Python

Installation and Setup
Clone the repository:

bash
git clone https://github.com/Prashant7086/Energy-Aware-CPU-Scheduling.git  
cd Energy-Aware-CPU-Scheduling  
Compile and run the C++ implementation:

bash
g++ -o scheduler main.cpp  
./scheduler  
Run the performance analysis script (requires Python):

bash
python analysis.py  
Project Structure
src/main.cpp: C++ implementation of the EARR algorithm

src/analysis.py: Python script for visualizing execution results

docs/report.pdf: Detailed project report

results/: Contains execution logs and performance comparison charts
