#include <iostream>
using namespace std;

int main(){
union OneByteUnion {
    unsigned char all_bits; // Access the full 8-bit byte
    struct {
        bool nibble1 : 1; // 1 bit
        bool nibble2 : 1; // 1 bit
        bool nibble3 : 1; // 6 bits
        bool nibble4 : 1; // 6 bits
        bool nibble5 : 1; // 6 bits
        bool nibble6 : 1; // 6 bits
        bool nibble7 : 1; // 6 bits
        bool nibble8 : 1; // 6 bits

    } bits;
};

 union OneByteUnion d;
 d.all_bits = 0xff;
 cout << d.bits.nibble1 << endl;
 cout << d.bits.nibble2 << endl;
 cout << d.bits.nibble3 << endl;
 cout << d.bits.nibble4 << endl;
 cout << d.bits.nibble5 << endl;
 cout << d.bits.nibble6 << endl;
 cout << d.bits.nibble7 << endl;
 cout << d.bits.nibble8 << endl;
 return 0;
}