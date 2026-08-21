
/* cocos2d::GL::blendFunc(unsigned int, unsigned int) */

void cocos2d::GL::blendFunc(uint param_1,uint param_2)

{
  if ((DAT_0177eb64 == param_1) && (DAT_0177eb68 == param_2)) {
    return;
  }
  DAT_0177eb64 = param_1;
  DAT_0177eb68 = param_2;
  FUN_00ff6680();
  return;
}

