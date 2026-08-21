
/* dragonBones::BoneAllTimelineState::fadeOut() */

void __thiscall dragonBones::BoneAllTimelineState::fadeOut(BoneAllTimelineState *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0xc0);
  fVar2 = fmodf(*(float *)(lVar1 + 0x4c) + 3.1415927,6.2831855);
  fVar3 = -3.1415927;
  if (fVar2 <= 0.0) {
    fVar3 = 3.1415927;
  }
  *(float *)(lVar1 + 0x4c) = fVar2 + fVar3;
  fVar2 = fmodf(*(float *)(lVar1 + 0x48) + 3.1415927,6.2831855);
  fVar3 = -3.1415927;
  if (fVar2 <= 0.0) {
    fVar3 = 3.1415927;
  }
  *(float *)(lVar1 + 0x48) = fVar2 + fVar3;
  return;
}

