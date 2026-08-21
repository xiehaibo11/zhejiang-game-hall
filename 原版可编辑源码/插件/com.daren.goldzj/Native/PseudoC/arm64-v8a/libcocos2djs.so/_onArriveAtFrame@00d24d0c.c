
/* dragonBones::BoneTranslateTimelineState::_onArriveAtFrame() */

void __thiscall
dragonBones::BoneTranslateTimelineState::_onArriveAtFrame(BoneTranslateTimelineState *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    lVar4 = *(long *)(this + 0xc0);
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x30);
    lVar5 = *(long *)(this + 0x88);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
    uVar2 = uVar1 + iVar3 * 2;
    fVar6 = *(float *)(*(long *)(*(long *)(this + 0x60) + 0x20) + 0x1c);
    lVar4 = *(long *)(this + 0xc0);
    fVar8 = fVar6 * *(float *)(lVar5 + (ulong)uVar2 * 4);
    *(float *)(lVar4 + 0x10) = fVar8;
    fVar7 = fVar6 * *(float *)(lVar5 + (ulong)(uVar2 + 1) * 4);
    *(float *)(lVar4 + 0x14) = fVar7;
    if (*(int *)(this + 0x1c) == 2) {
      if (iVar3 != *(int *)(this + 0x28) + -1) {
        uVar1 = uVar2 + 2;
      }
      *(float *)(lVar4 + 0x28) = fVar6 * *(float *)(lVar5 + (ulong)uVar1 * 4) - fVar8;
      fVar7 = fVar6 * *(float *)(lVar5 + (ulong)(uVar1 + 1) * 4) - fVar7;
      goto LAB_00d24dc4;
    }
  }
  fVar7 = 0.0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
LAB_00d24dc4:
  *(float *)(lVar4 + 0x2c) = fVar7;
  return;
}

