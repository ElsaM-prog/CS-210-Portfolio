
#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class CornerGrocer {
public:
    void loadData(const string& filename);
    void searchItem();
    void displayFrequencies();
    void displayHistogram();

private:
    map<string, int> itemFrequencies;
};

#endif
