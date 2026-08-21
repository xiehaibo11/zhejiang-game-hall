
/* btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*,
   btVector3*, int) const */

void __thiscall
btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btConvexHullShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  btVector3 *pbVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  if (param_3 < 1) {
    return;
  }
  uVar3 = (ulong)(uint)param_3;
  if (param_3 == 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = uVar3 - (param_3 & 1U);
    if (lVar4 != 0) {
      pbVar7 = param_2 + 0x1c;
      lVar5 = lVar4;
      do {
        *(undefined4 *)(pbVar7 + -0x10) = 0xdd5e0b6b;
        *(undefined4 *)pbVar7 = 0xdd5e0b6b;
        lVar5 = lVar5 + -2;
        pbVar7 = pbVar7 + 0x20;
      } while (lVar5 != 0);
      if ((param_3 & 1U) == 0) goto LAB_01226198;
    }
  }
  lVar5 = uVar3 - lVar4;
  pbVar7 = param_2 + lVar4 * 0x10 + 0xc;
  do {
    lVar5 = lVar5 + -1;
    *(undefined4 *)pbVar7 = 0xdd5e0b6b;
    pbVar7 = pbVar7 + 0x10;
  } while (lVar5 != 0);
LAB_01226198:
  if (0 < param_3) {
    uVar6 = 0;
    do {
      fVar10 = -1e+18;
      if (0 < *(int *)(this + 0x74)) {
        uVar13 = *(undefined8 *)(param_1 + uVar6 * 0x10 + 4);
        lVar4 = 0;
        fVar11 = (float)*(undefined8 *)(this + 0x1c);
        fVar12 = (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20);
        iVar8 = -1;
        puVar9 = (undefined8 *)(*(long *)(this + 0x80) + 4);
        fVar10 = -3.4028235e+38;
        do {
          fVar14 = *(float *)(param_1 + uVar6 * 0x10) * *(float *)(this + 0x18) *
                   *(float *)((long)puVar9 + -4) + (float)uVar13 * fVar11 * (float)*puVar9 +
                   (float)((ulong)uVar13 >> 0x20) * fVar12 * (float)((ulong)*puVar9 >> 0x20);
          iVar2 = (int)lVar4;
          if (fVar14 <= fVar10) {
            fVar14 = fVar10;
            iVar2 = iVar8;
          }
          iVar8 = iVar2;
          fVar10 = fVar14;
          lVar4 = lVar4 + 1;
          puVar9 = puVar9 + 2;
        } while (*(int *)(this + 0x74) != lVar4);
        pfVar1 = (float *)(*(long *)(this + 0x80) + (long)iVar8 * 0x10);
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        pbVar7 = param_2 + uVar6 * 0x10;
        *(float *)pbVar7 = *pfVar1 * *(float *)(this + 0x18);
        *(float *)(pbVar7 + 4) = fVar14 * fVar11;
        *(float *)(pbVar7 + 8) = fVar15 * fVar12;
      }
      lVar4 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_2 + lVar4 + 0xc) = fVar10;
    } while (uVar6 != uVar3);
  }
  return;
}

