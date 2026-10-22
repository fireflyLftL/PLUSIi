/*
 * ТЕМА: Численные методы.
 * СУТЬ: Решение x = cos(x) методом итераций x_{n+1} = cos(x_n).
 * ГДЕ БАГ: В строке 16 создается локальная переменная 'x' (Variable Shadowing), глобальный 'x' не меняется.
 * КАК НАЙТИ: Поставьте Breakpoint на строку 15. Отслеживайте 'x' в Watch. Вы увидите, что его значение застряло на 1.0.
 */
#include <iostream>
#include <cmath>

double fixedPoint(double initial_guess, int steps) {
    double x = initial_guess;
    for (int i = 0; i < steps; ++i) {
        // БАГ: Ключевое слово double перекрывает внешнюю переменную x
        double x = std::cos(x); 
    }
    return x;
}

int main() {
    std::cout << "Корень (Итерации): " << fixedPoint(1.0, 10) << std::endl;
    return 0;
}