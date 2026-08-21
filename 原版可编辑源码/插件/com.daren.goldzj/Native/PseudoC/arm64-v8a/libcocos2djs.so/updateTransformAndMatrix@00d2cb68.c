
/* dragonBones::Slot::updateTransformAndMatrix() */

void __thiscall dragonBones::Slot::updateTransformAndMatrix(Slot *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (this[0xfc] != (Slot)0x0) {
    fVar1 = *(float *)(this + 0x10c);
    fVar2 = *(float *)(this + 0x110);
    fVar3 = *(float *)(this + 0x114);
    fVar4 = *(float *)(this + 0x118);
    fVar5 = *(float *)(this + 0x11c);
    fVar6 = *(float *)(this + 0x120);
    lVar7 = *(long *)(this + 0x180);
    this[0xfc] = (Slot)0x0;
    *(float *)(this + 0x10) = fVar1;
    *(float *)(this + 0x14) = fVar2;
    *(float *)(this + 0x18) = fVar3;
    *(float *)(this + 0x1c) = fVar4;
    *(float *)(this + 0x20) = fVar5;
    *(float *)(this + 0x24) = fVar6;
    fVar12 = *(float *)(lVar7 + 0x24);
    fVar8 = (float)*(undefined8 *)(lVar7 + 0x10);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
    fVar10 = (float)*(undefined8 *)(lVar7 + 0x18);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
    *(float *)(this + 0x20) = fVar5 * fVar8 + fVar6 * fVar10 + *(float *)(lVar7 + 0x20);
    *(float *)(this + 0x24) = fVar5 * fVar9 + fVar6 * fVar11 + fVar12;
    *(ulong *)(this + 0x18) =
         CONCAT44(fVar9 * fVar3 + fVar11 * fVar4,fVar8 * fVar3 + fVar10 * fVar4);
    *(ulong *)(this + 0x10) =
         CONCAT44(fVar9 * fVar1 + fVar11 * fVar2,fVar8 * fVar1 + fVar10 * fVar2);
    this[0x70] = (Slot)0x1;
  }
  return;
}

