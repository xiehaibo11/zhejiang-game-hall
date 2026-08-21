
/* cocos2d::tweenfunc::quadraticInOut(float) */

float cocos2d::tweenfunc::quadraticInOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (fVar1 < 1.0) {
    return fVar1 * fVar1 * 0.5;
  }
                    /* try { // try from 00f629f0 to 01062b07 has its CatchHandler @ 00f629f0
                       catch() { ... } // from try @ 00f629f0 with catch @ 00f629f0
                       catch() { ... } // from try @ 00f62dc8 with catch @ 00f629f0 */
  return ((fVar1 + -1.0) * (fVar1 + -1.0 + -2.0) + -1.0) * -0.5;
}

