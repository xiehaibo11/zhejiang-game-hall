
/* cocos2d::MathUtil::smooth(float*, float, float, float, float) */

void cocos2d::MathUtil::smooth
               (float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (0.0 < param_3) {
    fVar1 = param_2 - *param_1;
    if (fVar1 <= 0.0) {
      param_4 = param_5;
    }
                    /* catch() { ... } // from try @ 009992cc with catch @ 00999508 */
                    /* catch() { ... } // from try @ 009992e0 with catch @ 0099950c
                       catch() { ... } // from try @ 009993c8 with catch @ 0099950c */
    *param_1 = *param_1 + (fVar1 * param_3) / (param_4 + param_3);
  }
  return;
}

