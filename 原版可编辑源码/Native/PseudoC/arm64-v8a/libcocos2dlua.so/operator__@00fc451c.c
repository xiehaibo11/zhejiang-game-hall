
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F const&) const */

undefined8 __thiscall cocos2d::Color3B::operator==(Color3B *this,Color4F *param_1)

{
  float fVar1;
  
  if ((((*(float *)(param_1 + 0xc) == 1.0) &&
       (fVar1 = (float)NEON_ucvtf((uint)(byte)*this), fVar1 / 255.0 == *(float *)param_1)) &&
      (fVar1 = (float)NEON_ucvtf((uint)(byte)this[1]), fVar1 / 255.0 == *(float *)(param_1 + 4))) &&
     (fVar1 = (float)NEON_ucvtf((uint)(byte)this[2]), fVar1 / 255.0 == *(float *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

