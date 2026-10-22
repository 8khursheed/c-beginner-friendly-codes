#include <stdio.h>

int main()
{
    int hardness, tensile;
    float carbon;
    int c1, c2, c3;

    printf("Enter hardness of steel: ");
    scanf("%d", &hardness);

    printf("Enter carbon content: ");
    scanf("%f", &carbon);

    printf("Enter tensile strength: ");
    scanf("%d", &tensile);

    c1 = (hardness > 50);
    c2 = (carbon < 0.7);
    c3 = (tensile > 5600);

    if (c1 && c2 && c3)
        printf("Grade of steel is 10");
    else if (c1 && c2)
        printf("Grade of steel is 9");
    else if (c2 && c3)
        printf("Grade of steel is 8");
    else if (c1 && c3)
        printf("Grade of steel is 7");
    else if (c1 || c2 || c3)
        printf("Grade of steel is 6");
    else
        printf("Grade of steel is 5");

    return 0;
}