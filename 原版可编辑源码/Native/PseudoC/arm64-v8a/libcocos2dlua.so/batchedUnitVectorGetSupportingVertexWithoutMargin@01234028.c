
/* btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btTriangleShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  btVector3 *pbVar3;
  btTriangleShape *pbVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < param_3) {
    uVar2 = (ulong)(uint)param_3;
    pbVar3 = param_1 + 4;
    do {
      fVar5 = *(float *)(pbVar3 + -4);
      fVar9 = *(float *)pbVar3;
      pbVar4 = this + 0x48;
      fVar11 = *(float *)(pbVar3 + 4);
      uVar2 = uVar2 - 1;
      pbVar3 = pbVar3 + 0x10;
      fVar7 = fVar5 * *(float *)pbVar4 + fVar9 * *(float *)(this + 0x4c) +
              fVar11 * *(float *)(this + 0x50);
      fVar10 = fVar5 * *(float *)(this + 0x58) + fVar9 * *(float *)(this + 0x5c) +
               fVar11 * *(float *)(this + 0x60);
      fVar8 = fVar10;
      if (fVar7 >= fVar10) {
        fVar8 = fVar7;
      }
      uVar1 = 2;
      if (fVar5 * *(float *)(this + 0x68) + fVar9 * *(float *)(this + 0x6c) +
          fVar11 * *(float *)(this + 0x70) <= fVar8) {
        uVar1 = (ulong)(fVar7 < fVar10);
      }
      uVar6 = *(undefined8 *)(pbVar4 + uVar1 * 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(pbVar4 + uVar1 * 0x10 + 8);
      *(undefined8 *)param_2 = uVar6;
      param_2 = param_2 + 0x10;
    } while (uVar2 != 0);
  }
  return;
}

