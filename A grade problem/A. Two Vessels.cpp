#include <iostream>
#include <cmath>

using namespace std;

int minMovesToEqualize(int a, int b, int c)
{
    long long int cou=0,x,temp;
    if(a==b) return 0;
    else if(b>a){
        temp=b;
        b=a;
        a=temp;
    }

        while(a!=b)
        {
            if(a>b)
            {
                x=a-b;
                if(x>c)
                {
                    a=a-c;
                    b=b+c;
                    cou++;

                }
                else if(x<=c)
                {
                    //y=x/2.0;
                    a=a-x;
                    b=b+(x/2.0);
                    a=a+(x/2.0);
                    cou++;


                }

            }



        }

        return cou;


}

    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            long long int a, b, c;
           cin>>a>>b>>c;

            int result= minMovesToEqualize(a, b, c);

            cout << result<< endl;
        }

        return 0;
    }


