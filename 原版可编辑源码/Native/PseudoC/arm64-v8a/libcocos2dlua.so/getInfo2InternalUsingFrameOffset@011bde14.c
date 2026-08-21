
/* btHingeConstraint::getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2*,
   btTransform const&, btTransform const&, btVector3 const&, btVector3 const&) */

void __thiscall
btHingeConstraint::getInfo2InternalUsingFrameOffset
          (btHingeConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5)

{
  btHingeConstraint *pbVar1;
  btHingeConstraint bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
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
  float fVar59;
  float fVar60;
  float local_c0;
  float fStack_bc;
  float local_b8;
  
  fVar28 = *(float *)param_2;
  fVar31 = *(float *)(param_2 + 4);
  fVar17 = *(float *)(this + 0x248);
  fVar19 = *(float *)(this + 600);
  fVar33 = *(float *)(param_2 + 0x10);
  fVar35 = *(float *)(param_2 + 0x14);
  fVar25 = *(float *)(this + 0x288);
  fVar38 = *(float *)(this + 0x298);
  fVar44 = *(float *)(this + 0x2a8);
  fVar50 = *(float *)(this + 0x2b0);
  fVar51 = *(float *)(this + 0x2b4);
  fVar53 = *(float *)(this + 0x2b8);
  fVar36 = *(float *)(param_2 + 0x20);
  fVar37 = *(float *)(param_2 + 0x24);
  fVar20 = *(float *)(this + 0x270);
  fVar21 = *(float *)(this + 0x274);
  uVar3 = *(uint *)(param_1 + 0x28);
  lVar15 = (long)(int)uVar3;
  fVar29 = *(float *)(param_2 + 8);
  fVar22 = *(float *)(this + 0x244);
  fVar56 = *(float *)(this + 0x254);
  fVar57 = *(float *)(this + 0x268);
  fVar27 = *(float *)(param_2 + 0x28);
  fVar59 = *(float *)(param_2 + 0x18);
  fVar39 = *(float *)(this + 0x278);
  fVar58 = fVar17 * fVar36 + fVar19 * fVar37 + fVar57 * fVar27;
  fVar55 = fVar28 * fVar17 + fVar31 * fVar19 + fVar29 * fVar57;
  fVar54 = fVar17 * fVar33 + fVar19 * fVar35 + fVar57 * fVar59;
  fVar60 = fVar25 * *(float *)(param_3 + 0x10) + fVar38 * *(float *)(param_3 + 0x14) +
           fVar44 * *(float *)(param_3 + 0x18);
  fVar52 = fVar25 * *(float *)(param_3 + 0x20) + fVar38 * *(float *)(param_3 + 0x24) +
           fVar44 * *(float *)(param_3 + 0x28);
  fVar46 = *(float *)(param_2 + 0x30) + fVar28 * fVar20 + fVar31 * fVar21 + fVar29 * fVar39;
  fVar57 = *(float *)(*(long *)(this + 0x28) + 0x174);
  fVar49 = fVar33 * fVar20 + fVar35 * fVar21 + fVar59 * fVar39 + *(float *)(param_2 + 0x34);
  fVar17 = *(float *)(*(long *)(this + 0x30) + 0x174);
  fVar25 = *(float *)param_3 * fVar25 + *(float *)(param_3 + 4) * fVar38 +
           *(float *)(param_3 + 8) * fVar44;
  fVar19 = fVar17 / (fVar57 + fVar17);
  if (fVar57 + fVar17 <= 0.0) {
    fVar19 = 0.5;
  }
  fVar30 = 1.0 - fVar19;
  fVar47 = *(float *)(param_3 + 0x30) +
           *(float *)param_3 * fVar50 + *(float *)(param_3 + 4) * fVar51 +
           *(float *)(param_3 + 8) * fVar53;
  fVar40 = fVar36 * fVar20 + fVar37 * fVar21 + fVar27 * fVar39 + *(float *)(param_2 + 0x38);
  fVar32 = fVar55 * fVar19 + fVar25 * fVar30;
  fVar34 = fVar54 * fVar19 + fVar60 * fVar30;
  fVar44 = fVar58 * fVar19 + fVar52 * fVar30;
  fVar38 = fVar32 * fVar32 + fVar34 * fVar34 + fVar44 * fVar44;
  fVar20 = *(float *)(this + 0x264);
  fVar21 = SQRT(fVar38);
  fVar48 = *(float *)(param_3 + 0x10) * fVar50 + *(float *)(param_3 + 0x14) * fVar51 +
           *(float *)(param_3 + 0x18) * fVar53 + *(float *)(param_3 + 0x34);
  fVar39 = *(float *)(param_3 + 0x20) * fVar50 + *(float *)(param_3 + 0x24) * fVar51 +
           *(float *)(param_3 + 0x28) * fVar53 + *(float *)(param_3 + 0x38);
  if (NAN(fVar21)) {
    fVar21 = sqrtf(fVar38);
  }
  fVar21 = 1.0 / fVar21;
  fVar32 = fVar21 * fVar32;
  fVar34 = fVar21 * fVar34;
  fVar21 = fVar21 * fVar44;
  fVar38 = fVar46 - *(float *)(param_2 + 0x30);
  fVar44 = fVar47 - *(float *)(param_3 + 0x30);
  fVar51 = fVar48 - *(float *)(param_3 + 0x34);
  fVar50 = fVar49 - *(float *)(param_2 + 0x34);
  fVar53 = fVar39 - *(float *)(param_3 + 0x38);
  fVar23 = fVar40 - *(float *)(param_2 + 0x38);
  fVar24 = fVar44 * fVar32 + fVar51 * fVar34 + fVar53 * fVar21;
  fVar26 = fVar38 * fVar32 + fVar50 * fVar34 + fVar23 * fVar21;
  fVar44 = fVar44 - fVar32 * fVar24;
  fVar41 = fVar32 * fVar26 - fVar32 * fVar24;
  fVar51 = fVar51 - fVar34 * fVar24;
  fVar53 = fVar53 - fVar21 * fVar24;
  fVar23 = fVar23 - fVar21 * fVar26;
  fVar45 = fVar34 * fVar26 - fVar34 * fVar24;
  fVar24 = fVar21 * fVar26 - fVar21 * fVar24;
  fVar38 = fVar38 - fVar32 * fVar26;
  fVar50 = fVar50 - fVar34 * fVar26;
  fVar42 = fVar44 - fVar30 * fVar41;
  fVar43 = fVar51 - fVar30 * fVar45;
  fVar26 = fVar38 + fVar19 * fVar41;
  fVar45 = fVar50 + fVar19 * fVar45;
  fVar41 = fVar53 - fVar30 * fVar24;
  fVar24 = fVar23 + fVar19 * fVar24;
  fVar44 = fVar19 * fVar44 + fVar30 * fVar38;
  fVar50 = fVar19 * fVar51 + fVar30 * fVar50;
  fVar51 = fVar19 * fVar53 + fVar30 * fVar23;
  fVar38 = fVar44 * fVar44 + fVar50 * fVar50 + fVar51 * fVar51;
  if (fVar38 <= 1.1920929e-07) {
    fVar27 = fVar22 * fVar36 + fVar56 * fVar37 + fVar20 * fVar27;
    fVar50 = fVar22 * fVar33 + fVar56 * fVar35 + fVar20 * fVar59;
    fVar44 = fVar28 * fVar22 + fVar31 * fVar56 + fVar29 * fVar20;
  }
  else {
    fVar27 = SQRT(fVar38);
    if (NAN(fVar27)) {
      fVar27 = sqrtf(fVar38);
    }
    fVar27 = 1.0 / fVar27;
    fVar44 = fVar27 * fVar44;
    fVar50 = fVar27 * fVar50;
    fVar27 = fVar27 * fVar51;
  }
  fVar20 = fVar34 * fVar27 - fVar21 * fVar50;
  fVar22 = fVar21 * fVar44 - fVar27 * fVar32;
  fVar28 = fVar50 * fVar32 - fVar34 * fVar44;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *(float *)(puVar5 + 1) = fVar26 * fVar50 - fVar45 * fVar44;
  *puVar5 = CONCAT44(fVar24 * fVar44 - fVar26 * fVar27,fVar45 * fVar27 - fVar24 * fVar50);
  pfVar6 = *(float **)(param_1 + 0x20);
  local_c0 = fVar45 * fVar28 - fVar24 * fVar22;
  fStack_bc = fVar24 * fVar20 - fVar26 * fVar28;
  fVar31 = fVar43 * fVar28 - fVar41 * fVar22;
  local_b8 = fVar26 * fVar22 - fVar45 * fVar20;
  fVar29 = fVar41 * fVar20 - fVar42 * fVar28;
  *pfVar6 = -(fVar43 * fVar27 - fVar41 * fVar50);
  pfVar6[1] = -(fVar41 * fVar44 - fVar42 * fVar27);
  fVar33 = fVar42 * fVar22 - fVar43 * fVar20;
  pfVar6[2] = -(fVar42 * fVar50 - fVar43 * fVar44);
  if ((fVar57 < 1.1920929e-07 || fVar17 < 1.1920929e-07) && (this[0x2e4] != (btHingeConstraint)0x0))
  {
    fVar31 = fVar30 * fVar31;
    fVar29 = fVar30 * fVar29;
    fVar33 = fVar30 * fVar33;
    local_c0 = fVar19 * local_c0;
    fStack_bc = fVar19 * fStack_bc;
    local_b8 = fVar19 * local_b8;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = lVar15 * 4;
  *(float *)((undefined8 *)(lVar8 + lVar7) + 1) = local_b8;
  *(undefined8 *)(lVar8 + lVar7) = CONCAT44(fStack_bc,local_c0);
  lVar8 = *(long *)(param_1 + 0x20);
  local_c0 = fVar45 * fVar21 - fVar24 * fVar34;
  fStack_bc = fVar24 * fVar32 - fVar26 * fVar21;
  local_b8 = fVar26 * fVar34 - fVar45 * fVar32;
  fVar36 = fVar43 * fVar21 - fVar41 * fVar34;
  fVar35 = fVar41 * fVar32 - fVar42 * fVar21;
  *(float *)(lVar8 + lVar7) = -fVar31;
  *(float *)(lVar8 + (lVar15 + 1) * 4) = -fVar29;
  fVar29 = fVar42 * fVar34 - fVar43 * fVar32;
  *(float *)(lVar8 + (lVar15 + 2) * 4) = -fVar33;
  if (fVar57 < 1.1920929e-07 || fVar17 < 1.1920929e-07) {
    fVar36 = fVar30 * fVar36;
    fVar35 = fVar30 * fVar35;
    fVar29 = fVar30 * fVar29;
    local_c0 = fVar19 * local_c0;
    fStack_bc = fVar19 * fStack_bc;
    local_b8 = fVar19 * local_b8;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = lVar15 * 8;
  *(float *)((undefined8 *)(lVar8 + lVar11) + 1) = local_b8;
  *(undefined8 *)(lVar8 + lVar11) = CONCAT44(fStack_bc,local_c0);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar12 = lVar15 * 2 | 1;
  lVar8 = lVar15 * 2 + 2;
  *(float *)(lVar9 + lVar11) = -fVar36;
  *(float *)(lVar9 + uVar12 * 4) = -fVar35;
  *(float *)(lVar9 + lVar8 * 4) = -fVar29;
  fVar17 = *(float *)param_1;
  fVar19 = *(float *)(param_1 + 4);
  if (this[0x2f8] == (btHingeConstraint)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 8);
    fVar48 = fVar48 - fVar49;
    fVar47 = fVar47 - fVar46;
    *(float *)(puVar5 + 1) = fVar27;
    fVar39 = fVar39 - fVar40;
    fVar17 = fVar17 * fVar19;
    *puVar5 = CONCAT44(fVar50,fVar44);
    lVar9 = *(long *)(param_1 + 8);
    *(float *)((undefined8 *)(lVar9 + lVar7) + 1) = fVar28;
    *(undefined8 *)(lVar9 + lVar7) = CONCAT44(fVar22,fVar20);
    lVar7 = *(long *)(param_1 + 8);
    *(float *)((undefined8 *)(lVar7 + lVar11) + 1) = fVar21;
    *(undefined8 *)(lVar7 + lVar11) = CONCAT44(fVar34,fVar32);
    pfVar6 = *(float **)(param_1 + 0x18);
    *pfVar6 = -fVar44;
    pfVar6[1] = -fVar50;
    pfVar6[2] = -fVar27;
    pfVar6[lVar15] = -fVar20;
    pfVar6[lVar15 + 1] = -fVar22;
    pfVar6[lVar15 + 2] = -fVar28;
    pfVar6[lVar15 * 2] = -fVar32;
    pfVar6[uVar12] = -fVar34;
    pfVar6[lVar8] = -fVar21;
    pfVar6 = *(float **)(param_1 + 0x30);
    *pfVar6 = fVar17 * (fVar47 * fVar44 + fVar48 * fVar50 + fVar39 * fVar27);
    pfVar6[lVar15] = fVar17 * (fVar47 * fVar20 + fVar48 * fVar22 + fVar39 * fVar28);
    pfVar6[lVar15 * 2] = fVar17 * (fVar47 * fVar32 + fVar48 * fVar34 + fVar39 * fVar21);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  else {
    pfVar6 = *(float **)(param_1 + 0x30);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = (long)(int)(uVar3 * 3) * 4;
  uVar12 = -(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)(uVar3 << 2) << 2;
  lVar15 = lVar15 * 0xc + 4;
  uVar13 = -(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
           (ulong)(uVar3 << 2 | 1) << 2;
  uVar14 = -(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
           (ulong)(uVar3 << 2 | 2) << 2;
  fVar57 = fVar54 * fVar52 - fVar58 * fVar60;
  *(float *)(lVar7 + lVar8) = fVar44;
  *(float *)(lVar7 + lVar15) = fVar50;
  *(float *)(lVar7 + lVar8 + 8) = fVar27;
  *(float *)(lVar7 + uVar12) = fVar20;
  *(float *)(lVar7 + uVar13) = fVar22;
  *(float *)(lVar7 + uVar14) = fVar28;
  *(float *)(lVar9 + lVar8) = -fVar44;
  fVar29 = fVar58 * fVar25 - fVar55 * fVar52;
  *(float *)(lVar9 + lVar15) = -fVar50;
  fVar25 = fVar55 * fVar60 - fVar54 * fVar25;
  *(float *)(lVar9 + lVar8 + 8) = -fVar27;
  *(float *)(lVar9 + uVar12) = -fVar20;
  *(float *)(lVar9 + uVar13) = -fVar22;
  *(float *)(lVar9 + uVar14) = -fVar28;
  fVar17 = *(float *)param_1;
  fVar19 = *(float *)(param_1 + 4);
  pfVar6[(int)(uVar3 * 3)] = fVar17 * fVar19 * (fVar57 * fVar44 + fVar29 * fVar50 + fVar25 * fVar27)
  ;
  *(float *)((long)pfVar6 + uVar12) =
       fVar17 * fVar19 * (fVar57 * fVar20 + fVar29 * fVar22 + fVar25 * fVar28);
  if (this[0x2e4] == (btHingeConstraint)0x0) {
    iVar10 = 0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = *(float *)(this + 0x2dc) * *(float *)(this + 0x2f4);
    iVar10 = 2;
    if (0.0 < fVar17) {
      iVar10 = 1;
    }
  }
  bVar2 = this[0x2f9];
  if (iVar10 == 0 && bVar2 == (btHingeConstraint)0x0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  lVar11 = (long)iVar4;
  lVar16 = lVar11 * 0x14;
  *(float *)(lVar7 + lVar16) = fVar32;
  lVar8 = (long)(iVar4 * 5) * 4;
  lVar15 = lVar8 + 4;
  lVar8 = lVar8 + 8;
  *(float *)(lVar7 + lVar15) = fVar34;
  *(float *)(lVar7 + lVar8) = fVar21;
  *(float *)(lVar9 + lVar16) = -fVar32;
  *(float *)(lVar9 + lVar15) = -fVar34;
  *(float *)(lVar9 + lVar8) = -fVar21;
  fVar19 = (float)btAngularLimit::getLow((btAngularLimit *)(this + 0x2c8));
  fVar57 = (float)btAngularLimit::getHigh((btAngularLimit *)(this + 0x2c8));
  lVar15 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(lVar15 + lVar16) = 0;
  pbVar1 = (btHingeConstraint *)(param_1 + 4);
  if ((*(uint *)(this + 0x304) & 2) != 0) {
    pbVar1 = this + 0x310;
  }
  fVar20 = *(float *)pbVar1;
  if ((bVar2 != (btHingeConstraint)0x0) && (iVar10 == 0 || fVar19 != fVar57)) {
    if ((*(uint *)(this + 0x304) >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar11 * 0x14) = *(undefined4 *)(this + 0x308);
    }
    fVar22 = (float)btTypedConstraint::getMotorFactor
                              (*(float *)(this + 0x2f0),fVar19,fVar57,*(float *)(this + 0x2c0),
                               fVar20 * *(float *)param_1);
    lVar15 = *(long *)(param_1 + 0x30);
    *(float *)(lVar15 + lVar16) =
         fVar22 * *(float *)(this + 0x2c0) * *(float *)(this + 0x2f4) + *(float *)(lVar15 + lVar16);
    *(float *)(*(long *)(param_1 + 0x40) + lVar16) = -*(float *)(this + 0x2c4);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar16) = *(undefined4 *)(this + 0x2c4);
  }
  if (iVar10 == 0) {
    return;
  }
  *(float *)(lVar15 + lVar16) = *(float *)(lVar15 + lVar16) + fVar17 * fVar20 * *(float *)param_1;
  if (((byte)this[0x304] & 1) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar11 * 0x14) = *(undefined4 *)(this + 0x30c);
  }
  if (fVar19 == fVar57) {
    lVar7 = *(long *)(param_1 + 0x40);
    uVar18 = 0x7f7fffff;
LAB_011be8dc:
    *(undefined4 *)(lVar7 + lVar11 * 0x14) = 0xff7fffff;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x40);
    if (iVar10 != 1) {
      uVar18 = 0;
      goto LAB_011be8dc;
    }
    uVar18 = 0x7f7fffff;
    *(undefined4 *)(lVar7 + lVar11 * 0x14) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar11 * 0x14) = uVar18;
  fVar17 = *(float *)(this + 0x2d8);
  if (0.0 < fVar17) {
    fVar19 = (*(float *)param_4 * fVar32 + *(float *)(param_4 + 4) * fVar34 +
             *(float *)(param_4 + 8) * fVar21) -
             (*(float *)param_5 * fVar32 + *(float *)(param_5 + 4) * fVar34 +
             *(float *)(param_5 + 8) * fVar21);
    if (iVar10 == 1) {
      if ((0.0 <= fVar19) ||
         (fVar17 = -(fVar17 * fVar19), fVar17 <= *(float *)(lVar15 + lVar11 * 0x14)))
      goto LAB_011be978;
    }
    else if ((fVar19 <= 0.0) ||
            (fVar17 = -(fVar17 * fVar19), *(float *)(lVar15 + lVar11 * 0x14) <= fVar17))
    goto LAB_011be978;
    *(float *)(lVar15 + lVar11 * 0x14) = fVar17;
  }
LAB_011be978:
  *(float *)(lVar15 + lVar16) = *(float *)(this + 0x2d4) * *(float *)(lVar15 + lVar16);
  return;
}

