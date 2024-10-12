#include <iostream>
int factoriel(int a) {
    int s = 1;
    for (int i = 1; i <= a; i++) {
        s = s * i;
    }
    return s;
}

double puissance(double b, int n) {
    double b_n = 1;
    for (int i = 0; i < n; i++) {
        b_n = b_n * b;
    }
    return b_n;
}

double calcul_cos(double a) {
    double cos_a = 0;
    for (int i = 0; i <= 10; i++) {
        cos_a += (puissance(-1, i) * puissance(a, 2 * i)) / factoriel(2 * i);
    }
    return cos_a;
}

double calcul_sin(double a) {
    double sin_a = 0;
    for (int i = 0; i <= 10; i++) {
        sin_a += (puissance(-1, i) * puissance(a, 2 * i + 1)) / factoriel(2 * i + 1);
    }
    return sin_a;
}

double calcul_tan(double a) {
    return calcul_sin(a) / calcul_cos(a);
}

double calcul_cotan(double a) {
    return 1 / calcul_tan(a);
}

int main(int argc, char** argv) {
    std::cout << "Entrez une mesure en degrés pour obtenir ses valeurs trigonométriques : " << std::endl;
    
    float b = 0;
    std::cin >> b;

    // Conversion de degrés en radians
    float rad = b * 0.175;

    double cos_b = calcul_cos(rad);
    double sin_b = calcul_sin(rad);
    double tan_b = calcul_tan(rad);
    double cotan_b = calcul_cotan(rad);

    std::cout << "Les valeurs trigonométriques de " << b << " degrés sont :\n";
    std::cout << "Cosinus : " << cos_b << "\n";
    std::cout << "Sinus : " << sin_b << "\n";
    std::cout << "Tangente : " << tan_b << "\n";
    std::cout << "Cotangente : " << cotan_b << std::endl;

    return 0;
}