// Задан вещественный отрезок[a, b].
// Определить, принадлежит ли число x этому отрезку.
int x_in_bounds(float a, float b, float x)
{
  int check = 1;
  if (x < a)
    check = 0;
  if (x > b)
    check = 0;

  return check;
//  return -1;
}
