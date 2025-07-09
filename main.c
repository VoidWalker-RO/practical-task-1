#include <stdio.h>

int main() {
    double t1, t2, t3;
    double rate1, rate2, rate3, total_rate, time;

    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    rate1 = 1.0 / t1;
    rate2 = 1.0 / t2;
    rate3 = 1.0 / t3;

    total_rate = rate1 + rate2 + rate3;

    time = 1.0 / total_rate;

    printf("Час, необхідний для з'їдання пирога %.2lf годин\n", time);

    return 0;
}
