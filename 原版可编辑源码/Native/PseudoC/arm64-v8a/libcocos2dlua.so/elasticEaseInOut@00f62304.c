
/* cocos2d::tweenfunc::elasticEaseInOut(float, float) */

float cocos2d::tweenfunc::elasticEaseInOut(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if ((param_1 != 0.0) && (param_1 != 1.0)) {
                    /* try { // try from 00f6232c to 01062333 has its CatchHandler @ 00f62730 */
                    /* try { // try from 00f62344 to 01062347 has its CatchHandler @ 00f6283c */
                    /* try { // try from 00f62348 to 0106243f has its CatchHandler @ 00f62194 */
    if (param_2 == 0.0) {
      param_2 = 0.45000002;
    }
    fVar2 = param_1 + param_1 + -1.0;
    if (0.0 <= fVar2) {
      fVar1 = exp2f(fVar2 * -10.0);
      fVar2 = (fVar2 - param_2 * 0.25) * 3.1415927;
      fVar2 = sinf((fVar2 + fVar2) / param_2);
      param_1 = fVar1 * fVar2 * 0.5 + 1.0;
    }
    else {
      fVar1 = exp2f(fVar2 * 10.0);
      fVar2 = (fVar2 - param_2 * 0.25) * 3.1415927;
      fVar2 = sinf((fVar2 + fVar2) / param_2);
      param_1 = fVar1 * -0.5 * fVar2;
    }
  }
  return param_1;
}

