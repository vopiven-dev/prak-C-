#include <iostream>

using namespace std;

int main() {
    double v1, v2, s, t; //змінні 

    cout << " V1: ";
    cin >> v1;

    cout << " V2: ";
    cin >> v2;

    cout << " S: ";
    cin >> s;

    cout << " T: ";
    cin >> t;

    double total_path = (v1 + v2) * t; // формула 
    double final_distance = s - total_path;

    if (final_distance < 0) { // результат
        final_distance = -final_distance;
    }

    cout << "distance " << final_distance << endl;

    return 0;
}