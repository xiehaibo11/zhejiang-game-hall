
/* dragonBones::TweenTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::TweenTimelineState::_onArriveAtFrame(TweenTimelineState *this)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
                    /* try { // try from 00d788b0 to 00e788bb has its CatchHandler @ 00d79a28 */
  if ((*(uint *)(this + 0x28) < 2) ||
     (((*(int *)(this + 0x30) == *(uint *)(this + 0x28) - 1 &&
       (*(int *)(*(AnimationState **)(this + 0x68) + 0x14) != 0)) &&
      (uVar2 = AnimationState::getCurrentPlayTimes(*(AnimationState **)(this + 0x68)),
      *(int *)(*(long *)(this + 0x68) + 0x14) - 1U <= uVar2)))) {
    *(undefined4 *)(this + 0x1c) = 1;
  }
  else {
    uVar2 = *(uint *)(this + 0x2c);
    lVar3 = *(long *)(this + 0x78);
    uVar1 = *(ushort *)(lVar3 + (ulong)(uVar2 + 1) * 2);
    uVar4 = 1;
    if (uVar1 != 0) {
      uVar4 = 2;
    }
    *(int *)(this + 0xa0) = (int)(short)uVar1;
    *(undefined4 *)(this + 0x1c) = uVar4;
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(int *)(this + 0xa4) = (int)*(short *)(lVar3 + (ulong)(uVar2 + 2) * 2);
      }
      else {
        *(float *)(this + 0xb4) = (float)(int)*(short *)(lVar3 + (ulong)(uVar2 + 2) * 2) * 0.01;
      }
    }
                    /* try { // try from 00d78944 to 00e78953 has its CatchHandler @ 00d79bd8 */
    fVar5 = *(float *)(this + 0x34) * (float)(int)*(short *)(lVar3 + (ulong)uVar2 * 2);
    *(float *)(this + 0xa8) = fVar5;
    if (*(int *)(this + 0x30) == *(int *)(this + 0x28) + -1) {
      fVar5 = *(float *)(*(long *)(this + 0x50) + 0x24) - fVar5;
    }
    else {
      fVar5 = *(float *)(this + 0x34) *
              (float)(int)*(short *)(lVar3 + (ulong)(*(int *)(*(long *)(this + 0x50) + 0x18) +
                                                    (uint)*(ushort *)
                                                           (*(long *)(this + 0x90) +
                                                           (ulong)(*(int *)(this + 0x30) +
                                                                   *(int *)(*(long *)(this + 0x58) +
                                                                           0x14) + 6) * 2)) * 2) -
              fVar5;
      if (fVar5 <= 0.0) {
        *(undefined4 *)(this + 0xac) = 0;
        return;
      }
    }
                    /* try { // try from 00d789b4 to 00e789c7 has its CatchHandler @ 00d79ae4 */
    *(float *)(this + 0xac) = 1.0 / fVar5;
  }
                    /* try { // try from 00d789c8 to 00e789d7 has its CatchHandler @ 00d79ae0 */
  return;
}

