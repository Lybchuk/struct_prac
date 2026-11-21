

#include <iostream>
using namespace std;


struct WashingMachine {
    char brand[50];
    char color[50];
    int width;
    int length;
    int height;
    int powerW;
    int spinSpeed;
    int heatTemp;
};
void InitStruct_WashMachine(WashingMachine& Wmachine) {
    cout << "Enter brand: "; cin >> Wmachine.brand;
    cout << "Enter color: "; cin >> Wmachine.color;
    cout << "Enter width: ";cin >> Wmachine.width;
    cout << "Enter length: ";cin >> Wmachine.length;
    cout << "Enter height: ";cin >> Wmachine.height;
    cout << "Enter power (W): ";cin >> Wmachine.powerW;
    cout << "Enter spin speed: ";cin >> Wmachine.spinSpeed;
    cout << "Enter heating temperature: ";cin >> Wmachine.heatTemp;
}
void ShowStruct_WashMachine(WashingMachine& Wmachine) {
    cout << "Brand: " << Wmachine.brand <<endl;
    cout << "Color: " << Wmachine.color<<endl;
    cout << "Width: " << Wmachine.width<<endl;
    cout << "Length: " << Wmachine.length<<endl;
    cout << "Height: " << Wmachine.height << endl;
    cout << "Power in W: " << Wmachine.powerW << endl;
    cout << "Spin speed: " << Wmachine.spinSpeed << endl;
    cout << "Heating temperature: " << Wmachine.heatTemp << endl;
}


int main()
{
    WashingMachine myMachine = { "bosch","white",100,120,130,2000,1200,90 };
    ShowStruct_WashMachine(myMachine);
    InitStruct_WashMachine(myMachine);
    ShowStruct_WashMachine(myMachine);
}
