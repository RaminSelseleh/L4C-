/**
 * Main
 */

#include <iostream>
#include <assert.h>
#include "Time.h"


using namespace std;

int main() {

    Time zeroTime;
    assert(zeroTime.get_hour() == 0);
    assert(zeroTime.get_minute() == 0);
    assert(zeroTime.get_second() == 0);

    Time TimeA(1, 1, 1);
    assert(TimeA.get_hour() == 1);
    assert(TimeA.get_minute() == 1);
    assert(TimeA.get_second() == 1);

    Time badTime(99, 99, 99);
    assert(badTime.get_hour() == 0);
    assert(badTime.get_minute() == 0);
    assert(badTime.get_second() == 0);

    Time TimeB(12, 14, 43);
    assert(TimeB.get_hour() == 12);
    assert(TimeB.get_minute() == 14);
    assert(TimeB.get_second() == 43);

    Time badTime2(25, 70, 60);
    assert(badTime2.get_hour() == 0);
    assert(badTime2.get_minute() == 0);
    assert(badTime2.get_second() == 0);

    Time maxTime(23, 59, 59);
    assert(maxTime.get_hour() == 23);
    assert(maxTime.get_minute() == 59);
    assert(maxTime.get_second() == 59);

    Time badTime3(20, 70, 99);
    assert(badTime3.get_hour() == 20);
    assert(badTime3.get_minute() == 0);
    assert(badTime3.get_second() == 0);

	return 0;
}
