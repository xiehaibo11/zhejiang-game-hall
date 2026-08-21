
/* cocos2d::tweenfunc::elasticEaseIn(float, float) */

float cocos2d::tweenfunc::elasticEaseIn(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
                    /* try { // try from 00f62218 to 0106221f has its CatchHandler @ 00f62740 */
  if ((param_1 != 0.0) && (param_1 != 1.0)) {
                    /* try { // try from 00f62230 to 01062233 has its CatchHandler @ 00f62820 */
    fVar1 = exp2f((param_1 + -1.0) * 10.0);
    fVar2 = (param_1 + -1.0 + param_2 * -0.25) * -3.1415927;
    fVar2 = sinf((fVar2 + fVar2) / param_2);
    param_1 = fVar1 * fVar2;
  }
  return param_1;
}

