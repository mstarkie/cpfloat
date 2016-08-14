//
//  main.cpp
//  cpfloat
//
//  Created by Michael Starkie on 8/14/16.
//  Copyright © 2016 Global Forge, LLC. All rights reserved.
//

#include <iostream>

#define asreal(x) (*((float *) &x))

typedef long unsigned real;

int main(int argc, const char * argv[]) {
    real l;
    //float t = *( (*float) const &1);
    asreal(l) = 1.0;
    printf("l as hex     = %lx\n", l);
    printf("l as real    = %f\n", asreal(l));
    printf("l as decimal = %lu\n", l);
    return 0;
}