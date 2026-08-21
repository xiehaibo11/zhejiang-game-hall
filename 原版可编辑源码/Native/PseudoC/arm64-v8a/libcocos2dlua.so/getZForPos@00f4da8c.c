
/* cocos2d::TMXLayer::getZForPos(cocos2d::Vec2 const&) const */

long __thiscall cocos2d::TMXLayer::getZForPos(TMXLayer *this,Vec2 *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(this + 0x404) == 0) && (*(int *)(this + 0x400) == 1)) {
    fVar3 = *(float *)param_1;
    uVar2 = (uint)fVar3;
    uVar1 = uVar2;
    if ((int)uVar2 < 0) {
      uVar1 = uVar2 + 1;
    }
    if (*(int *)(this + 0x408) == 0) {
      if (uVar2 == (uVar1 & 0xfffffffe)) goto LAB_00f4db20;
      fVar4 = *(float *)(this + 0x3dc);
      fVar5 = *(float *)(param_1 + 4);
    }
    else {
      if ((int)uVar2 % 2 == 1) {
LAB_00f4db20:
        fVar4 = fVar3 * 0.5;
        fVar3 = *(float *)(param_1 + 4);
        goto LAB_00f4dae8;
      }
      fVar4 = *(float *)(this + 0x3dc);
      fVar5 = *(float *)(param_1 + 4);
    }
    fVar3 = fVar3 * 0.5 + (float)(int)(fVar4 * 0.5);
    fVar4 = fVar4 * fVar5;
  }
  else {
    fVar4 = *(float *)param_1;
    fVar3 = *(float *)(param_1 + 4);
LAB_00f4dae8:
    fVar3 = fVar3 * *(float *)(this + 0x3dc);
  }
  return (long)(fVar4 + fVar3);
}

