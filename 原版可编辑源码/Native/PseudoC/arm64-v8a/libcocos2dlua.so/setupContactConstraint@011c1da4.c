
/* btSequentialImpulseConstraintSolver::setupContactConstraint(btSolverConstraint&, int, int,
   btManifoldPoint&, btContactSolverInfo const&, float&, btVector3 const&, btVector3 const&) */

void __thiscall
btSequentialImpulseConstraintSolver::setupContactConstraint
          (btSequentialImpulseConstraintSolver *this,btSolverConstraint *param_1,int param_2,
          int param_3,btManifoldPoint *param_4,btContactSolverInfo *param_5,float *param_6,
          btVector3 *param_7,btVector3 *param_8)

{
  long lVar1;
  long *plVar2;
  btContactSolverInfo *pbVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar1 = *(long *)(this + 0x18);
  plVar4 = (long *)(lVar1 + (long)param_2 * 0xf8 + 0xf0);
  lVar6 = *plVar4;
  plVar2 = (long *)(lVar1 + (long)param_3 * 0xf8 + 0xf0);
  lVar5 = *plVar2;
  *param_6 = 1.0;
  fVar10 = *(float *)(param_4 + 0x40);
  fVar18 = 0.0;
  fVar11 = *(float *)(param_7 + 4) * *(float *)(param_4 + 0x48) -
           *(float *)(param_7 + 8) * *(float *)(param_4 + 0x44);
  fVar19 = 0.0;
  fVar12 = *(float *)(param_7 + 8) * fVar10 - *(float *)(param_4 + 0x48) * *(float *)param_7;
  fVar20 = 0.0;
  fVar10 = *(float *)(param_4 + 0x44) * *(float *)param_7 - *(float *)(param_7 + 4) * fVar10;
  fVar21 = 0.0;
  if (lVar6 != 0) {
    fVar19 = (fVar11 * *(float *)(lVar6 + 0x124) + fVar12 * *(float *)(lVar6 + 0x128) +
             fVar10 * *(float *)(lVar6 + 300)) * *(float *)(lVar6 + 0x250);
    fVar20 = (fVar11 * *(float *)(lVar6 + 0x134) + fVar12 * *(float *)(lVar6 + 0x138) +
             fVar10 * *(float *)(lVar6 + 0x13c)) * *(float *)(lVar6 + 0x254);
    fVar21 = (fVar11 * *(float *)(lVar6 + 0x144) + fVar12 * *(float *)(lVar6 + 0x148) +
             fVar10 * *(float *)(lVar6 + 0x14c)) * *(float *)(lVar6 + 600);
  }
  *(float *)(param_1 + 0x40) = fVar19;
  *(float *)(param_1 + 0x44) = fVar20;
  *(float *)(param_1 + 0x48) = fVar21;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  fVar22 = 0.0;
  fVar15 = *(float *)(param_8 + 4) * *(float *)(param_4 + 0x48) -
           *(float *)(param_8 + 8) * *(float *)(param_4 + 0x44);
  fVar14 = *(float *)(param_8 + 8) * *(float *)(param_4 + 0x40) -
           *(float *)(param_4 + 0x48) * *(float *)param_8;
  fVar13 = *(float *)(param_4 + 0x44) * *(float *)param_8 -
           *(float *)(param_8 + 4) * *(float *)(param_4 + 0x40);
  fVar17 = 0.0;
  if (lVar5 != 0) {
    fVar17 = -fVar15;
    fVar18 = ((*(float *)(lVar5 + 0x124) * fVar17 - *(float *)(lVar5 + 0x128) * fVar14) -
             *(float *)(lVar5 + 300) * fVar13) * *(float *)(lVar5 + 0x250);
    fVar22 = ((*(float *)(lVar5 + 0x134) * fVar17 - *(float *)(lVar5 + 0x138) * fVar14) -
             *(float *)(lVar5 + 0x13c) * fVar13) * *(float *)(lVar5 + 0x254);
    fVar17 = ((*(float *)(lVar5 + 0x144) * fVar17 - *(float *)(lVar5 + 0x148) * fVar14) -
             *(float *)(lVar5 + 0x14c) * fVar13) * *(float *)(lVar5 + 600);
  }
  fVar23 = 0.0;
  fVar24 = 0.0;
  *(float *)(param_1 + 0x50) = fVar18;
  *(float *)(param_1 + 0x54) = fVar22;
  *(float *)(param_1 + 0x58) = fVar17;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (lVar6 != 0) {
    fVar24 = *(float *)(lVar6 + 0x174) +
             (fVar20 * *(float *)(param_7 + 8) - fVar21 * *(float *)(param_7 + 4)) *
             *(float *)(param_4 + 0x40) +
             (fVar21 * *(float *)param_7 - *(float *)(param_7 + 8) * fVar19) *
             *(float *)(param_4 + 0x44) +
             (*(float *)(param_7 + 4) * fVar19 - fVar20 * *(float *)param_7) *
             *(float *)(param_4 + 0x48);
  }
  if (lVar5 != 0) {
    fVar23 = *(float *)(lVar5 + 0x174) +
             (*(float *)(param_8 + 4) * fVar17 - *(float *)(param_8 + 8) * fVar22) *
             *(float *)(param_4 + 0x40) +
             (*(float *)(param_8 + 8) * fVar18 - *(float *)param_8 * fVar17) *
             *(float *)(param_4 + 0x44) +
             (*(float *)param_8 * fVar22 - *(float *)(param_8 + 4) * fVar18) *
             *(float *)(param_4 + 0x48);
  }
  *(float *)(param_1 + 0x6c) = *param_6 / (fVar24 + fVar23);
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_4 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(param_1 + 0x10) = uVar16;
    *(float *)param_1 = fVar11;
    *(float *)(param_1 + 4) = fVar12;
    *(float *)(param_1 + 8) = fVar10;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    fVar10 = *(float *)(param_4 + 0x40);
    fVar11 = *(float *)(param_4 + 0x44);
    fVar12 = *(float *)(param_4 + 0x48);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(float *)(param_1 + 0x20) = -fVar15;
    *(float *)(param_1 + 0x24) = -fVar14;
    *(float *)(param_1 + 0x28) = -fVar13;
    *(float *)(param_1 + 0x30) = -fVar10;
    *(float *)(param_1 + 0x34) = -fVar11;
    *(float *)(param_1 + 0x38) = -fVar12;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  fVar10 = *(float *)(param_4 + 0x50);
  fVar11 = *(float *)(param_5 + 0x38);
  fVar12 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar13 = 0.0;
  if (lVar6 != 0) {
    fVar13 = (float)((ulong)*(undefined8 *)(lVar6 + 0x168) >> 0x20);
    fVar20 = (float)*(undefined8 *)(lVar6 + 0x168);
    fVar21 = (fVar20 * *(float *)(param_7 + 8) - fVar13 * *(float *)(param_7 + 4)) +
             (float)*(undefined8 *)(lVar6 + 0x154);
    fVar13 = (fVar13 * *(float *)param_7 - *(float *)(lVar6 + 0x164) * *(float *)(param_7 + 8)) +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x154) >> 0x20);
    fVar20 = (*(float *)(param_7 + 4) * *(float *)(lVar6 + 0x164) - *(float *)param_7 * fVar20) +
             *(float *)(lVar6 + 0x15c);
  }
  if (lVar5 != 0) {
    fVar18 = (float)((ulong)*(undefined8 *)(lVar5 + 0x168) >> 0x20);
    fVar19 = (float)*(undefined8 *)(lVar5 + 0x168);
    fVar12 = (fVar19 * *(float *)(param_8 + 8) - fVar18 * *(float *)(param_8 + 4)) +
             (float)*(undefined8 *)(lVar5 + 0x154);
    fVar18 = (fVar18 * *(float *)param_8 - *(float *)(lVar5 + 0x164) * *(float *)(param_8 + 8)) +
             (float)((ulong)*(undefined8 *)(lVar5 + 0x154) >> 0x20);
    fVar19 = (*(float *)(param_8 + 4) * *(float *)(lVar5 + 0x164) - *(float *)param_8 * fVar19) +
             *(float *)(lVar5 + 0x15c);
  }
  fVar14 = *(float *)(param_4 + 0x48);
  uVar16 = *(undefined8 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x54);
  fVar18 = (fVar21 - fVar12) * (float)uVar16 + (fVar13 - fVar18) * (float)((ulong)uVar16 >> 0x20) +
           (fVar20 - fVar19) * fVar14;
  lVar8 = (long)param_2;
  lVar7 = (long)param_3;
  fVar12 = 0.0;
  if (fVar18 * *(float *)(param_4 + 0x5c) < -0.0) {
    fVar12 = -(fVar18 * *(float *)(param_4 + 0x5c));
  }
  if (((byte)param_5[0x40] >> 2 & 1) == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    fVar18 = *(float *)(param_4 + 0x7c) * *(float *)(param_5 + 0x3c);
    *(float *)(param_1 + 100) = fVar18;
    if ((lVar6 != 0) && (*plVar4 != 0)) {
      lVar9 = lVar1 + lVar8 * 0xf8;
      fVar19 = *(float *)(param_1 + 0x14);
      fVar20 = *(float *)(param_1 + 0x18);
      fVar21 = *(float *)(lVar6 + 0x17c);
      fVar13 = *(float *)(lVar6 + 0x180);
      *(float *)(lVar9 + 0x40) =
           fVar18 * *(float *)(param_1 + 0x10) * *(float *)(lVar9 + 0x80) *
                    *(float *)(lVar6 + 0x178) * *(float *)(lVar9 + 0x70) + *(float *)(lVar9 + 0x40);
      *(float *)(lVar9 + 0x44) =
           fVar18 * fVar19 * *(float *)(lVar9 + 0x84) * fVar21 * *(float *)(lVar9 + 0x74) +
           *(float *)(lVar9 + 0x44);
      *(float *)(lVar9 + 0x48) =
           fVar18 * fVar20 * *(float *)(lVar9 + 0x88) * fVar13 * *(float *)(lVar9 + 0x78) +
           *(float *)(lVar9 + 0x48);
      fVar19 = *(float *)(param_1 + 0x44);
      fVar20 = *(float *)(param_1 + 0x48);
      *(float *)(lVar9 + 0x50) =
           fVar18 * *(float *)(lVar9 + 0x60) * *(float *)(param_1 + 0x40) + *(float *)(lVar9 + 0x50)
      ;
      *(float *)(lVar9 + 0x54) =
           fVar18 * *(float *)(lVar9 + 100) * fVar19 + *(float *)(lVar9 + 0x54);
      *(float *)(lVar9 + 0x58) =
           fVar18 * *(float *)(lVar9 + 0x68) * fVar20 + *(float *)(lVar9 + 0x58);
    }
    if ((lVar5 != 0) && (*plVar2 != 0)) {
      lVar6 = lVar1 + lVar7 * 0xf8;
      fVar20 = *(float *)(param_1 + 0x30);
      fVar21 = *(float *)(param_1 + 0x34);
      fVar13 = *(float *)(lVar5 + 0x17c);
      fVar18 = *(float *)(param_1 + 100);
      fVar15 = *(float *)(param_1 + 0x38);
      fVar19 = *(float *)(lVar5 + 0x178);
      fVar22 = *(float *)(lVar5 + 0x180);
      fVar14 = *(float *)(param_1 + 0x58);
      fVar17 = -fVar18;
      fVar23 = *(float *)(param_1 + 0x54);
      *(float *)(lVar6 + 0x50) =
           *(float *)(lVar6 + 0x50) - *(float *)(param_1 + 0x50) * *(float *)(lVar6 + 0x60) * fVar17
      ;
      *(float *)(lVar6 + 0x54) =
           *(float *)(lVar6 + 0x54) - fVar23 * *(float *)(lVar6 + 100) * fVar17;
      *(float *)(lVar6 + 0x58) =
           *(float *)(lVar6 + 0x58) - fVar14 * *(float *)(lVar6 + 0x68) * fVar17;
      *(float *)(lVar6 + 0x40) =
           fVar18 * fVar20 * *(float *)(lVar6 + 0x80) * fVar19 * *(float *)(lVar6 + 0x70) +
           *(float *)(lVar6 + 0x40);
      *(float *)(lVar6 + 0x44) =
           fVar18 * fVar21 * *(float *)(lVar6 + 0x84) * fVar13 * *(float *)(lVar6 + 0x74) +
           *(float *)(lVar6 + 0x44);
      *(float *)(lVar6 + 0x48) =
           fVar18 * fVar15 * *(float *)(lVar6 + 0x88) * fVar22 * *(float *)(lVar6 + 0x78) +
           *(float *)(lVar6 + 0x48);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  fVar18 = 0.0;
  fVar21 = 0.0;
  fVar13 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (*plVar4 != 0) {
    lVar5 = lVar1 + lVar8 * 0xf8;
    fVar13 = *(float *)(lVar5 + 0xd4);
    fVar19 = *(float *)(lVar5 + 0xd8);
    fVar21 = *(float *)(lVar5 + 0xd0);
    fVar15 = *(float *)(lVar5 + 0xe0);
    fVar14 = *(float *)(lVar5 + 0xe4);
    fVar20 = *(float *)(lVar5 + 0xe8);
  }
  fVar25 = 0.0;
  fVar22 = 0.0;
  fVar17 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  if (*plVar2 != 0) {
    lVar5 = lVar1 + lVar7 * 0xf8;
    fVar25 = *(float *)(lVar5 + 0xd4);
    fVar22 = *(float *)(lVar5 + 0xd8);
    fVar18 = *(float *)(lVar5 + 0xd0);
    fVar24 = *(float *)(lVar5 + 0xe0);
    fVar23 = *(float *)(lVar5 + 0xe4);
    fVar17 = *(float *)(lVar5 + 0xe8);
  }
  lVar5 = lVar1 + lVar8 * 0xf8;
  fVar10 = fVar10 + fVar11;
  lVar1 = lVar1 + lVar7 * 0xf8;
  if ((*(int *)(param_5 + 0x2c) == 0) || (*(float *)(param_5 + 0x30) < fVar10)) {
    pbVar3 = param_5 + 0x20;
  }
  else {
    pbVar3 = param_5 + 0x24;
  }
  fVar12 = fVar12 - ((*(float *)(lVar5 + 0xb0) + fVar21) * *(float *)(param_1 + 0x10) +
                     (*(float *)(lVar5 + 0xb4) + fVar13) * *(float *)(param_1 + 0x14) +
                     (*(float *)(lVar5 + 0xb8) + fVar19) * *(float *)(param_1 + 0x18) +
                     (fVar15 + *(float *)(lVar5 + 0xc0)) * *(float *)param_1 +
                     (fVar14 + *(float *)(lVar5 + 0xc4)) * *(float *)(param_1 + 4) +
                     (fVar20 + *(float *)(lVar5 + 200)) * *(float *)(param_1 + 8) +
                    (*(float *)(lVar1 + 0xb0) + fVar18) * *(float *)(param_1 + 0x30) +
                    (*(float *)(lVar1 + 0xb4) + fVar25) * *(float *)(param_1 + 0x34) +
                    (*(float *)(lVar1 + 0xb8) + fVar22) * *(float *)(param_1 + 0x38) +
                    (fVar24 + *(float *)(lVar1 + 0xc0)) * *(float *)(param_1 + 0x20) +
                    (fVar23 + *(float *)(lVar1 + 0xc4)) * *(float *)(param_1 + 0x24) +
                    (fVar17 + *(float *)(lVar1 + 200)) * *(float *)(param_1 + 0x28));
  if (fVar10 <= 0.0) {
    fVar11 = -(fVar10 * *(float *)pbVar3) / *(float *)(param_5 + 0xc);
  }
  else {
    fVar12 = fVar12 - fVar10 / *(float *)(param_5 + 0xc);
    fVar11 = 0.0;
  }
  fVar11 = fVar11 * *(float *)(param_1 + 0x6c);
  fVar12 = fVar12 * *(float *)(param_1 + 0x6c);
  if ((*(int *)(param_5 + 0x2c) == 0) || (*(float *)(param_5 + 0x30) < fVar10)) {
    fVar12 = fVar11 + fVar12;
    fVar11 = 0.0;
  }
  *(float *)(param_1 + 0x70) = fVar12;
  *(float *)(param_1 + 0x80) = fVar11;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x501502f9;
  return;
}

