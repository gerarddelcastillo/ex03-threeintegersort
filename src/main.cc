//
// Created by Gerard Del Castillo on 11/28/2018.
//

#include<stdio.h>
#include<conio.h>
#include <iostream>
#include "threeintegersort.h"

using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::sort;

int main() {
    int numArr[] = {13, 7, 11};
    sort(numArr);
    cout << "The following values are from least to greatest: ";
    for (int i = 0; i < 3; ++i)
        cout << numArr[i] << " ";
}