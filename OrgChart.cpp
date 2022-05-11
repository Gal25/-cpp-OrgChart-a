#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "OrgChart.hpp"
namespace ariel{

        OrgChart::OrgChart(){}
        OrgChart OrgChart::add_root(string root){
                OrgChart chart;
                return chart;
        }
        OrgChart OrgChart::add_sub(string name1, string name2){
                OrgChart chart;
                return chart;
        }
        
        vector<string>::iterator OrgChart::end(){
                vector<string> iter;
                return iter.begin();
        }
        vector<string>::iterator OrgChart::begin(){
                vector<string> iter;
                return iter.begin();
        }

        vector<string>::iterator OrgChart::begin_level_order(){
                vector<string>  iter;
                return iter.begin();
        }       
        vector<string>::iterator OrgChart::end_level_order(){
                vector<string> iter;
                return iter.begin();
        }
        vector<string>::iterator OrgChart::reverse_order(){
                vector<string> iter;
                return iter.begin();
        }
        vector<string>::iterator OrgChart::begin_reverse_order(){
                vector<string> iter;
                return iter.begin();
        }
        vector<string>::iterator OrgChart::begin_preorder(){
                vector<string> iter;
                return iter.begin();
        }
        vector<string>::iterator OrgChart::end_preorder(){
                vector<string> iter;
                return iter.begin();
        }
        ostream& operator<<(ostream& os,const OrgChart &chart){
                return os;
        }

}