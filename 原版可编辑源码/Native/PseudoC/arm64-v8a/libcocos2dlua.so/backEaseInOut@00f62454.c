
/* cocos2d::tweenfunc::backEaseInOut(float) */

float cocos2d::tweenfunc::backEaseInOut(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
                    /* try { // try from 00f62458 to 0106245b has its CatchHandler @ 00f62810 */
  if (fVar1 < 1.0) {
    return fVar1 * fVar1 * (fVar1 * 3.5949094 + -2.5949094) * 0.5;
  }
  fVar1 = fVar1 + -2.0;
                    /* try { // try from 00f624b4 to 010624bb has its CatchHandler @ 00f6279c */
                    /* try { // try from 00f624bc to 010624f3 has its CatchHandler @ 00f62194 */
  return fVar1 * fVar1 * (fVar1 * 3.5949094 + 2.5949094) * 0.5 + 1.0;
}

