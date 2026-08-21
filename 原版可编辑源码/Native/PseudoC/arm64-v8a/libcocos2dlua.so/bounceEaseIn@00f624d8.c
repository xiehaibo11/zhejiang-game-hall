
/* cocos2d::tweenfunc::bounceEaseIn(float) */

float cocos2d::tweenfunc::bounceEaseIn(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 - param_1;
  if (fVar1 < 0.36363637) {
                    /* try { // try from 00f624f4 to 010624fb has its CatchHandler @ 00f62738 */
    return 1.0 - fVar1 * fVar1 * 7.5625;
  }
                    /* try { // try from 00f6250c to 0106250f has its CatchHandler @ 00f6280c */
  if (0.72727275 <= fVar1) {
    if (0.90909094 <= fVar1) {
      fVar2 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
                    /* try { // try from 00f625a8 to 010625af has its CatchHandler @ 00f62734 */
      fVar1 = 0.984375;
    }
    else {
                    /* try { // try from 00f62568 to 0106256f has its CatchHandler @ 00f62770 */
                    /* try { // try from 00f62570 to 010625a7 has its CatchHandler @ 00f62194 */
      fVar2 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
      fVar1 = 0.9375;
    }
  }
  else {
    fVar2 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
    fVar1 = 0.75;
  }
  return 1.0 - (fVar2 + fVar1);
}

