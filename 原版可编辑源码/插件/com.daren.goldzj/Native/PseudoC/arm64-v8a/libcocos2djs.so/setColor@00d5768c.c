
/* dragonBones::CCArmatureCacheDisplay::setColor(cocos2d::Color4B&) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::setColor(CCArmatureCacheDisplay *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)(this + 0x70) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 0x74) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 0x78) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0x7c) = fVar1 / 255.0;
  return;
}

