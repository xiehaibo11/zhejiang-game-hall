
/* dragonBones::TimelineState::_setCurrentTime(float) */

undefined8 __thiscall dragonBones::TimelineState::_setCurrentTime(TimelineState *this,float param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float __y;
  float fVar9;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = *(uint *)(this + 0x14);
  lVar4 = *(long *)(this + 0x70);
  fVar9 = *(float *)(this + 0x18);
  if (lVar4 == 0) {
    fVar8 = *(float *)(this + 0x40);
LAB_00d238c8:
    lVar4 = *(long *)(this + 0x68);
    __y = *(float *)(this + 0x3c);
    fVar8 = fVar8 * param_1;
    uVar5 = *(uint *)(lVar4 + 0x14);
    if (*(float *)(this + 0x44) != 0.0) {
      fVar8 = fVar8 + *(float *)(this + 0x44) * *(float *)(*(long *)(this + 0x50) + 0x24);
    }
    iVar6 = iVar1;
    if ((uVar5 == 0) || ((fVar8 < __y * (float)uVar5 && (-(__y * (float)uVar5) < fVar8)))) {
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else if (*(int *)(lVar4 + 0x60) == 3) {
        iVar6 = 0;
        *(undefined4 *)(this + 0x10) = 0;
      }
      if (0.0 <= fVar8) {
        uVar5 = (uint)(fVar8 / __y);
        *(uint *)(this + 0x14) = uVar5;
        fVar7 = fmodf(fVar8,__y);
      }
      else {
        uVar5 = (uint)(-fVar8 / __y);
        *(uint *)(this + 0x14) = uVar5;
        fVar7 = fmodf(-fVar8,__y);
        fVar7 = __y - fVar7;
      }
    }
    else {
      if ((iVar1 < 1) && (*(int *)(lVar4 + 0x60) == 3)) {
        *(undefined4 *)(this + 0x10) = 1;
        iVar6 = 1;
      }
      fVar7 = 0.0;
      *(uint *)(this + 0x14) = uVar5;
      if (0.0 <= fVar8) {
        fVar7 = __y + 1e-06;
      }
    }
    fVar7 = *(float *)(this + 0x38) + fVar7;
    *(float *)(this + 0x18) = fVar7;
  }
  else {
    if (*(uint *)(this + 0x28) < 2) {
      uVar5 = 1;
      iVar6 = -1;
      if (-1 < *(int *)(lVar4 + 0x10)) {
        iVar6 = 1;
      }
      *(int *)(this + 0x10) = iVar6;
    }
    else {
      fVar8 = *(float *)(this + 0x40);
      if ((fVar8 != 1.0) || (fVar8 = 1.0, *(float *)(this + 0x44) != 0.0)) goto LAB_00d238c8;
      iVar6 = *(int *)(lVar4 + 0x10);
      *(int *)(this + 0x10) = iVar6;
      uVar5 = *(uint *)(lVar4 + 0x14);
    }
    *(uint *)(this + 0x14) = uVar5;
    fVar7 = *(float *)(lVar4 + 0x18);
    *(float *)(this + 0x18) = fVar7;
  }
  if ((uVar5 == uVar2) && (fVar7 == fVar9)) {
    uVar3 = 0;
  }
  else {
    if ((iVar6 != iVar1 && iVar1 < 0) || (uVar5 != uVar2 && iVar6 < 1)) {
      *(undefined4 *)(this + 0x30) = 0xffffffff;
    }
    uVar3 = 1;
  }
  return uVar3;
}

