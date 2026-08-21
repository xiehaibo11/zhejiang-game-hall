
/* dragonBones::TweenTimelineState::_onUpdateFrame() */

void __thiscall dragonBones::TweenTimelineState::_onUpdateFrame(TweenTimelineState *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 00d789ec to 00e78a07 has its CatchHandler @ 00d79c9c */
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0xb0) = 0;
    return;
  }
  iVar1 = *(int *)(this + 0xa0);
  fVar6 = (*(float *)(this + 0x18) - *(float *)(this + 0xa8)) * *(float *)(this + 0xac);
                    /* try { // try from 00d78a0c to 00e78a1b has its CatchHandler @ 00d79ca4 */
  *(float *)(this + 0xb0) = fVar6;
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 != 2) {
    fVar5 = *(float *)(this + 0xb4);
    if (iVar1 == 5) {
      fVar4 = cosf(fVar6 * 3.1415927);
                    /* try { // try from 00d78ad0 to 00e78b5b has its CatchHandler @ 00d79b78 */
      fVar4 = (1.0 - fVar4) * 0.5;
    }
    else if (iVar1 == 4) {
      fVar4 = 1.0 - (1.0 - fVar6) * (1.0 - fVar6);
    }
    else {
      fVar4 = fVar6;
      if (iVar1 == 3) {
        fVar4 = fVar6 * fVar6;
      }
    }
    fVar5 = fVar6 + fVar5 * (fVar4 - fVar6);
    goto LAB_00d78af8;
  }
  fVar5 = 0.0;
  if ((fVar6 <= 0.0) || (fVar5 = 1.0, 1.0 <= fVar6)) goto LAB_00d78af8;
  uVar2 = *(uint *)(this + 0xa4);
  fVar6 = fVar6 * (float)(uVar2 + 1);
  uVar3 = (uint)fVar6;
  if (uVar3 == 0) {
    fVar5 = 0.0;
    fVar4 = 0.0;
    if (uVar2 == 0) goto LAB_00d78a74;
LAB_00d78b18:
    fVar5 = fVar4;
    fVar4 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                  (ulong)(*(int *)(this + 0x2c) + 3 + uVar3) * 2);
  }
  else {
    fVar5 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                  (ulong)((*(int *)(this + 0x2c) + 3 + uVar3) - 1) * 2);
    fVar4 = fVar5;
    if (uVar2 != uVar3) goto LAB_00d78b18;
LAB_00d78a74:
    fVar4 = 10000.0;
  }
  fVar5 = (fVar5 + (fVar6 - (float)uVar3) * (fVar4 - fVar5)) * 0.0001;
LAB_00d78af8:
  *(float *)(this + 0xb0) = fVar5;
  return;
}

