
/* btBoxShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*, int)
   const */

void __thiscall
btBoxShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btBoxShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  btVector3 *pbVar2;
  btVector3 *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_3 < 1) {
    return;
  }
  uVar4 = (ulong)(uint)param_3;
  if (3 < (uint)param_3) {
    uVar1 = 4;
    if ((param_3 & 3U) != 0) {
      uVar1 = (ulong)(param_3 & 3);
    }
    lVar5 = uVar4 - uVar1;
    if (lVar5 != 0) {
      lVar6 = 0;
      if ((param_1 + uVar4 * 0x10 + -4 <= param_2 ||
           (btBoxShape *)(param_2 + uVar4 * 0x10) <= param_1) &&
         (this + 0x31 <= param_2 || (btBoxShape *)(param_2 + uVar4 * 0x10) <= this + 0x30)) {
        fVar7 = *(float *)(this + 0x28);
        fVar8 = *(float *)(this + 0x2c);
        fVar9 = *(float *)(this + 0x30);
        lVar6 = lVar5;
        pbVar2 = param_1;
        pbVar3 = param_2;
        do {
          fVar10 = *(float *)pbVar2;
          fVar14 = *(float *)(pbVar2 + 4);
          fVar18 = *(float *)(pbVar2 + 8);
          fVar11 = *(float *)(pbVar2 + 0x10);
          fVar15 = *(float *)(pbVar2 + 0x14);
          fVar19 = *(float *)(pbVar2 + 0x18);
          fVar12 = *(float *)(pbVar2 + 0x20);
          fVar16 = *(float *)(pbVar2 + 0x24);
          fVar20 = *(float *)(pbVar2 + 0x28);
          fVar13 = *(float *)(pbVar2 + 0x30);
          fVar17 = *(float *)(pbVar2 + 0x34);
          fVar21 = *(float *)(pbVar2 + 0x38);
          pbVar2 = pbVar2 + 0x40;
          lVar6 = lVar6 + -4;
          *(uint *)pbVar3 = (uint)-fVar7 ^ ((uint)-fVar7 ^ (uint)fVar7) & -(uint)(0.0 <= fVar10);
          *(uint *)(pbVar3 + 4) =
               (uint)-fVar8 ^ ((uint)-fVar8 ^ (uint)fVar8) & -(uint)(0.0 <= fVar14);
          *(uint *)(pbVar3 + 8) =
               (uint)-fVar9 ^ ((uint)-fVar9 ^ (uint)fVar9) & -(uint)(0.0 <= fVar18);
          *(undefined4 *)(pbVar3 + 0xc) = 0;
          *(uint *)(pbVar3 + 0x10) =
               (uint)-fVar7 ^ ((uint)-fVar7 ^ (uint)fVar7) & -(uint)(0.0 <= fVar11);
          *(uint *)(pbVar3 + 0x14) =
               (uint)-fVar8 ^ ((uint)-fVar8 ^ (uint)fVar8) & -(uint)(0.0 <= fVar15);
          *(uint *)(pbVar3 + 0x18) =
               (uint)-fVar9 ^ ((uint)-fVar9 ^ (uint)fVar9) & -(uint)(0.0 <= fVar19);
          *(undefined4 *)(pbVar3 + 0x1c) = 0;
          *(uint *)(pbVar3 + 0x20) =
               (uint)-fVar7 ^ ((uint)-fVar7 ^ (uint)fVar7) & -(uint)(0.0 <= fVar12);
          *(uint *)(pbVar3 + 0x24) =
               (uint)-fVar8 ^ ((uint)-fVar8 ^ (uint)fVar8) & -(uint)(0.0 <= fVar16);
          *(uint *)(pbVar3 + 0x28) =
               (uint)-fVar9 ^ ((uint)-fVar9 ^ (uint)fVar9) & -(uint)(0.0 <= fVar20);
          *(undefined4 *)(pbVar3 + 0x2c) = 0;
          *(uint *)(pbVar3 + 0x30) =
               (uint)-fVar7 ^ ((uint)-fVar7 ^ (uint)fVar7) & -(uint)(0.0 <= fVar13);
          *(uint *)(pbVar3 + 0x34) =
               (uint)-fVar8 ^ ((uint)-fVar8 ^ (uint)fVar8) & -(uint)(0.0 <= fVar17);
          *(uint *)(pbVar3 + 0x38) =
               (uint)-fVar9 ^ ((uint)-fVar9 ^ (uint)fVar9) & -(uint)(0.0 <= fVar21);
          *(undefined4 *)(pbVar3 + 0x3c) = 0;
          pbVar3 = pbVar3 + 0x40;
        } while (lVar6 != 0);
        lVar6 = lVar5;
        if (uVar1 == 0) {
          return;
        }
      }
      goto LAB_01222374;
    }
  }
  lVar6 = 0;
LAB_01222374:
  lVar5 = uVar4 - lVar6;
  pbVar2 = param_1 + lVar6 * 0x10 + 8;
  pbVar3 = param_2 + lVar6 * 0x10 + 8;
  do {
    lVar5 = lVar5 + -1;
    fVar7 = *(float *)(this + 0x28);
    if (*(float *)(pbVar2 + -8) < 0.0) {
      fVar7 = -*(float *)(this + 0x28);
    }
    fVar8 = *(float *)(this + 0x2c);
    if (*(float *)(pbVar2 + -4) < 0.0) {
      fVar8 = -*(float *)(this + 0x2c);
    }
    fVar9 = *(float *)(this + 0x30);
    if (*(float *)pbVar2 < 0.0) {
      fVar9 = -*(float *)(this + 0x30);
    }
    *(undefined4 *)(pbVar3 + 4) = 0;
    *(float *)(pbVar3 + -8) = fVar7;
    *(float *)(pbVar3 + -4) = fVar8;
    *(float *)pbVar3 = fVar9;
    pbVar2 = pbVar2 + 0x10;
    pbVar3 = pbVar3 + 0x10;
  } while (lVar5 != 0);
  return;
}

