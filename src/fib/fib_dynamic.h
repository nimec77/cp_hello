//
// Created by Dmitry Seloustev on 08.07.2022.
//

#ifndef CP_HELLO_FIB_DYNAMIC_H
#define CP_HELLO_FIB_DYNAMIC_H

#define MAXN 45
#define UNKNOWN -1

class FibDynamic {
private:
    long f[MAXN +1];
    long FibCalculate(int n);

public:
    long FibCalculateDriver(int n);
    long FibLoop(int n);
    long FubUltimate(int n);
};


#endif //CP_HELLO_FIB_DYNAMIC_H
