#include <array>
#include <iostream>
#include <vector>

void printHours(const std::array<int, 3>& hours) {
    std::cout << "Opening hours: ";
    for (int hour : hours) {
        std::cout << hour << " ";
    }
    std::cout << "\n";
}

int totalVisitors(const std::vector<int>& visitors) {
    int total = 0;
    for (int visitorCount : visitors) {
        total += visitorCount;
    }
    return total;
}

int highestVisitors(const std::vector<int>& visitors) {
    int highest = visitors.front();
    for (int visitorCount : visitors) {
        if (visitorCount > highest) {
            highest = visitorCount;
        }
    }
    return highest;
}

int main() {
    const std::array<int, 3> hours = {9, 10, 8};
    const std::vector<int> visitors = {18, 24, 16};

    printHours(hours);
    std::cout << "Total visitors: " << totalVisitors(visitors) << "\n";
    std::cout << "Highest visitor count: " << highestVisitors(visitors) << "\n";

    return 0;
}
