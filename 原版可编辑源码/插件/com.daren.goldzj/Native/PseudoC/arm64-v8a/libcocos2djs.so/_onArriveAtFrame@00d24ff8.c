
/* dragonBones::BoneScaleTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::BoneScaleTimelineState::_onArriveAtFrame(BoneScaleTimelineState *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    lVar5 = *(long *)(this + 0xc0);
    uVar8 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
  }
  else {
    iVar3 = *(int *)(this + 0x30);
    lVar6 = *(long *)(this + 0x88);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
    uVar2 = uVar1 + iVar3 * 2;
    lVar5 = *(long *)(this + 0xc0);
    fVar4 = *(float *)(lVar6 + (ulong)uVar2 * 4);
    *(float *)(lVar5 + 0x20) = fVar4;
    fVar7 = *(float *)(lVar6 + (ulong)(uVar2 + 1) * 4);
    *(float *)(lVar5 + 0x24) = fVar7;
    if (*(int *)(this + 0x1c) == 2) {
      if (iVar3 != *(int *)(this + 0x28) + -1) {
        uVar1 = uVar2 + 2;
      }
      *(float *)(lVar5 + 0x38) = *(float *)(lVar6 + (ulong)uVar1 * 4) - fVar4;
      fVar7 = *(float *)(lVar6 + (ulong)(uVar1 + 1) * 4) - fVar7;
      goto LAB_00d250a0;
    }
  }
  fVar7 = 0.0;
  *(undefined4 *)(lVar5 + 0x38) = 0;
LAB_00d250a0:
  *(float *)(lVar5 + 0x3c) = fVar7;
  return;
}

