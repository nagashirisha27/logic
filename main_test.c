#include "unity.h"
#include "functions.h"

void setUp()
{
}
void tearDown()
{
}
int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_and_gate);
  RUN_TEST(test_not_gate);
  RUN_TEST(test_xor_gate);
  RUN_TEST(test_half_adder);
  RUN_TEST(test_half_subractor);
  
  return UNITY_END();
}

void test_and_gate(void)
{
  TEST_ASSERT_EQUAL(0,(and_gate(1,0)));
  TEST_ASSERT_EQUAL(0,(and_gate(0,1)));
  TEST_ASSERT_EQUAL(1,(and_gate(1,1)));
  TEST_ASSERT_EQUAL(0,(and_gate(0,0)));
}
void test_not_gate(void)
{
  TEST_ASSERT_EQUAL(0,(not_gate(1)));
  TEST_ASSERT_EQUAL(1,(not_gate(0)));
}
void test_xor_gate(void)
{
  TEST_ASSERT_EQUAL(1,(xor_gate(1,0)));
  TEST_ASSERT_EQUAL(1,(xor_gate(0,1)));
  TEST_ASSERT_EQUAL(0,(xor_gate(1,1)));
  TEST_ASSERT_EQUAL(0,(xor_gate(0,0)));
}
void test_half_adder(void)
{
  TEST_ASSERT_EQUAL((1,0),(half_adder(1,0)));
  TEST_ASSERT_EQUAL((1,0),(half_adder(0,1)));
  TEST_ASSERT_EQUAL((0,1),(half_adder(1,1)));
  TEST_ASSERT_EQUAL((0,0),(half_adder(0,0)));
}
void test_half_subractor(void)
{
  TEST_ASSERT_EQUAL((1,0),(half_subractor(1,0)));
  TEST_ASSERT_EQUAL((1,1),(half_subractor(0,1)));
  TEST_ASSERT_EQUAL((0,0),(half_subractor(1,1)));
  TEST_ASSERT_EQUAL((0,0),(half_subractor(0,0)));
}