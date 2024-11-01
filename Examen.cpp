//
// Created by barba on 29/10/2024.
//

#include "Examen.h"
#include <iostream>


bool esTriplePitagorico(int a, int b, int c) {
    return (a * a + b * b == c * c) &&
           (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int triples[4][3] = {{3, 4, 5}, {6, 8, 10}, {5, 12, 13}, {8, 15, 17}};

    std::cout << "Triples pitagóricos encontrados:\n";
    for (int i = 0; i < 4; ++i) {
        int a = triples[i][0];
        int b = triples[i][1];
        int c = triples[i][2];

        if (esTriplePitagorico(a, b, c)) {
            std::cout << a << " - " << b << " - " << c << std::endl;
        }
    }

    return 0;
}
