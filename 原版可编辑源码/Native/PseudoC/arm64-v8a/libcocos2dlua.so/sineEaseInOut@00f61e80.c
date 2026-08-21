
/* cocos2d::tweenfunc::sineEaseInOut(float) */

float cocos2d::tweenfunc::sineEaseInOut(float param_1)

{
  float fVar1;
  
                    /* try { // try from 00f61e88 to 01062013 has its CatchHandler @ 00f61e88
                       catch() { ... } // from try @ 00f61e88 with catch @ 00f61e88
                       catch() { ... } // from try @ 00f62050 with catch @ 00f61e88 */
  fVar1 = cosf(param_1 * 3.1415927);
  return (fVar1 + -1.0) * -0.5;
}

