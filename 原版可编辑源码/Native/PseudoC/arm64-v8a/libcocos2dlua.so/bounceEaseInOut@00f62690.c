
/* cocos2d::tweenfunc::bounceEaseInOut(float) */

float cocos2d::tweenfunc::bounceEaseInOut(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < 0.5) {
    fVar1 = 1.0 - (param_1 + param_1);
                    /* try { // try from 00f626b4 to 010626b7 has its CatchHandler @ 00f62818 */
    if (0.36363637 <= fVar1) {
                    /* try { // try from 00f62700 to 01062757 has its CatchHandler @ 00f62194 */
      if (0.72727275 <= fVar1) {
                    /* try { // try from 00f62784 to 01062787 has its CatchHandler @ 00f62798 */
        if (0.90909094 <= fVar1) {
                    /* catch() { ... } // from try @ 00f627dc with catch @ 00f62804 */
                    /* catch() { ... } // from try @ 00f625c0 with catch @ 00f62808 */
                    /* catch() { ... } // from try @ 00f6250c with catch @ 00f6280c */
                    /* catch() { ... } // from try @ 00f62458 with catch @ 00f62810 */
          fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
                    /* catch() { ... } // from try @ 00f626fc with catch @ 00f62814 */
          fVar2 = 0.984375;
        }
        else {
                    /* catch() { ... } // from try @ 00f62784 with catch @ 00f62798 */
                    /* catch() { ... } // from try @ 00f624b4 with catch @ 00f6279c */
          fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
          fVar2 = 0.9375;
                    /* try { // try from 00f627b0 to 010627b3 has its CatchHandler @ 00f627c4 */
        }
      }
      else {
                    /* catch() { ... } // from try @ 00f6232c with catch @ 00f62730 */
        fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
                    /* catch() { ... } // from try @ 00f625a8 with catch @ 00f62734 */
        fVar2 = 0.75;
                    /* catch() { ... } // from try @ 00f624f4 with catch @ 00f62738 */
      }
                    /* catch() { ... } // from try @ 00f626b4 with catch @ 00f62818 */
      fVar1 = fVar1 + fVar2;
    }
    else {
      fVar1 = fVar1 * fVar1 * 7.5625;
    }
                    /* catch() { ... } // from try @ 00f6266c with catch @ 00f6281c */
                    /* catch() { ... } // from try @ 00f62230 with catch @ 00f62820 */
    return (1.0 - fVar1) * 0.5;
  }
  fVar1 = param_1 + param_1 + -1.0;
  if (0.36363637 <= fVar1) {
                    /* catch() { ... } // from try @ 00f62440 with catch @ 00f6273c */
                    /* catch() { ... } // from try @ 00f62218 with catch @ 00f62740 */
                    /* catch() { ... } // from try @ 00f6261c with catch @ 00f62744 */
    if (0.72727275 <= fVar1) {
                    /* catch() { ... } // from try @ 00f627b0 with catch @ 00f627c4 */
      if (0.90909094 <= fVar1) {
                    /* catch() { ... } // from try @ 00f62344 with catch @ 00f6283c */
        fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
        fVar2 = 0.984375;
      }
      else {
                    /* catch() { ... } // from try @ 00f6229c with catch @ 00f627c8 */
                    /* try { // try from 00f627dc to 010627df has its CatchHandler @ 00f62804 */
                    /* try { // try from 00f627e0 to 0106284f has its CatchHandler @ 00f62194 */
        fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
        fVar2 = 0.9375;
      }
    }
    else {
                    /* try { // try from 00f62758 to 0106275b has its CatchHandler @ 00f6276c */
                    /* catch() { ... } // from try @ 00f62758 with catch @ 00f6276c */
      fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
                    /* catch() { ... } // from try @ 00f62568 with catch @ 00f62770 */
      fVar2 = 0.75;
    }
                    /* catch() { ... } // from try @ 00f6287c with catch @ 00f62850 */
    fVar1 = fVar1 + fVar2;
  }
  else {
    fVar1 = fVar1 * fVar1 * 7.5625;
                    /* try { // try from 00f626fc to 010626ff has its CatchHandler @ 00f62814 */
  }
  return fVar1 * 0.5 + 0.5;
}

