
/* dragonBones::BoneRotateTimelineState::_onArriveAtFrame() */

void __thiscall
dragonBones::BoneRotateTimelineState::_onArriveAtFrame(BoneRotateTimelineState *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* catch() { ... } // from try @ 00d786dc with catch @ 00d79a6c */
                    /* catch() { ... } // from try @ 00d786cc with catch @ 00d79a7c */
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
                    /* catch() { ... } // from try @ 00d786bc with catch @ 00d79a8c */
  if (*(long *)(this + 0x58) == 0) {
                    /* catch() { ... } // from try @ 00d78e34 with catch @ 00d79b20 */
    lVar5 = *(long *)(this + 0xc0);
                    /* catch() { ... } // from try @ 00d78e20 with catch @ 00d79b24 */
    *(undefined8 *)(lVar5 + 0x18) = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x30);
                    /* catch() { ... } // from try @ 00d786ac with catch @ 00d79a9c */
    lVar6 = *(long *)(this + 0x88);
    lVar5 = *(long *)(this + 0xc0);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
                    /* catch() { ... } // from try @ 00d786a0 with catch @ 00d79aac */
    uVar2 = uVar1 + iVar3 * 2;
    fVar7 = *(float *)(lVar6 + (ulong)uVar2 * 4);
    *(float *)(lVar5 + 0x1c) = fVar7;
                    /* catch() { ... } // from try @ 00d79518 with catch @ 00d79abc */
    fVar8 = *(float *)(lVar6 + (ulong)(uVar2 + 1) * 4);
                    /* catch() { ... } // from try @ 00d79574 with catch @ 00d79ac0 */
    *(float *)(lVar5 + 0x18) = fVar8;
                    /* catch() { ... } // from try @ 00d7928c with catch @ 00d79ac4 */
                    /* catch() { ... } // from try @ 00d79058 with catch @ 00d79ac8 */
                    /* catch() { ... } // from try @ 00d78dec with catch @ 00d79acc */
    if (*(int *)(this + 0x1c) == 2) {
                    /* catch() { ... } // from try @ 00d789c8 with catch @ 00d79ae0 */
                    /* catch() { ... } // from try @ 00d789b4 with catch @ 00d79ae4 */
      if (iVar3 == *(int *)(this + 0x28) + -1) {
                    /* catch() { ... } // from try @ 00d792ec with catch @ 00d79ae8 */
                    /* catch() { ... } // from try @ 00d792d8 with catch @ 00d79aec */
                    /* catch() { ... } // from try @ 00d7907c with catch @ 00d79af0 */
                    /* catch() { ... } // from try @ 00d792b0 with catch @ 00d79af4 */
        uVar4 = uVar1 + 1;
                    /* catch() { ... } // from try @ 00d78b8c with catch @ 00d79af8 */
        fVar7 = fmodf((*(float *)(lVar6 + (ulong)uVar1 * 4) - fVar7) + 3.1415927,6.2831855);
                    /* catch() { ... } // from try @ 00d794b0 with catch @ 00d79b0c */
        fVar9 = -3.1415927;
        if (fVar7 <= 0.0) {
          fVar9 = 3.1415927;
        }
        fVar7 = fVar7 + fVar9;
      }
      else {
                    /* catch() { ... } // from try @ 00d79028 with catch @ 00d79b38 */
                    /* catch() { ... } // from try @ 00d7924c with catch @ 00d79b3c */
        uVar4 = uVar2 + 3;
        fVar7 = *(float *)(lVar6 + (ulong)(uVar2 + 2) * 4) - fVar7;
      }
      *(float *)(lVar5 + 0x34) = fVar7;
      fVar8 = *(float *)(lVar6 + (ulong)uVar4 * 4) - fVar8;
      goto LAB_00d79b50;
    }
  }
                    /* catch() { ... } // from try @ 00d7903c with catch @ 00d79b28 */
  fVar8 = 0.0;
  *(undefined4 *)(lVar5 + 0x34) = 0;
LAB_00d79b50:
                    /* catch() { ... } // from try @ 00d78ff4 with catch @ 00d79b50 */
  *(float *)(lVar5 + 0x30) = fVar8;
  return;
}

