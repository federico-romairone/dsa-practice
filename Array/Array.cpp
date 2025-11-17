#include "Array.h"

Array::Array(int size) {
    A = (Item*)malloc(size * sizeof(Item));
    if (!A) {
        cout << "Memory allocation error." << endl;
        exit(MEMORY_ALLOCATION);
    }
    n = size;
    sorted = true;
}