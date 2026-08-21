
/* cocos2d::Color4F::Color4F(cocos2d::Color3B const&, float) */

void __thiscall cocos2d::Color4F::Color4F(Color4F *this,Color3B *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)this = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 4) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 8) = fVar1 / 255.0;
  *(float *)(this + 0xc) = param_2;
  return;
}

