#include<iostream>
#include<chrono>
#include<ctime>

using namespace std;
using namespace std::chrono;

int main() 
{
    system_clock clock;
    system_clock::time_point now = clock.now();
    time_t tt;

    tt = clock.to_time_t(now);

    cout << ctime(&tt);

    return 0;
}