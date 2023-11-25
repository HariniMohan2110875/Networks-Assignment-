# Networks-Assignment- QN  15

# QN 15 - Simulation of RIP Table by exchanging the updates with its neighbour alone using C programming

## Routing Information Protocol

## PROBLEM STATEMENT

Simulation of RIP Table by exchanging the updates with its neighbours alone using Java/C programming

## Routing Information Protocol

Routing Information Protocol (RIP) is a dynamic routing protocol that uses hop count as a routing metric to find the best path between the source and the destination network. 
- It is a distance-vector routing protocol that has an AD value of 120 and works on the Network layer of the OSI model. 
- RIP uses port number 520. 
- Hop Count: Hop count is the number of routers occurring in between the source and destination network. The path with the lowest hop count is considered as the best route to reach a network and therefore placed in the routing table. 

## Running the C program

To compile the C program, use the following command in the terminal:

gcc filename.c -o filename

To run the compiled C program, use the following command in the terminal:

./filename

### Input:

Number of nodes(routers)
Initial cost for each link 

### Output:

Updated routing table for each node.

### Sample input - output:

Enter the number of nodes : 3

Enter the cost matrix for router 1:
0 2 7
2 0 1
7 1 0

...
'
Routing table for router 1:
+-------------+------------+----------+
| Destination | Next Hop   | Distance |
+-------------+------------+----------+
| 1           | 1          | 0        |
| 2           | 2          | 2        |
| 3           | 2          | 3        |
+-------------+------------+----------+
'
...



### Contributors

S Aiswarya - 3122215001005
C B Ananya - 3122215001010
B Ayshwarya - 3122215001017
Harini Mohan - 3122215001029
