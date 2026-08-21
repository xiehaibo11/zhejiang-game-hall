
/* dragonBones::IKConstraintTimelineState::_onArriveAtFrame() */

void __thiscall
dragonBones::IKConstraintTimelineState::_onArriveAtFrame(IKConstraintTimelineState *this)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  plVar6 = *(long **)(this + 0xb8);
  if (*(long *)(this + 0x58) == 0) {
    lVar7 = plVar6[2];
    *(undefined4 *)(this + 0xc0) = *(undefined4 *)(lVar7 + 0x4c);
    *(undefined4 *)(this + 0xc4) = 0;
    uVar5 = *(undefined1 *)(lVar7 + 0x49);
  }
  else {
    lVar7 = *(long *)(this + 0x80);
    fVar4 = 0.0;
    iVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x10);
    uVar2 = iVar1 + *(int *)(this + 0x30) * 2;
    uVar5 = *(short *)(lVar7 + (ulong)uVar2 * 2) != 0;
    fVar3 = (float)(int)*(short *)(lVar7 + (ulong)(uVar2 + 1) * 2) * 0.01;
    *(float *)(this + 0xc0) = fVar3;
    if (*(int *)(this + 0x1c) == 2) {
      if (*(int *)(this + 0x30) != *(int *)(this + 0x28) + -1) {
        iVar1 = uVar2 + 2;
      }
      fVar4 = (float)(int)*(short *)(lVar7 + (ulong)(iVar1 + 1) * 2) * 0.01 - fVar3;
    }
    *(float *)(this + 0xc4) = fVar4;
  }
  *(undefined1 *)(plVar6 + 7) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00d26034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x30))();
  return;
}

