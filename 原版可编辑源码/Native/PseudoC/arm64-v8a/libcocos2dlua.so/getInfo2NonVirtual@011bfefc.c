
/* btPoint2PointConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform
   const&, btTransform const&) */

void __thiscall
btPoint2PointConstraint::getInfo2NonVirtual
          (btPoint2PointConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3)

{
  float *pfVar1;
  btPoint2PointConstraint *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar5 = *(undefined4 **)(param_1 + 8);
  *puVar5 = 0x3f800000;
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar9 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(uVar3 << 1) << 2;
  uVar7 = -(ulong)(uVar3 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 + 1) << 2;
  lVar6 = uVar9 + 8;
  *(undefined4 *)((long)puVar5 + uVar7) = 0x3f800000;
  *(undefined4 *)((long)puVar5 + lVar6) = 0x3f800000;
  fVar10 = *(float *)(this + 0x144);
  fVar14 = *(float *)(this + 0x148);
  fVar16 = *(float *)(this + 0x14c);
  fVar11 = *(float *)param_2 * fVar10 + *(float *)(param_2 + 4) * fVar14 +
           *(float *)(param_2 + 8) * fVar16;
  fVar13 = fVar10 * *(float *)(param_2 + 0x10) + fVar14 * *(float *)(param_2 + 0x14) +
           fVar16 * *(float *)(param_2 + 0x18);
  fVar10 = fVar10 * *(float *)(param_2 + 0x20) + fVar14 * *(float *)(param_2 + 0x24) +
           fVar16 * *(float *)(param_2 + 0x28);
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  pfVar8 = (float *)(puVar5 + (int)uVar3);
  pfVar1 = (float *)((long)puVar5 + uVar9);
  *puVar5 = 0;
  puVar5[1] = fVar10;
  puVar5[2] = -fVar13;
  puVar5[3] = 0;
  *pfVar8 = -fVar10;
  pfVar8[1] = 0.0;
  pfVar8[2] = fVar11;
  pfVar8[3] = 0.0;
  *pfVar1 = fVar13;
  pfVar1[1] = -fVar11;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  *puVar5 = 0xbf800000;
  *(undefined4 *)((long)puVar5 + uVar7) = 0xbf800000;
  *(undefined4 *)((long)puVar5 + lVar6) = 0xbf800000;
  fVar14 = *(float *)(this + 0x154);
  fVar15 = *(float *)(this + 0x158);
  fVar17 = *(float *)(this + 0x15c);
  uVar4 = *(uint *)(param_1 + 0x28);
  lVar6 = (long)(int)uVar4;
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  fVar12 = *(float *)param_3 * fVar14 + *(float *)(param_3 + 4) * fVar15 +
           *(float *)(param_3 + 8) * fVar17;
  fVar16 = fVar14 * *(float *)(param_3 + 0x20) + fVar15 * *(float *)(param_3 + 0x24) +
           fVar17 * *(float *)(param_3 + 0x28);
  pfVar8 = (float *)(puVar5 + lVar6);
  fVar14 = fVar14 * *(float *)(param_3 + 0x10) + fVar15 * *(float *)(param_3 + 0x14) +
           fVar17 * *(float *)(param_3 + 0x18);
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[1] = -fVar16;
  puVar5[2] = fVar14;
  *pfVar8 = fVar16;
  pfVar8[1] = 0.0;
  pfVar8[2] = -fVar12;
  pfVar8[3] = 0.0;
  pfVar8 = (float *)(puVar5 + lVar6 * 2);
  *pfVar8 = -fVar14;
  pfVar8[1] = fVar12;
  pfVar8[2] = 0.0;
  pfVar8[3] = 0.0;
  uVar3 = *(uint *)(this + 0x164);
  pbVar2 = (btPoint2PointConstraint *)(param_1 + 4);
  if ((uVar3 & 1) != 0) {
    pbVar2 = this + 0x168;
  }
  pfVar8 = *(float **)(param_1 + 0x30);
  fVar15 = *(float *)pbVar2 * *(float *)param_1;
  *pfVar8 = fVar15 * (((fVar12 + *(float *)(param_3 + 0x30)) - fVar11) - *(float *)(param_2 + 0x30))
  ;
  pfVar8[lVar6] =
       fVar15 * (((fVar14 + *(float *)(param_3 + 0x34)) - fVar13) - *(float *)(param_2 + 0x34));
  pfVar8[lVar6 * 2] =
       fVar15 * (((fVar16 + *(float *)(param_3 + 0x38)) - fVar10) - *(float *)(param_2 + 0x38));
  if ((uVar3 >> 1 & 1) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x38);
    *puVar5 = *(undefined4 *)(this + 0x16c);
    puVar5[lVar6] = *(undefined4 *)(this + 0x16c);
    puVar5[lVar6 * 2] = *(undefined4 *)(this + 0x16c);
  }
  fVar14 = *(float *)(this + 0x17c);
  fVar16 = -fVar14;
  fVar10 = fVar14;
  if (0.0 < fVar14) {
    **(float **)(param_1 + 0x40) = fVar16;
    **(float **)(param_1 + 0x48) = fVar14;
    fVar10 = *(float *)(this + 0x17c);
  }
  if (0.0 < fVar10) {
    *(float *)(*(long *)(param_1 + 0x40) + lVar6 * 4) = fVar16;
    *(float *)(*(long *)(param_1 + 0x48) + lVar6 * 4) = fVar14;
    fVar10 = *(float *)(this + 0x17c);
  }
  if (0.0 < fVar10) {
    uVar7 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(uVar4 << 1) << 2;
    *(float *)(*(long *)(param_1 + 0x40) + uVar7) = fVar16;
    *(float *)(*(long *)(param_1 + 0x48) + uVar7) = fVar14;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x178);
  return;
}

