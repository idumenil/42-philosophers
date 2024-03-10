# 🍽️ 42-Philosophers

## 📑 About
The dining philosophers problem serves as a common illustration in concurrent algorithm design within computer science, showcasing synchronization challenges and the corresponding resolution techniques.

At a shared dining table, five philosophers engage in a unique dining experience. Positioned in front of each philosopher is a personal plate, and a fork is placed between each pair of plates. The meal presented is spaghetti, requiring the use of both a left and right fork for consumption. Philosophers are constrained to alternating between thinking and eating. Importantly, a philosopher can only indulge in the spaghetti feast when equipped with both left and right forks. The catch is that the two necessary forks are only simultaneously available when the adjacent philosophers are in a thinking, rather than eating, state. Once a philosopher finishes their meal, they must set down both forks. The challenge lies in designing a concurrent algorithm that ensures no philosopher goes hungry, enabling each to perpetually cycle between eating and thinking. This task assumes a condition of incomplete information, where philosophers are unaware of when their peers may decide to eat or think.

The objective of this project is to simulate this problem with a variable number of philosophers. Each philosopher represents a process, and the goal is to successfully synchronize each of them so that they can eat, think, and sleep on time, and no resources are blocked (deadlock). 

<a href="https://cdn.intra.42.fr/pdf/pdf/111399/en.subject.pdf" target="_blank">link of the complete subject</a>

## Prerequisites

This project is written in C, you need to have a gcc compiler to run the program.
 

## 💻 Instructions

### Prerequisites

### Compilation

To compile, go to the project folder and run the makefile : 

`make`

### 🕹 Testing

#### Manual

To test the program, run the executable like this : `./philosopher <nb of philo> <time to die> <time to eat> <time to sleep>`
Example : 

`./philosopher 5 800 200 300`


## 💡 Project details

This project needs to be familiar with process management, threads, synchronisation, data races, concurrency issues and shared resource management.

