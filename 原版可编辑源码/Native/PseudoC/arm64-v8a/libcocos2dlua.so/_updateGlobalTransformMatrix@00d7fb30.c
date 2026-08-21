
/* dragonBones::Slot::_updateGlobalTransformMatrix(bool) */

void __thiscall dragonBones::Slot::_updateGlobalTransformMatrix(Slot *this,bool param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *(float *)(this + 0x10c);
  fVar8 = *(float *)(this + 0x110);
  fVar3 = *(float *)(this + 0x114);
  fVar4 = *(float *)(this + 0x118);
  fVar7 = *(float *)(this + 0x11c);
  fVar5 = *(float *)(this + 0x120);
  lVar1 = *(long *)(this + 0x180);
  *(float *)(this + 0x10) = fVar10;
  *(float *)(this + 0x14) = fVar8;
  *(float *)(this + 0x18) = fVar3;
  *(float *)(this + 0x1c) = fVar4;
  *(float *)(this + 0x20) = fVar7;
  *(float *)(this + 0x24) = fVar5;
  fVar9 = (float)*(undefined8 *)(lVar1 + 0x10);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar1 + 0x18);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
  fVar2 = fVar9 * fVar7 + fVar12 * fVar5 + (float)*(undefined8 *)(lVar1 + 0x20);
  fVar5 = fVar6 * fVar7 + fVar11 * fVar5 + (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
  fVar7 = fVar9 * fVar10 + fVar12 * fVar8;
  fVar8 = fVar6 * fVar10 + fVar11 * fVar8;
  fVar9 = fVar9 * fVar3 + fVar12 * fVar4;
  fVar10 = fVar6 * fVar3 + fVar11 * fVar4;
  *(ulong *)(this + 0x18) = CONCAT44(fVar10,fVar9);
  *(ulong *)(this + 0x10) = CONCAT44(fVar8,fVar7);
  *(ulong *)(this + 0x20) = CONCAT44(fVar5,fVar2);
  if (param_1) {
    fVar12 = *(float *)(this + 0x38);
    fVar6 = *(float *)(this + 0x3c);
    *(ulong *)(this + 0x28) = CONCAT44(fVar5,fVar2);
    fVar3 = atanf(fVar8 / fVar7);
    *(float *)(this + 0x34) = fVar3;
    fVar9 = -fVar9;
    fVar4 = atanf(fVar9 / fVar10);
    if ((fVar3 <= -0.7853982) || (0.7853982 <= fVar3)) {
      fVar7 = sinf(fVar3);
      fVar7 = fVar8 / fVar7;
    }
    else {
      fVar8 = cosf(fVar3);
      fVar7 = fVar7 / fVar8;
    }
    *(float *)(this + 0x38) = fVar7;
    if ((fVar4 <= -0.7853982) || (0.7853982 <= fVar4)) {
      fVar10 = sinf(fVar4);
      fVar10 = fVar9 / fVar10;
    }
    else {
      fVar8 = cosf(fVar4);
      fVar10 = fVar10 / fVar8;
    }
    *(float *)(this + 0x3c) = fVar10;
    if ((0.0 <= fVar12) && (fVar7 < 0.0)) {
      fVar3 = fVar3 - 3.1415927;
      *(float *)(this + 0x34) = fVar3;
      *(float *)(this + 0x38) = -fVar7;
    }
    if ((0.0 <= fVar6) && (fVar10 < 0.0)) {
      *(float *)(this + 0x3c) = -fVar10;
      fVar4 = fVar4 - 3.1415927;
    }
    *(float *)(this + 0x30) = fVar4 - fVar3;
  }
  else {
    this[0x70] = (Slot)0x1;
  }
  return;
}

