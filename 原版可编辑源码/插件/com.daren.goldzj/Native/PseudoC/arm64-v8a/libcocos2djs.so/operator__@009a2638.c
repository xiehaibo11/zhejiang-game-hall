
/* cocos2d::Color4F::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4B const&) const */

bool __thiscall cocos2d::Color4F::operator==(Color4F *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  if (*(float *)this != fVar1 / 255.0) {
    return false;
  }
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  if (*(float *)(this + 4) == fVar1 / 255.0) {
    fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
    if (*(float *)(this + 8) == fVar1 / 255.0) {
      fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
      return *(float *)(this + 0xc) == fVar1 / 255.0;
    }
    return false;
  }
  return false;
}

