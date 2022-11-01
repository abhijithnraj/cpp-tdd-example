#ifndef Soundex_h
#define Soundex_h


#include <string>
#include <iostream>

static const size_t MaxCodeLength{4};
 class Soundex {
     public:
        std::string encode(const std::string& word) const {

          return zeroPad(head(word) + encodeDigits(word));
            auto encoded = word.substr(0,1);
            if(word.length()>1){
              encoded+="1";
            }
            return zeroPad(encoded);
         }
      private:
        std::string zeroPad(const std::string& word) const {
          auto zeroesNeeded = MaxCodeLength - word.length();
          return word+std::string(zeroesNeeded,'0');
        }

        std::string head(const std::string& word) const{
          return word.substr(0,1);
        }

        std::string encodeDigits(const std::string& word) const{
            if(word.length()>1){
              return encodedDigit();
            }
            return "";
        }

        std::string encodedDigit() const{
          return "1";
        }
};

#endif