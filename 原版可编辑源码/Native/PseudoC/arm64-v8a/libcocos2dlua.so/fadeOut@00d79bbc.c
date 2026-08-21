
/* dragonBones::BoneRotateTimelineState::fadeOut() */

void __thiscall dragonBones::BoneRotateTimelineState::fadeOut(BoneRotateTimelineState *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 00d79610 with catch @ 00d79bc0 */
                    /* catch() { ... } // from try @ 00d78c6c with catch @ 00d79bd0 */
                    /* catch() { ... } // from try @ 00d78c4c with catch @ 00d79bd4 */
  lVar1 = *(long *)(this + 0xc0);
                    /* catch() { ... } // from try @ 00d78944 with catch @ 00d79bd8 */
                    /* catch() { ... } // from try @ 00d7877c with catch @ 00d79bdc */
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

