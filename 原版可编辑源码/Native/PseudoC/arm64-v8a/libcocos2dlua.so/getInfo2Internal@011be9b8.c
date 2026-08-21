
/* btHingeConstraint::getInfo2Internal(btTypedConstraint::btConstraintInfo2*, btTransform const&,
   btTransform const&, btVector3 const&, btVector3 const&) */

void __thiscall
btHingeConstraint::getInfo2Internal
          (btHingeConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5)

{
  uint uVar1;
  float *pfVar2;
  btHingeConstraint *pbVar3;
  btHingeConstraint bVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  fVar58 = *(float *)(this + 0x240);
  fVar26 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar20 = *(float *)(this + 0x250);
  fVar21 = *(float *)(this + 0x260);
  fVar22 = *(float *)(param_2 + 8);
  fVar30 = *(float *)(this + 0x244);
  fVar49 = *(float *)(this + 0x254);
  fVar53 = *(float *)(this + 0x264);
  fVar32 = *(float *)(this + 0x248);
  fVar57 = *(float *)(this + 600);
  fVar35 = *(float *)(this + 0x268);
  fVar37 = *(float *)(param_2 + 0x10);
  fVar38 = *(float *)(param_2 + 0x14);
  fVar41 = *(float *)(param_2 + 0x18);
  fVar44 = *(float *)(param_2 + 0x20);
  fVar16 = *(float *)(param_2 + 0x24);
  fVar25 = *(float *)(param_2 + 0x28);
  fVar29 = *(float *)(this + 0x270);
  fVar56 = *(float *)(this + 0x274);
  fVar27 = *(float *)(this + 0x278);
  fVar23 = *(float *)param_3;
  fVar28 = *(float *)(param_3 + 4);
  fVar36 = *(float *)(this + 0x288);
  fVar39 = *(float *)(param_3 + 0x10);
  fVar42 = *(float *)(param_3 + 0x14);
  fVar45 = *(float *)(param_3 + 0x20);
  fVar54 = *(float *)(param_3 + 0x24);
  fVar17 = *(float *)(this + 0x2b0);
  fVar24 = *(float *)(this + 0x298);
  fVar51 = *(float *)(this + 0x2b4);
  fVar50 = *(float *)(this + 0x2a8);
  fVar55 = *(float *)(param_3 + 0x18);
  fVar34 = *(float *)(param_3 + 0x28);
  fVar46 = *(float *)(param_3 + 8);
  fVar47 = *(float *)(this + 0x2b8);
  bVar4 = this[0x2f8];
  uVar5 = *(uint *)(param_1 + 0x28);
  lVar7 = (long)(int)uVar5;
  fVar31 = *(float *)(param_2 + 0x34);
  fVar33 = *(float *)(param_2 + 0x38);
  fVar48 = *(float *)(param_3 + 0x30) + fVar23 * fVar17 + fVar28 * fVar51 + fVar46 * fVar47;
  fVar52 = *(float *)(param_2 + 0x30) + fVar26 * fVar29 + fVar19 * fVar56 + fVar22 * fVar27;
  fVar43 = fVar39 * fVar17 + fVar42 * fVar51 + fVar55 * fVar47 + *(float *)(param_3 + 0x34);
  fVar40 = fVar37 * fVar29 + fVar38 * fVar56 + fVar41 * fVar27 + fVar31;
  fVar17 = fVar45 * fVar17 + fVar54 * fVar51 + fVar34 * fVar47 + *(float *)(param_3 + 0x38);
  fVar27 = fVar44 * fVar29 + fVar16 * fVar56 + fVar25 * fVar27 + fVar33;
  if (bVar4 == (btHingeConstraint)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 8);
    uVar1 = uVar5 * 2 + 2;
    uVar12 = -(ulong)(uVar5 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar5 + 1) << 2;
    uVar13 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    *puVar6 = 0x3f800000;
    *(undefined4 *)((long)puVar6 + uVar12) = 0x3f800000;
    *(undefined4 *)((long)puVar6 + uVar13) = 0x3f800000;
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    *puVar6 = 0xbf800000;
    *(undefined4 *)((long)puVar6 + uVar12) = 0xbf800000;
    *(undefined4 *)((long)puVar6 + uVar13) = 0xbf800000;
    fVar31 = *(float *)(param_2 + 0x34);
    fVar33 = *(float *)(param_2 + 0x38);
  }
  fVar51 = fVar58 * fVar26 + fVar20 * fVar19 + fVar21 * fVar22;
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  fVar29 = fVar26 * fVar30 + fVar19 * fVar49 + fVar22 * fVar53;
  fVar56 = fVar58 * fVar37 + fVar20 * fVar38 + fVar21 * fVar41;
  fVar47 = fVar30 * fVar37 + fVar49 * fVar38 + fVar53 * fVar41;
  fVar21 = fVar58 * fVar44 + fVar20 * fVar16 + fVar21 * fVar25;
  fVar20 = fVar30 * fVar44 + fVar49 * fVar16 + fVar53 * fVar25;
  fVar30 = fVar32 * fVar37 + fVar57 * fVar38 + fVar35 * fVar41;
  fVar37 = fVar32 * fVar44 + fVar57 * fVar16 + fVar35 * fVar25;
  fVar31 = fVar40 - fVar31;
  fVar33 = fVar27 - fVar33;
  uVar12 = -(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(uVar5 << 1) << 2;
  fVar16 = fVar52 - *(float *)(param_2 + 0x30);
  pfVar11 = (float *)(puVar6 + lVar7);
  *puVar6 = 0;
  puVar6[1] = fVar33;
  puVar6[2] = -fVar31;
  puVar6[3] = 0;
  *pfVar11 = -fVar33;
  pfVar11[1] = 0.0;
  pfVar11[2] = fVar16;
  pfVar11[3] = 0.0;
  pfVar11 = (float *)((long)puVar6 + uVar12);
  pfVar11[2] = 0.0;
  pfVar11[3] = 0.0;
  *pfVar11 = fVar31;
  pfVar11[1] = -fVar16;
  puVar10 = *(undefined4 **)(param_1 + 0x20);
  fVar16 = fVar48 - *(float *)(param_3 + 0x30);
  fVar25 = fVar43 - *(float *)(param_3 + 0x34);
  fVar31 = fVar17 - *(float *)(param_3 + 0x38);
  pfVar11 = (float *)(puVar10 + lVar7);
  pfVar2 = (float *)((long)puVar10 + uVar12);
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[1] = -fVar31;
  puVar10[2] = fVar25;
  *pfVar11 = fVar31;
  pfVar11[1] = 0.0;
  pfVar11[2] = -fVar16;
  pfVar11[3] = 0.0;
  *pfVar2 = -fVar25;
  pfVar2[1] = fVar16;
  pfVar2[2] = 0.0;
  pfVar2[3] = 0.0;
  pfVar11 = *(float **)(param_1 + 0x30);
  fVar22 = fVar26 * fVar32 + fVar19 * fVar57 + fVar22 * fVar35;
  fVar25 = fVar23 * fVar36 + fVar28 * fVar24 + fVar46 * fVar50;
  fVar23 = fVar36 * fVar39 + fVar24 * fVar42 + fVar50 * fVar55;
  fVar16 = *(float *)param_1 * *(float *)(param_1 + 4);
  fVar19 = fVar36 * fVar45 + fVar24 * fVar54 + fVar50 * fVar34;
  if (bVar4 == (btHingeConstraint)0x0) {
    *pfVar11 = fVar16 * (fVar48 - fVar52);
    pfVar11[lVar7] = fVar16 * (fVar43 - fVar40);
    pfVar11[lVar7 * 2] = fVar16 * (fVar17 - fVar27);
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  lVar7 = (long)(int)uVar5;
  fVar24 = fVar30 * fVar19 - fVar37 * fVar23;
  fVar17 = fVar37 * fVar25 - fVar22 * fVar19;
  fVar19 = fVar22 * fVar23 - fVar30 * fVar25;
  lVar14 = (long)(int)(uVar5 * 3);
  puVar6[lVar7 * 3] = fVar51;
  puVar6[lVar14 + 1] = fVar56;
  uVar12 = -(ulong)((uVar5 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
           (ulong)(uVar5 << 2 | 1) << 2;
  uVar13 = -(ulong)((uVar5 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
           (ulong)(uVar5 << 2 | 2) << 2;
  puVar6[lVar14 + 2] = fVar21;
  puVar6[lVar7 * 4] = fVar29;
  *(float *)((long)puVar6 + uVar12) = fVar47;
  *(float *)((long)puVar6 + uVar13) = fVar20;
  puVar10[lVar7 * 3] = -fVar51;
  puVar10[lVar14 + 1] = -fVar56;
  puVar10[lVar14 + 2] = -fVar21;
  puVar10[lVar7 * 4] = -fVar29;
  *(float *)((long)puVar10 + uVar12) = -fVar47;
  *(float *)((long)puVar10 + uVar13) = -fVar20;
  pfVar11[lVar7 * 3] = (fVar21 * fVar19 + fVar51 * fVar24 + fVar56 * fVar17) * fVar16;
  pfVar11[lVar7 * 4] = (fVar20 * fVar19 + fVar29 * fVar24 + fVar47 * fVar17) * fVar16;
  if (this[0x2e4] == (btHingeConstraint)0x0) {
    iVar9 = 0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(this + 0x2dc) * *(float *)(this + 0x2f4);
    iVar9 = 2;
    if (0.0 < fVar16) {
      iVar9 = 1;
    }
  }
  bVar4 = this[0x2f9];
  if (iVar9 == 0 && bVar4 == (btHingeConstraint)0x0) {
    return;
  }
  lVar14 = (long)(int)(uVar5 * 5);
  lVar15 = lVar7 * 0x14;
  puVar6[lVar7 * 5] = fVar22;
  puVar6[lVar14 + 1] = fVar30;
  puVar6[lVar14 + 2] = fVar37;
  puVar10[lVar7 * 5] = -fVar22;
  puVar10[lVar14 + 1] = -fVar30;
  puVar10[lVar14 + 2] = -fVar37;
  fVar17 = (float)btAngularLimit::getLow((btAngularLimit *)(this + 0x2c8));
  fVar19 = (float)btAngularLimit::getHigh((btAngularLimit *)(this + 0x2c8));
  lVar14 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(lVar14 + lVar15) = 0;
  pbVar3 = (btHingeConstraint *)(param_1 + 4);
  if ((*(uint *)(this + 0x304) & 2) != 0) {
    pbVar3 = this + 0x310;
  }
  fVar20 = *(float *)pbVar3;
  if ((bVar4 != (btHingeConstraint)0x0) && (iVar9 == 0 || fVar17 != fVar19)) {
    if ((*(uint *)(this + 0x304) >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x14) = *(undefined4 *)(this + 0x308);
    }
    fVar21 = (float)btTypedConstraint::getMotorFactor
                              (*(float *)(this + 0x2f0),fVar17,fVar19,*(float *)(this + 0x2c0),
                               fVar20 * *(float *)param_1);
    lVar14 = *(long *)(param_1 + 0x30);
    *(float *)(lVar14 + lVar15) =
         fVar21 * *(float *)(this + 0x2c0) * *(float *)(this + 0x2f4) + *(float *)(lVar14 + lVar15);
    *(float *)(*(long *)(param_1 + 0x40) + lVar15) = -*(float *)(this + 0x2c4);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar15) = *(undefined4 *)(this + 0x2c4);
  }
  if (iVar9 == 0) {
    return;
  }
  *(float *)(lVar14 + lVar15) = *(float *)(lVar14 + lVar15) + fVar16 * fVar20 * *(float *)param_1;
  if (((byte)this[0x304] & 1) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x14) = *(undefined4 *)(this + 0x30c);
  }
  if (fVar17 == fVar19) {
    lVar8 = *(long *)(param_1 + 0x40);
    uVar18 = 0x7f7fffff;
LAB_011bf074:
    *(undefined4 *)(lVar8 + lVar7 * 0x14) = 0xff7fffff;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x40);
    if (iVar9 != 1) {
      uVar18 = 0;
      goto LAB_011bf074;
    }
    uVar18 = 0x7f7fffff;
    *(undefined4 *)(lVar8 + lVar7 * 0x14) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar7 * 0x14) = uVar18;
  fVar16 = *(float *)(this + 0x2d8);
  if (0.0 < fVar16) {
    fVar17 = (fVar22 * *(float *)param_4 + fVar30 * *(float *)(param_4 + 4) +
             fVar37 * *(float *)(param_4 + 8)) -
             (fVar22 * *(float *)param_5 + fVar30 * *(float *)(param_5 + 4) +
             fVar37 * *(float *)(param_5 + 8));
    if (iVar9 == 1) {
      if ((0.0 <= fVar17) ||
         (fVar16 = -(fVar16 * fVar17), fVar16 <= *(float *)(lVar14 + lVar7 * 0x14)))
      goto LAB_011bf110;
    }
    else if ((fVar17 <= 0.0) ||
            (fVar16 = -(fVar16 * fVar17), *(float *)(lVar14 + lVar7 * 0x14) <= fVar16))
    goto LAB_011bf110;
    *(float *)(lVar14 + lVar7 * 0x14) = fVar16;
  }
LAB_011bf110:
  *(float *)(lVar14 + lVar15) = *(float *)(this + 0x2d4) * *(float *)(lVar14 + lVar15);
  return;
}

