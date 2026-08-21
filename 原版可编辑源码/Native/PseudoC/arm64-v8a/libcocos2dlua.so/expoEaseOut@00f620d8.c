
/* cocos2d::tweenfunc::expoEaseOut(float) */

float cocos2d::tweenfunc::expoEaseOut(float param_1)

{
  float fVar1;
  
  if (param_1 == 1.0) {
    return 1.0;
  }
  fVar1 = exp2f(param_1 * -10.0);
                    /* catch() { ... } // from try @ 00f62014 with catch @ 00f62104 */
  return 1.0 - fVar1;
}

