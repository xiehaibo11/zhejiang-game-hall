
/* btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*,
   btVector3*, int) const */

void __thiscall
btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btPolyhedralConvexShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  btVector3 *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 auStack_870 [256];
  ulong local_68;
  
  if (param_3 < 1) {
    return;
  }
  uVar9 = (ulong)(uint)param_3;
  if (param_3 == 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = uVar9 - (param_3 & 1U);
    if (lVar5 != 0) {
      pbVar7 = param_2 + 0x1c;
      lVar6 = lVar5;
      do {
        *(undefined4 *)(pbVar7 + -0x10) = 0xdd5e0b6b;
        *(undefined4 *)pbVar7 = 0xdd5e0b6b;
        lVar6 = lVar6 + -2;
        pbVar7 = pbVar7 + 0x20;
      } while (lVar6 != 0);
      if ((param_3 & 1U) == 0) goto LAB_0122dcc4;
    }
  }
  lVar6 = uVar9 - lVar5;
  pbVar7 = param_2 + lVar5 * 0x10 + 0xc;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)pbVar7 = 0xdd5e0b6b;
    pbVar7 = pbVar7 + 0x10;
  } while (lVar6 != 0);
LAB_0122dcc4:
  if (0 < param_3) {
    local_68 = 0;
    do {
      iVar2 = (**(code **)(*(long *)this + 0xc0))(this);
      if (0 < iVar2) {
        iVar2 = 0;
        pbVar7 = param_2 + local_68 * 0x10;
        do {
          iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
          fVar11 = -3.4028235e+38;
          if (iVar3 - iVar2 < 0x80) {
            iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
            uVar4 = iVar3 - iVar2;
            if (0 < (int)uVar4) goto LAB_0122dd68;
            lVar5 = -1;
          }
          else {
            uVar4 = 0x80;
LAB_0122dd68:
            uVar10 = 0;
            puVar8 = auStack_870;
            do {
              (**(code **)(*(long *)this + 0xd8))(this,uVar10 & 0xffffffff,puVar8);
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 2;
            } while (uVar4 != uVar10);
            uVar12 = *(undefined8 *)(param_1 + local_68 * 0x10 + 4);
            lVar5 = 0;
            iVar3 = -1;
            puVar8 = (undefined8 *)((ulong)auStack_870 | 4);
            do {
              fVar13 = *(float *)(param_1 + local_68 * 0x10) * *(float *)((long)puVar8 - 4) +
                       (float)uVar12 * (float)*puVar8 +
                       (float)((ulong)uVar12 >> 0x20) * (float)((ulong)*puVar8 >> 0x20);
              iVar1 = (int)lVar5;
              if (fVar13 <= fVar11) {
                fVar13 = fVar11;
                iVar1 = iVar3;
              }
              iVar3 = iVar1;
              fVar11 = fVar13;
              lVar5 = lVar5 + 1;
              puVar8 = puVar8 + 2;
            } while ((int)uVar4 != lVar5);
            lVar5 = (long)iVar3;
          }
          if (*(float *)(pbVar7 + 0xc) < fVar11) {
            uVar12 = auStack_870[lVar5 * 2];
            *(undefined8 *)(pbVar7 + 8) = auStack_870[lVar5 * 2 + 1];
            *(undefined8 *)pbVar7 = uVar12;
            *(float *)(pbVar7 + 0xc) = fVar11;
          }
          iVar2 = iVar2 + 0x80;
          iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
        } while (iVar2 < iVar3);
      }
      local_68 = local_68 + 1;
    } while (local_68 != uVar9);
  }
  return;
}

