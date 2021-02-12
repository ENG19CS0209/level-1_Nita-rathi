
#include <math.h>

struct coordinates {
    int x, y;
};

double Distance(struct coordinates p, struct coordinates q)
{
    double d;
    d = sqrt((p.x - q.x) * (p.x - q.x) + (p.y-q.y) *(p.y-q.y));
    return d;
}

int main()
{
    double d;
    struct coordinates p, q;
    printf("Enter x and y coordinate of point p: ");
    scanf("%d %d", &p.x, &p.y);
    printf("Enter x and y coordinate of point q: ");
    scanf("%d %d", &q.x, &q.y);
    d=Distance(p, q);
    printf("Distance between a and b: %lf\n", d);
    return 0;
}
