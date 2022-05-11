// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <stdexcept>
// #include <vector>
// #include "OrgChart.hpp"
// #include "doctest.h"

// using namespace std;
// using namespace ariel;

// TEST_CASE("Good input - size vec = 4") {
//     OrgChart organization;

//     organization.add_root("Sigal")
//       .add_sub("Sigal", "Gal")         // Now Gal is subordinate to the Sigal
//       .add_sub("Sigal", "Romi")         // Now the Romi is subordinate to Sigal
//       .add_sub("Sigal", "Noy");         // Now the Noy is subordinate to Sigal


//     vector<string> level_order = {"1", "2", "3", "4"};
//     size_t i = 0;
//     for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it)
//     {
//       level_order[i]= *(it);
//       i++;
//     }
//     CHECK(level_order[0] == "sigal");
//     CHECK(level_order[1] == "Gal");
//     CHECK(level_order[2]== "Romi");
//     CHECK(level_order[3] == "Noy");

//     vector<string> reverse_order = {"1", "2", "3", "4"};
//     size_t j = 0;
//     for (auto it = organization.begin_reverse_order(); it != organization.reverse_order(); ++it)
//     {
//       reverse_order[j]= *(it);
//       j++;
//     }

//     CHECK(level_order[0] == "Gal");
//     CHECK(level_order[1] == "Romi");
//     CHECK(level_order[2]== "Noy");
//     CHECK(level_order[3] == "Sigal");


//     vector<string> preorder = {"1", "2", "3", "4"};
//     size_t j = 0;
//     for (auto it=organization.begin_preorder(); it!=organization.end_preorder(); ++it) {
//         preorder[i]= *(it);
//         j++;
//     }

//     CHECK(level_order[0] == "Sigal");
//     CHECK(level_order[1] == "Gal");
//     CHECK(level_order[2]== "Romi");
//     CHECK(level_order[3] == "Noy");
// }

// TEST_CASE("Good input - size vec = 10") {
//     OrgChart organization;

//     organization.add_root("Sigal")
//       .add_sub("Sigal", "Gal")         // Now Gal is subordinate to the Sigal
//       .add_sub("Sigal", "Romi")         // Now the Romi is subordinate to Sigal
//       .add_sub("Sigal", "Noy")         // Now the Noy is subordinate to Sigal
//       .add_sub("Noy", "Michal")         // Now the Noy is subordinate to Sigal
//       .add_sub("Noy", "Dani")         // Now the Noy is subordinate to Sigal
//       .add_sub("Romi", "Ofer")         // Now the Noy is subordinate to Sigal
//       .add_sub("Romi", "Noya")         // Now the Noy is subordinate to Sigal
//       .add_sub("Gal", "Shani")         // Now the Noy is subordinate to Sigal
//       .add_sub("Gal", "Liza");         // Now the Noy is subordinate to Sigal


//     vector<string> level_order = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
//     size_t i = 0;
//     for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it)
//     {
//       level_order[i]= *(it);
//       i++;
//     }

//     CHECK(level_order[0] == "Sigal");
//     CHECK(level_order[1] == "Gal");
//     CHECK(level_order[2]== "Romi");
//     CHECK(level_order[3] == "Noy");
//     CHECK(level_order[4] == "Shani");
//     CHECK(level_order[5] == "Liza");
//     CHECK(level_order[6] == "Ofer");
//     CHECK(level_order[7] == "Noya");
//     CHECK(level_order[8] == "Michal");
//     CHECK(level_order[9] == "Dani");



//     vector<string> reverse_order = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
//     size_t j = 0;
//     for (auto it = organization.begin_reverse_order(); it != organization.reverse_order(); ++it)
//     {
//       reverse_order[j]= *(it);
//       j++;
//     }

//     CHECK(level_order[0] == "Shani");
//     CHECK(level_order[1] == "Liza");
//     CHECK(level_order[2]== "Ofer");
//     CHECK(level_order[3] == "Noya");
//     CHECK(level_order[4] == "Michal");
//     CHECK(level_order[5] == "Dani");
//     CHECK(level_order[6] == "Gal");
//     CHECK(level_order[7] == "Romi");
//     CHECK(level_order[8] == "Noy");
//     CHECK(level_order[9] == "Sigal");


//     vector<string> preorder = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
//     size_t j = 0;
//     for (auto it=organization.begin_preorder(); it!=organization.end_preorder(); ++it) {
//         preorder[i]= *(it);
//         j++;
//     }

//     CHECK(level_order[0] == "Sigal");
//     CHECK(level_order[1] == "Gal");
//     CHECK(level_order[2]== "Shani");
//     CHECK(level_order[3] == "Liza");
//     CHECK(level_order[4] == "Romi");
//     CHECK(level_order[5] == "Ofer");
//     CHECK(level_order[6] == "Noya");
//     CHECK(level_order[7] == "Noy");
//     CHECK(level_order[8] == "Michal");
//     CHECK(level_order[9] == "Dani");
// }

// TEST_CASE("Bed input") {
//     OrgChart organization;

    

//   CHECK_THROWS(organization.add_sub("GAL","Sigal"));


// }