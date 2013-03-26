#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp> 
using namespace std;
using namespace boost;



int main(int argc, char *argv[])
{
    string s = "a,b, c ,,e,f,";
    vector <string> fields;
    split( fields, s, is_any_of( "," ) );
    for(int k=0; k<fields.size();++k){
        cout<<"<"<<fields[k]<<">"<<endl;
    }
    return 0;
}










