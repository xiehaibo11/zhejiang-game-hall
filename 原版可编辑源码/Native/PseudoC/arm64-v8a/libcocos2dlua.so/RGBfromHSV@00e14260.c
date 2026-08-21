
/* cocos2d::extension::ControlUtils::RGBfromHSV(cocos2d::extension::HSV) */

double cocos2d::extension::ControlUtils::RGBfromHSV(double param_1,double param_2,double param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 <= 0.0) {
    if (!NAN(param_1)) {
      param_3 = 0.0;
    }
  }
  else {
    dVar2 = param_1 / 60.0;
    if (360.0 <= param_1) {
      dVar2 = 0.0;
    }
    uVar1 = (ulong)dVar2;
                    /* try { // try from 00e142a8 to 00f142af has its CatchHandler @ 00e143dc */
    dVar3 = param_3 * (1.0 - param_2);
    if (uVar1 < 5) {
                    /* try { // try from 00e142d0 to 00f142db has its CatchHandler @ 00e143ec */
                    /* try { // try from 00e142e4 to 00f142ef has its CatchHandler @ 00e1440c */
      switch(uVar1) {
      case 1:
        param_3 = param_3 * (1.0 - param_2 * (dVar2 - (double)(long)uVar1));
        break;
      case 2:
        param_3 = dVar3;
                    /* try { // try from 00e14324 to 00f1442f has its CatchHandler @ 00e141b8 */
        break;
      case 3:
        param_3 = dVar3;
        break;
      case 4:
        param_3 = param_3 * (1.0 - param_2 * (1.0 - (dVar2 - (double)(long)uVar1)));
      }
    }
  }
                    /* try { // try from 00e14308 to 00f1430f has its CatchHandler @ 00e143e4 */
  return param_3;
}

