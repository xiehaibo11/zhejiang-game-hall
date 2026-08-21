
/* btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCylinderShapeZ *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  btVector3 *pbVar2;
  btVector3 *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_3) {
    uVar1 = (ulong)(uint)param_3;
    pbVar2 = param_2 + 4;
    pbVar3 = param_1 + 4;
    do {
      fVar6 = *(float *)(this + 0x28);
      fVar7 = *(float *)(this + 0x30);
      fVar5 = *(float *)(pbVar3 + -4) * *(float *)(pbVar3 + -4) +
              *(float *)pbVar3 * *(float *)pbVar3;
      fVar4 = SQRT(fVar5);
      if (NAN(fVar4)) {
        fVar4 = sqrtf(fVar5);
        if (fVar4 != 0.0) goto LAB_012285b4;
LAB_012285e8:
        fVar5 = -fVar7;
        if (0.0 <= *(float *)(pbVar3 + 4)) {
          fVar5 = fVar7;
        }
        fVar4 = 0.0;
      }
      else {
        if (fVar4 == 0.0) goto LAB_012285e8;
LAB_012285b4:
        fVar4 = fVar6 / fVar4;
        fVar6 = fVar4 * *(float *)(pbVar3 + -4);
        fVar5 = -fVar7;
        if (0.0 <= *(float *)(pbVar3 + 4)) {
          fVar5 = fVar7;
        }
        fVar4 = fVar4 * *(float *)pbVar3;
      }
      *(float *)(pbVar2 + -4) = fVar6;
      *(float *)pbVar2 = fVar4;
      *(float *)(pbVar2 + 4) = fVar5;
      pbVar2 = pbVar2 + 0x10;
      uVar1 = uVar1 - 1;
      pbVar3 = pbVar3 + 0x10;
    } while (uVar1 != 0);
  }
  return;
}

