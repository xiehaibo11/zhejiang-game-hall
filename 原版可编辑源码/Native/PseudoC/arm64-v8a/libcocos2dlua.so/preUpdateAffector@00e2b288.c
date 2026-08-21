
/* cocos2d::PURandomiser::preUpdateAffector(float) */

void __thiscall cocos2d::PURandomiser::preUpdateAffector(PURandomiser *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x560))();
  if (0 < iVar1) {
    fVar2 = *(float *)(this + 0xb8) + param_1;
    *(float *)(this + 0xb8) = fVar2;
    if (*(float *)(this + 0xbc) < fVar2) {
      *(float *)(this + 0xb8) = fVar2 - *(float *)(this + 0xbc);
      this[0xc1] = (PURandomiser)0x1;
    }
  }
  return;
}

