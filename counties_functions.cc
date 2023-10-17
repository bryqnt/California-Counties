// Bryant Huynh
// CPSC 120-10
// 2023-04-24
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 10-02
// Partners: @Itsnotjustnate
//
// Counties function definitions
//

#include "counties_functions.h"

std::string AllCountiesString(
    const std::vector<std::vector<std::string>>& ca_counties) {
  std::string all_counties_string;
  for (int i = 0; i < ca_counties[0].size(); i++) {
    all_counties_string += ca_counties[0][i] + " ";
  }
  return all_counties_string;
}

int CountyIndex(const std::vector<std::vector<std::string>>& ca_counties,
                const std::string& match_county) {
  int index{-1};
  for (int i = 0; i < ca_counties[0].size(); i++) {
    if (ca_counties[0][i] == match_county) {
      return i;
    }
  }
  return index;
}
