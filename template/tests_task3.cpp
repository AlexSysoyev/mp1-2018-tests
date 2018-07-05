// ****************************************************************************
// Тесты для задачи 
//   Дан непустой массив вещественных чисел.
//   Определить, является ли он строго возрастающей последовательностью.
// ****************************************************************************

TEST(check_sorting, check_sorted_array_return_true)
{
  float arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(1, check);
}

TEST(check_sorting, check_not_sorted_array_return_false)
{
  float arr[5] = { 1,2,3,4,0 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_reverse_sorted_array_return_false)
{
  float arr[6] = { 6,5,4,3,2,1 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_equal_array_return_false)
{
  float arr[4] = { 4,4,4,4 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_one_element_return_true)
{
  float arr[1] = { 3 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(1, check);
}
