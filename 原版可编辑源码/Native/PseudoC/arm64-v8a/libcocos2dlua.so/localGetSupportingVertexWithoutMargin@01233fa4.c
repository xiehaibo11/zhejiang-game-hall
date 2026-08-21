
/* btTriangleShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

undefined4 __thiscall
btTriangleShape::localGetSupportingVertexWithoutMargin(btTriangleShape *this,btVector3 *param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar3 = fVar2 * *(float *)(this + 0x48) + fVar5 * *(float *)(this + 0x4c) +
          fVar7 * *(float *)(this + 0x50);
  fVar6 = fVar2 * *(float *)(this + 0x58) + fVar5 * *(float *)(this + 0x5c) +
          fVar7 * *(float *)(this + 0x60);
  fVar4 = fVar6;
  if (fVar3 >= fVar6) {
    fVar4 = fVar3;
  }
  uVar1 = 2;
  if (fVar2 * *(float *)(this + 0x68) + fVar5 * *(float *)(this + 0x6c) +
      fVar7 * *(float *)(this + 0x70) <= fVar4) {
    uVar1 = (ulong)(fVar3 < fVar6);
  }
  return *(undefined4 *)(this + 0x48 + uVar1 * 0x10);
}

