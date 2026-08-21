
/* cocos2d::tweenfunc::backEaseOut(float) */

float cocos2d::tweenfunc::backEaseOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + -1.0;
                    /* try { // try from 00f62440 to 01062447 has its CatchHandler @ 00f6273c */
  return fVar1 * fVar1 * (fVar1 * 2.70158 + 1.70158) + 1.0;
}

