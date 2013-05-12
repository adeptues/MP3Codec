#include <gtest/gtest.h>
#include "../include/MP3Header.h"
namespace {

// The fixture for testing class Foo.
class TestHeader : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  TestHeader() {
    // You can do set-up work for each test here.
  }

  virtual ~TestHeader() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(TestHeader, TestSyncWord) {
    int header = 0xFFFBA040;
    unsigned char * data = new unsigned char[4];
    data[0] = 0xFF;
    data[1] = 0xFB;
    data[2] = 0xA0;
    data[3] = 0x40;
    MP3Header * mph = new MP3Header();

    bool expected = mph->syncWord(data);
    delete [] data;
    ASSERT_TRUE(expected);
}

// Tests that Foo does Xyz.
TEST_F(TestHeader, DoesXyz) {
  ASSERT_EQ(1,0);
}

}  // namespace
