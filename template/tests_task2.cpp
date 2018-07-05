// ****************************************************************************
// Тесты для задачи 
//   Заданы целые числа A и В.
//   Определить среднее арифметическое чисел  A и B.
// ****************************************************************************

TEST(check_ab_average, check_positive_ab)
{
  int a = 1;
  int b = 2;
  double check = ab_average(a, b);

  EXPECT_EQ(1.5, check);
}

TEST(check_ab_average, check_negative_ab)
{
  int a = -2;
  int b = -3;
  double check = ab_average(a, b);

  EXPECT_EQ(-2.5, check);
}

TEST(check_ab_average, check_zero_ab)
{
  int a = 0;
  int b = 0;
  double check = ab_average(a, b);

  EXPECT_EQ(0, check);
}

TEST(check_ab_average, check_odd_a_even_b)
{
  int a = -3;
  int b = 4;
  double check = ab_average(a, b);

  EXPECT_EQ(0.5, check);
}

TEST(check_ab_average, check_even_a_odd_b)
{
  int a = 2;
  int b = -5;
  double check = ab_average(a, b);

  EXPECT_EQ(-1.5, check);
}
