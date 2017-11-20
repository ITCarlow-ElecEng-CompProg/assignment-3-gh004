/** Standard Deviation
 *  Gearoid Hanrahan
 *  C00108964
 *  02-10-17
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{   //Variable Declaration
    int i;
    double sum, mean,product, values[10]={0};

    i=0;
    //For loop
    for(i=0;i<10;i++)
    {

        cout << "Enter Value:";
        cin  >> values[i];

        sum = sum + values[i];
    }

    mean = sum / 10;


    for (i = 0; i < 10; i++)
    {
        sum=sum+((values[i] - mean)*(values[i]-mean));
    }


    product = sqrt(sum/10);

    cout<< "Mean is =" << mean ;
    cout<< "\nProduct is =" << product;

    return 0;
}
