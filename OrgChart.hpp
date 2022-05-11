#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;

namespace ariel{
    class OrgChart {
            public:
            OrgChart();
            OrgChart add_root(string root);
            OrgChart add_sub(string name1, string name2);
            vector<string>::iterator end();
            vector<string>::iterator begin();
            vector<string>::iterator begin_level_order();
            vector<string>::iterator end_level_order();
            vector<string>::iterator reverse_order();
            vector<string>::iterator begin_reverse_order();
            vector<string>::iterator begin_preorder();
            vector<string>::iterator end_preorder();

            friend ostream& operator<<(ostream& os,const OrgChart &chart);

    };
}
