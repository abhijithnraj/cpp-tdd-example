#include <gmock/gmock.h>
#include "Soundex.h"

using namespace testing;// for better readability
class SoundexEncoding : public ::testing::Test {
  public: 
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  auto encoded = soundex.encode("A");
  ASSERT_THAT(encoded, Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZeroesToEnsureThreeDigits){
  auto encoded = soundex.encode("I");
  ASSERT_THAT(encoded,Eq("I000"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}