
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
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    lVar5 = *(long *)(this + 0xc0);
    *(undefined8 *)(lVar5 + 0x18) = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x30);
    lVar6 = *(long *)(this + 0x88);
    lVar5 = *(long *)(this + 0xc0);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
    uVar2 = uVar1 + iVar3 * 2;
    fVar7 = *(float *)(lVar6 + (ulong)uVar2 * 4);
    *(float *)(lVar5 + 0x1c) = fVar7;
    fVar8 = *(float *)(lVar6 + (ulong)(uVar2 + 1) * 4);
    *(float *)(lVar5 + 0x18) = fVar8;
    if (*(int *)(this + 0x1c) == 2) {
      if (iVar3 == *(int *)(this + 0x28) + -1) {
        uVar4 = uVar1 + 1;
        fVar7 = fmodf((*(float *)(lVar6 + (ulong)uVar1 * 4) - fVar7) + 3.1415927,6.2831855);
        fVar9 = -3.1415927;
        if (fVar7 <= 0.0) {
          fVar9 = 3.1415927;
        }
        fVar7 = fVar7 + fVar9;
      }
      else {
        uVar4 = uVar2 + 3;
        fVar7 = *(float *)(lVar6 + (ulong)(uVar2 + 2) * 4) - fVar7;
      }
      *(float *)(lVar5 + 0x34) = fVar7;
      fVar8 = *(float *)(lVar6 + (ulong)uVar4 * 4) - fVar8;
      goto LAB_00d24f0c;
    }
  }
  fVar8 = 0.0;
  *(undefined4 *)(lVar5 + 0x34) = 0;
LAB_00d24f0c:
  *(float *)(lVar5 + 0x30) = fVar8;
  return;
}

