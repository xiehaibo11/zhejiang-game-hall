
/* dragonBones::IKConstraintTimelineState::_onArriveAtFrame() */

void __thiscall
dragonBones::IKConstraintTimelineState::_onArriveAtFrame(IKConstraintTimelineState *this)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  
                    /* try { // try from 00d7aba4 to 00e7abd3 has its CatchHandler @ 00d7b834 */
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  plVar5 = *(long **)(this + 0xb8);
  if (*(long *)(this + 0x58) == 0) {
    lVar6 = plVar5[2];
    *(undefined4 *)(this + 0xc0) = *(undefined4 *)(lVar6 + 0x4c);
    *(undefined4 *)(this + 0xc4) = 0;
    uVar4 = *(undefined1 *)(lVar6 + 0x49);
  }
  else {
    lVar6 = *(long *)(this + 0x80);
    iVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x10);
    uVar2 = iVar1 + *(int *)(this + 0x30) * 2;
                    /* try { // try from 00d7abe4 to 00e7abf7 has its CatchHandler @ 00d7b45c */
    uVar4 = *(short *)(lVar6 + (ulong)uVar2 * 2) != 0;
                    /* try { // try from 00d7abfc to 00e7ac23 has its CatchHandler @ 00d7b4e4 */
    fVar7 = (float)(int)*(short *)(lVar6 + (ulong)(uVar2 + 1) * 2) * 0.01;
    fVar3 = 0.0;
    *(float *)(this + 0xc0) = fVar7;
    if (*(int *)(this + 0x1c) == 2) {
      if (*(int *)(this + 0x30) != *(int *)(this + 0x28) + -1) {
        iVar1 = uVar2 + 2;
      }
                    /* try { // try from 00d7ac34 to 00e7ac73 has its CatchHandler @ 00d7b634 */
      fVar3 = (float)(int)*(short *)(lVar6 + (ulong)(iVar1 + 1) * 2) * 0.01 - fVar7;
    }
    *(float *)(this + 0xc4) = fVar3;
  }
  *(undefined1 *)(plVar5 + 7) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00d7ac74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))();
  return;
}

