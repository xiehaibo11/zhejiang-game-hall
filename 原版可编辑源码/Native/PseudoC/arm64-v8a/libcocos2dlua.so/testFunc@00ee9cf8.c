
/* cocos2d::FadeOutBLTiles::testFunc(cocos2d::Size const&, float) */

undefined1  [16] __thiscall
cocos2d::FadeOutBLTiles::testFunc(FadeOutBLTiles *this,Size *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  if (*(float *)param_1 + *(float *)(param_1 + 4) == 0.0) {
    return ZEXT816(0x3f800000);
  }
  auVar1._0_4_ = powf(((1.0 - param_2) * *(float *)(this + 0x58) +
                      (1.0 - param_2) * *(float *)(this + 0x5c)) /
                      (*(float *)param_1 + *(float *)(param_1 + 4)),6.0);
  auVar1._4_4_ = extraout_var;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}

