//
// Created by Lavender on 2017/11/8.
//

#include <iostream>

using namespace std;

class Seller {
public:
    Seller(int num, int quantity, float price) : num(num), quantity(quantity), price(price) {
        n += quantity;
        sum += price * quantity * changeDiscount();
    }

    int num;
    int quantity;
    static float sum;
    static int n;

    static float average() {
        if (n != 0) {
            return (sum / n);
        } else return (-1);
    }

    static void display(){
        cout << Seller::sum << endl;
        cout << Seller::average() << endl;
        cout << "Created by 20151120221李瑞瑜" << endl;
    }

    float changeDiscount() {
        if (quantity >= 10) {
            return 0.98;
        } else { return 1; }
    }

private:
    float price;
    static float discount;
};

float Seller::sum = 0;
int Seller::n = 0;

int main() {
    Seller seller1 = Seller(101, 5, 23.5);
    Seller seller2 = Seller(102, 12, 24.56);
    Seller seller3 = Seller(103, 100, 21.5);

    Seller::display();
    return 0;
}