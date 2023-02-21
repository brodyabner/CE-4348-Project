/*
First Come First Serve scheduling algorithm
schedules processes based on arrival time, with processes that arrive first being scheduled first.
*/

#include <stdio.h>
#include <stlib.h>

void FCFS(struct Process[] process) {
    
    // load arrivalTime for each process into an array to be sorted
    int[] arr = {};
    for(int i = 0; i < sizeof(process); i++) {
      arr[i] = process[i].arrivalTime; 
    } 
    
    // sort array of arrivalTime for eachProcess
    qsort(arr, sizeof(arr), sizeof(int), compare);
}