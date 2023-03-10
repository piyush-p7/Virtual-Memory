#ifndef PAGE_H_ // prevents inclusion of same header file multiple times
#define PAGE_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <iostream>

using namespace std;

class Page {
   
public:
    // alpha is used to create unique page names for each page in memory
    char alpha [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    ostringstream ss;
    int pid;    // pid associated with page
    int pageId; // unique pageId in each pageTable
    string pageName;    // unique pageName in memory
    int validBit;   // validBit - 0 if not in memory, 1 if in memory
    
    Page (int pid, int pageId, int validBit) {
        this->pid = pid;
        this->pageId = pageId;
        ss << pageId;
        this->pageName = alpha[pid] + ss.str();
        this->validBit = validBit;
    }
};

#endif /* PAGE_H_ */
