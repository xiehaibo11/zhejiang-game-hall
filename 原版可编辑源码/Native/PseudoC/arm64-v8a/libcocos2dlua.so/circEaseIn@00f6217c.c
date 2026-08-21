
/* cocos2d::tweenfunc::circEaseIn(float) */

float cocos2d::tweenfunc::circEaseIn(float param_1)

{
                    /* try { // try from 00f62194 to 01062217 has its CatchHandler @ 00f62194
                       catch() { ... } // from try @ 00f62194 with catch @ 00f62194
                       catch() { ... } // from try @ 00f62348 with catch @ 00f62194
                       catch() { ... } // from try @ 00f624bc with catch @ 00f62194
                       catch() { ... } // from try @ 00f62570 with catch @ 00f62194
                       catch() { ... } // from try @ 00f62700 with catch @ 00f62194
                       catch() { ... } // from try @ 00f627e0 with catch @ 00f62194 */
  return -(SQRT(1.0 - param_1 * param_1) + -1.0);
}

