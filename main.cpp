#include <iostream>
#include "distributed_collection.h"
#include "distributed_collection.cpp"

int main() {
    rohithy::collections::DC<int> int_collection(10, 1);
    int_collection.sort();
    return 0;
}