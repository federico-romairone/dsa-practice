#ifndef _ARRAY
#define _ARRAY

#include <iostream>
#include <cstdlib>

#include "Errors.h"
#include "Item/Item.h"

using namespace std;

class Array {
private:
    Item *A;
    int n;
    bool sorted;
public:
    // Constructor and destructor
    Array(int size);
    ~Array();
    // Getters and setters
    void display();
    // Insert
    void insert(Item item);
    void insert(Item item, int index);
    void insertSorted(Item item);
    // Remove
    void remove(int index);
    void remove(Key k);
    void removeAll(Key k);
    Item extract(int index);
    Item extract(Key k);
    Item *extractAll(Key k);
    // Search
    Item search(Key k);
    // Sort
    void mergeSort();
};

#endif