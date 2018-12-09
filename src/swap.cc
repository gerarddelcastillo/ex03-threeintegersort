//
// Created by Gerard Del Castillo on 11/28/2018.
//

#include <algorithm>
#include <iostream>
#include <threeintegersort.h>

namespace edu
{
    namespace vcccd
    {
        namespace vc
        {
            namespace csv13
            {
                void sort(int &a, int &b, int &c)
                {
                    if (c < b)
                    {
                        std::swap(c, b);
                    }
                    if (b < a)
                    {
                        std::swap(b, a);
                    }
                    if (b > c)
                    {
                        std::swap(b, c);
                    }
                    else
                        std::cout << "The following values are sorted from least to greatest:" << a << " " << b
                                  << " " << c << std::endl;

                }
            }
        }
    }
}
