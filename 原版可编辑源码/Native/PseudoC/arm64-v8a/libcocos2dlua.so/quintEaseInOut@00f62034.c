
/* cocos2d::tweenfunc::quintEaseInOut(float) */

float cocos2d::tweenfunc::quintEaseInOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (fVar1 < 1.0) {
                    /* try { // try from 00f62050 to 0106211f has its CatchHandler @ 00f61e88 */
    return fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 0.5;
  }
  fVar1 = fVar1 + -2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 2.0) * 0.5;
}

