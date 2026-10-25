
#include "CornerGrocer.h"

void CornerGrocer::loadData(const string& filename) {
    ifstream inputFile(filename);
    string item;

    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file." << endl;
        return;
    }

    while (inputFile >> item) {
        itemFrequencies[item]++;
    }

    inputFile.close();

    // Create backup frequency file
    ofstream outputFile("frequency.dat");

    if (outputFile.is_open()) {
        for (const auto& entry : itemFrequencies) {
            outputFile << entry.first << " "
                       << entry.second << endl;
        }
        outputFile.close();
    }
}

void CornerGrocer::searchItem() {
    string item;

    cout << "Enter the item name: ";
    cin >> item;

    cout << item << " was purchased "
         << itemFrequencies[item]
         << " time(s)." << endl;
}

void CornerGrocer::displayFrequencies() {
    cout << "\nItem Frequencies:\n";

    for (const auto& entry : itemFrequencies) {
        cout << entry.first << " "
             << entry.second << endl;
    }
}

void CornerGrocer::displayHistogram() {
    cout << "\nItem Frequency Histogram:\n";

    for (const auto& entry : itemFrequencies) {
        cout << entry.first << " ";

        for (int i = 0; i < entry.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}
