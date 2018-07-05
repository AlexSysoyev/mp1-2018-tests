// ****************************************************************************
// Тесты для задачи 
//   Задан вещественный отрезок[a, b].
//   Определить, принадлежит ли число x этому отрезку.
// ****************************************************************************

TEST(check_x_in_bounds, check_x_in_ab_return_true)
{
  float a = -1;
  float b = 2;
  float x = 1;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(1, check);
}

TEST(check_x_in_bounds, check_x_less_a_return_false)
{
  float a = -1;
  float b = 2;
  float x = -2;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(0, check);
}

TEST(check_x_in_bounds, check_x_greater_b_return_false)
{
  float a = -1;
  float b = 2;
  float x = -2;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(0, check);
}
