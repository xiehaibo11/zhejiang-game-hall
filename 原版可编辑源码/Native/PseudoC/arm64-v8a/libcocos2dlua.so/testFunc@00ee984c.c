
/* cocos2d::FadeOutTRTiles::testFunc(cocos2d::Size const&, float) */

undefined1  [16] __thiscall
cocos2d::FadeOutTRTiles::testFunc(FadeOutTRTiles *this,Size *param_1,float param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  fVar1 = *(float *)(this + 0x58) * param_2 + *(float *)(this + 0x5c) * param_2;
  if (fVar1 == 0.0) {
    return ZEXT816(0x3f800000);
  }
                    /* catch() { ... } // from try @ 00ee9814 with catch @ 00ee987c */
  auVar2._0_4_ = powf((*(float *)param_1 + *(float *)(param_1 + 4)) / fVar1,6.0);
  auVar2._4_4_ = extraout_var;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}

