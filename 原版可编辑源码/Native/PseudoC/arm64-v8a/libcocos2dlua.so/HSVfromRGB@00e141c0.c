
/* cocos2d::extension::ControlUtils::HSVfromRGB(cocos2d::extension::RGBA) */

undefined1  [16]
cocos2d::extension::ControlUtils::HSVfromRGB(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  if (param_2 <= param_1) {
    dVar1 = param_2;
  }
  dVar4 = param_1;
  if (param_1 <= param_2) {
    dVar4 = param_2;
  }
  if (param_3 <= dVar1) {
    dVar1 = param_3;
  }
  if (dVar4 <= param_3) {
    dVar4 = param_3;
  }
  if (0.0 < dVar4) {
    if (dVar4 <= param_1) {
      dVar3 = (param_2 - param_3) / (dVar4 - dVar1);
    }
    else {
      if (dVar4 <= param_2) {
        param_1 = param_3 - param_1;
        dVar3 = 2.0;
      }
      else {
        param_1 = param_1 - param_2;
        dVar3 = 4.0;
      }
      dVar3 = param_1 / (dVar4 - dVar1) + dVar3;
    }
    dVar3 = dVar3 * 60.0;
    dVar1 = dVar3 + 360.0;
    if (0.0 <= dVar3) {
      dVar1 = dVar3;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar1;
    return auVar2;
  }
  return ZEXT816(0xbff0000000000000);
}

