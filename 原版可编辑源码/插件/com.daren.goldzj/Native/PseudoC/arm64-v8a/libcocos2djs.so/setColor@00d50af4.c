
/* dragonBones::CCArmatureDisplay::setColor(cocos2d::Color4B&) */

void __thiscall dragonBones::CCArmatureDisplay::setColor(CCArmatureDisplay *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)(this + 0x38) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 0x3c) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 0x40) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0x44) = fVar1 / 255.0;
  return;
}

