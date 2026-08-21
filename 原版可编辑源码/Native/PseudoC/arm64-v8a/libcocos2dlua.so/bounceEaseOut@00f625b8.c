
/* cocos2d::tweenfunc::bounceEaseOut(float) */

float cocos2d::tweenfunc::bounceEaseOut(float param_1)

{
                    /* try { // try from 00f625c0 to 010625c3 has its CatchHandler @ 00f62808 */
  if (param_1 < 0.36363637) {
    return param_1 * 7.5625 * param_1;
  }
  if (param_1 < 0.72727275) {
                    /* try { // try from 00f6261c to 01062623 has its CatchHandler @ 00f62744 */
    return (param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625 + 0.75;
  }
  if (param_1 < 0.90909094) {
    return (param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625 + 0.9375;
  }
                    /* try { // try from 00f6266c to 0106266f has its CatchHandler @ 00f6281c */
  return (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625 + 0.984375;
}

