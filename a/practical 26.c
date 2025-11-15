#include<stdio.h>
    void triangle_program();
    void input_sides(float *a, float *b, float *c);
    int is_valid_triangle(float a, float b, float c);
    float calculate_area(float a, float b, float c);
void main()
{
triangle_program();

}
void triangle_program() {
    float a, b, c;

    input_sides(&a, &b, &c); // Call function to input sides

    if (is_valid_triangle(a, b, c)) {
        float area = calculate_area(a, b, c);
        printf("\n The given sides form a valid triangle.\n");
        printf(" Area of the triangle = %.2f square units\n", area);
    } else {
        printf("\n The given sides do not form a valid triangle.\n");
    }
}
void input_sides(float *a, float *b, float *c) {
    printf("Enter length of side a: ");
    scanf("%f", a);
    printf("Enter length of side b: ");
    scanf("%f", b);
    printf("Enter length of side c: ");
    scanf("%f", c);
}
int is_valid_triangle(float a, float b, float c)
 {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}
float calculate_area(float a, float b, float c)
 {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
