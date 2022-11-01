#include <gmock/gmock.h>

using ::testing::Eq; // for better readability

 class Soundex {
     public:
        std::string encode(const std::string& word) const {
            return "A";
         }
};

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  Soundex soundex;
  auto encoded = soundex.encode("A");
  ASSERT_THAT(encoded, Eq("A"));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}