
/* dragonBones::BoneAllTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::BoneAllTimelineState::_onArriveAtFrame(BoneAllTimelineState *this)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    lVar8 = *(long *)(this + 0xc0);
    uVar11 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x30);
    lVar8 = *(long *)(this + 0x88);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
    uVar7 = uVar1 + iVar2 * 6;
    fVar10 = *(float *)(*(long *)(*(long *)(this + 0x60) + 0x20) + 0x1c);
    lVar9 = *(long *)(this + 0xc0);
    fVar13 = fVar10 * *(float *)(lVar8 + (ulong)uVar7 * 4);
    *(float *)(lVar9 + 0x10) = fVar13;
    fVar12 = fVar10 * *(float *)(lVar8 + (ulong)(uVar7 + 1) * 4);
    *(float *)(lVar9 + 0x14) = fVar12;
    fVar3 = *(float *)(lVar8 + (ulong)(uVar7 + 2) * 4);
    *(float *)(lVar9 + 0x1c) = fVar3;
    fVar4 = *(float *)(lVar8 + (ulong)(uVar7 + 3) * 4);
    *(float *)(lVar9 + 0x18) = fVar4;
    fVar5 = *(float *)(lVar8 + (ulong)(uVar7 + 4) * 4);
    *(float *)(lVar9 + 0x20) = fVar5;
    fVar6 = *(float *)(lVar8 + (ulong)(uVar7 + 5) * 4);
    *(float *)(lVar9 + 0x24) = fVar6;
    if (*(int *)(this + 0x1c) == 2) {
      if (iVar2 != *(int *)(this + 0x28) + -1) {
        uVar1 = uVar7 + 6;
      }
      *(float *)(lVar9 + 0x28) = fVar10 * *(float *)(lVar8 + (ulong)uVar1 * 4) - fVar13;
      *(float *)(lVar9 + 0x2c) = fVar10 * *(float *)(lVar8 + (ulong)(uVar1 + 1) * 4) - fVar12;
      *(float *)(lVar9 + 0x34) = *(float *)(lVar8 + (ulong)(uVar1 + 2) * 4) - fVar3;
      *(float *)(lVar9 + 0x30) = *(float *)(lVar8 + (ulong)(uVar1 + 3) * 4) - fVar4;
      *(float *)(lVar9 + 0x38) = *(float *)(lVar8 + (ulong)(uVar1 + 4) * 4) - fVar5;
      *(float *)(lVar9 + 0x3c) = *(float *)(lVar8 + (ulong)(uVar1 + 5) * 4) - fVar6;
    }
    else {
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
    }
  }
  return;
}

