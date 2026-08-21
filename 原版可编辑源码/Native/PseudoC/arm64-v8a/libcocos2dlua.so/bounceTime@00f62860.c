
/* cocos2d::tweenfunc::bounceTime(float) */

float cocos2d::tweenfunc::bounceTime(float param_1)

{
  if (param_1 < 0.36363637) {
                    /* try { // try from 00f62874 to 0106287b has its CatchHandler @ 00f628bc */
                    /* try { // try from 00f6287c to 010628d7 has its CatchHandler @ 00f62850 */
    return param_1 * 7.5625 * param_1;
  }
  if (param_1 < 0.72727275) {
                    /* catch() { ... } // from try @ 00f62874 with catch @ 00f628bc */
    return (param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625 + 0.75;
  }
  if (param_1 < 0.90909094) {
    return (param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625 + 0.9375;
  }
  return (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625 + 0.984375;
}

