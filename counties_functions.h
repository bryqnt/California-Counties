// Bryant Huynh
// CPSC 120-10
// 2023-04-24
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 10-02
// Partners: @Itsnotjustnate
//
// Counties function headers
//

/* Do not edit below this line. */
/* Do not edit below this line. */
/* Do not edit below this line. */

#ifndef COUNTIES_FUNCTIONS_H
#define COUNTIES_FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>

std::string AllCountiesString(
    const std::vector<std::vector<std::string>>& ca_counties);

int CountyIndex(const std::vector<std::vector<std::string>>& ca_counties,
                const std::string& match_county);

#endif
