
/* cocos2d::LayerRadialGradient::convertColor4B24F(cocos2d::Color4F&, cocos2d::Color4B const&) */

void __thiscall
cocos2d::LayerRadialGradient::convertColor4B24F
          (LayerRadialGradient *this,Color4F *param_1,Color4B *param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_2);
  *(float *)param_1 = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_2[1]);
  *(float *)(param_1 + 4) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_2[2]);
  *(float *)(param_1 + 8) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_2[3]);
  *(float *)(param_1 + 0xc) = fVar1 / 255.0;
  return;
}

