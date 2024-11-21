#include <stdio.h>

int main() {
    //Khai bao v� khoi tao bien canh cua hinh vuong
    float side = 4.0;  //Canh cua hinh vuong, gia tri duoc g�n la 4.0

    //Tinh chu vi va dien tich cua hinh vuong
    float perimeter = 4 * side;        //Chu vi = 4 * canh
    float area = side * side;          //Dien tich = canh * canh

    // In ket qua ra man hinh
    printf("Canh cua hinh vuong la: %.2f\n", side);  //In ra gia tri canh
    printf("Chu vi cua hinh vu�ng la: %.2f\n", perimeter);  //In ra chu vi
    printf("Dien t�ch cua h�nh vu�ng la: %.2f\n", area);  //In ra dien tich

    return 0;
}
