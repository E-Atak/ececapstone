#include <iostream>

using namespace std;


int real_data = -357;
int int_offset = 0;
int act_dist = 0;


int main()
{
   
   
    if(real_data > int_offset || real_data < int_offset)
    {
    	act_dist = real_data - int_offset;
    }

    
    printf("%d\n", act_dist);

        
    return (0);


    
}
