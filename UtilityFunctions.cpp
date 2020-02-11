#include "UtilityFunctions.h"

// Jason
std::vector<int> MultiplesFilter(std::vector<int> elements, int divides_by)
{
    std::vector<int> ret_vec;
    for( int i=0; i<elements.size(); i++ )
    {
        if( elements[i] % divides_by != 0 )
        {
            ret_vec.push_back( elements[i] );
        }
    }
    return ret_vec;
}
