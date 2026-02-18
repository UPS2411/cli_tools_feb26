#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage:\n";
        cout << "./convert km_to_m <value>\n";
        cout << "./convert m_to_km <value>\n";
        return 1;
    }

    string type = argv[1];
    double value = stod(argv[2]);

    if (type == "m_to_km") {
        cout << value / 1000 << " km" << endl;
    } 
    else if (type == "km_to_m") {
        cout << value * 1000 << " m" << endl;
    } 
    else {
        cout << "invalid conversion type\n";
    }

    return 0;
}
