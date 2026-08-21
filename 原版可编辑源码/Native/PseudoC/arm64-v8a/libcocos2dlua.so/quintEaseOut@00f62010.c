
/* cocos2d::tweenfunc::quintEaseOut(float) */

float cocos2d::tweenfunc::quintEaseOut(float param_1)

{
  float fVar1;
  
                    /* try { // try from 00f62014 to 0106204f has its CatchHandler @ 00f62104 */
  fVar1 = param_1 + -1.0;
  return fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0;
}

