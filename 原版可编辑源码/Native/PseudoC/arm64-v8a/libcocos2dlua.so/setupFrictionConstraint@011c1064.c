
/* btSequentialImpulseConstraintSolver::setupFrictionConstraint(btSolverConstraint&, btVector3
   const&, int, int, btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*,
   btCollisionObject*, float, float, float) */

void btSequentialImpulseConstraintSolver::setupFrictionConstraint
               (btSolverConstraint *param_1,btVector3 *param_2,int param_3,int param_4,
               btManifoldPoint *param_5,btVector3 *param_6,btVector3 *param_7,
               btCollisionObject *param_8,btCollisionObject *param_9,float param_10,float param_11,
               float param_12)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  iVar3 = (int)param_5;
  pfVar2 = (float *)(ulong)(uint)param_3;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(lVar4 + (long)param_4 * 0xf8 + 0xf0);
  lVar5 = *(long *)(lVar4 + (long)iVar3 * 0xf8 + 0xf0);
  *(int *)(param_2 + 0x98) = param_4;
  *(int *)(param_2 + 0x9c) = iVar3;
  fVar1 = *(float *)(param_6 + 0x54);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(float *)(param_2 + 0x68) = fVar1;
  if (lVar6 == 0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar7 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar11 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    uVar8 = *(undefined8 *)pfVar2;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(pfVar2 + 2);
    *(undefined8 *)(param_2 + 0x10) = uVar8;
    fVar9 = *(float *)(param_7 + 4);
    fVar10 = *(float *)(param_7 + 8);
    fVar13 = *(float *)(param_2 + 0x14);
    fVar7 = *(float *)(param_2 + 0x18);
    fVar14 = *(float *)(param_2 + 0x10);
    fVar11 = *(float *)param_7;
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar12 = fVar9 * fVar7 - fVar10 * fVar13;
    fVar10 = fVar10 * fVar14 - fVar7 * fVar11;
    fVar9 = fVar13 * fVar11 - fVar9 * fVar14;
    *(float *)param_2 = fVar12;
    *(float *)(param_2 + 4) = fVar10;
    *(float *)(param_2 + 8) = fVar9;
    fVar11 = (fVar12 * *(float *)(lVar6 + 0x124) + fVar10 * *(float *)(lVar6 + 0x128) +
             fVar9 * *(float *)(lVar6 + 300)) * *(float *)(lVar6 + 0x250);
    fVar23 = (fVar12 * *(float *)(lVar6 + 0x134) + fVar10 * *(float *)(lVar6 + 0x138) +
             fVar9 * *(float *)(lVar6 + 0x13c)) * *(float *)(lVar6 + 0x254);
    fVar22 = (fVar12 * *(float *)(lVar6 + 0x144) + fVar10 * *(float *)(lVar6 + 0x148) +
             fVar9 * *(float *)(lVar6 + 0x14c)) * *(float *)(lVar6 + 600);
    *(float *)(param_2 + 0x40) = fVar11;
    *(float *)(param_2 + 0x44) = fVar23;
    *(float *)(param_2 + 0x48) = fVar22;
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  if (lVar5 == 0) {
    fVar16 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    fVar21 = 0.0;
    fVar18 = 0.0;
    fVar24 = 0.0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    fVar25 = 0.0;
  }
  else {
    fVar16 = *pfVar2;
    fVar18 = pfVar2[1];
    fVar19 = pfVar2[2];
    *(undefined4 *)(param_2 + 0x3c) = 0;
    fVar21 = -fVar16;
    fVar17 = -fVar18;
    fVar15 = -fVar19;
    *(float *)(param_2 + 0x30) = fVar21;
    *(float *)(param_2 + 0x34) = fVar17;
    *(float *)(param_2 + 0x38) = fVar15;
    fVar24 = *(float *)(param_8 + 4);
    fVar25 = *(float *)(param_8 + 8);
    fVar26 = *(float *)param_8;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    fVar20 = fVar25 * fVar18 - fVar24 * fVar19;
    fVar19 = fVar26 * fVar19 - fVar25 * fVar16;
    fVar16 = fVar24 * fVar16 - fVar26 * fVar18;
    *(float *)(param_2 + 0x20) = fVar20;
    *(float *)(param_2 + 0x24) = fVar19;
    *(float *)(param_2 + 0x28) = fVar16;
    fVar25 = (fVar20 * *(float *)(lVar5 + 0x124) + fVar19 * *(float *)(lVar5 + 0x128) +
             fVar16 * *(float *)(lVar5 + 300)) * *(float *)(lVar5 + 0x250);
    fVar24 = (fVar20 * *(float *)(lVar5 + 0x134) + fVar19 * *(float *)(lVar5 + 0x138) +
             fVar16 * *(float *)(lVar5 + 0x13c)) * *(float *)(lVar5 + 0x254);
    fVar18 = (fVar20 * *(float *)(lVar5 + 0x144) + fVar19 * *(float *)(lVar5 + 0x148) +
             fVar16 * *(float *)(lVar5 + 0x14c)) * *(float *)(lVar5 + 600);
    *(float *)(param_2 + 0x50) = fVar25;
    *(float *)(param_2 + 0x54) = fVar24;
    *(float *)(param_2 + 0x58) = fVar18;
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  fVar26 = 0.0;
  fVar27 = 0.0;
  if (lVar6 != 0) {
    fVar27 = *(float *)(lVar6 + 0x174) +
             (fVar23 * *(float *)(param_7 + 8) - fVar22 * *(float *)(param_7 + 4)) * *pfVar2 +
             (fVar22 * *(float *)param_7 - *(float *)(param_7 + 8) * fVar11) * pfVar2[1] +
             (*(float *)(param_7 + 4) * fVar11 - fVar23 * *(float *)param_7) * pfVar2[2];
  }
  if (lVar5 != 0) {
    fVar26 = *(float *)(lVar5 + 0x174) +
             (*(float *)(param_8 + 4) * fVar18 - *(float *)(param_8 + 8) * fVar24) * *pfVar2 +
             (*(float *)(param_8 + 8) * fVar25 - *(float *)param_8 * fVar18) * pfVar2[1] +
             (*(float *)param_8 * fVar24 - *(float *)(param_8 + 4) * fVar25) * pfVar2[2];
  }
  fVar11 = param_10 / (fVar27 + fVar26);
  *(float *)(param_2 + 0x6c) = fVar11;
  if (lVar6 == 0) {
    fVar23 = 0.0;
    fVar18 = 0.0;
    fVar7 = fVar14 * 0.0 + fVar13 * 0.0 + fVar7 * 0.0;
    fVar22 = 0.0;
  }
  else {
    lVar6 = lVar4 + (long)param_4 * 0xf8;
    fVar22 = *(float *)(lVar6 + 0xc0);
    fVar18 = *(float *)(lVar6 + 0xc4);
    fVar23 = *(float *)(lVar6 + 200);
    fVar7 = (*(float *)(lVar6 + 0xb0) + *(float *)(lVar6 + 0xd0)) * fVar14 +
            (*(float *)(lVar6 + 0xb4) + *(float *)(lVar6 + 0xd4)) * fVar13 +
            (*(float *)(lVar6 + 0xb8) + *(float *)(lVar6 + 0xd8)) * fVar7;
  }
  if (lVar5 == 0) {
    fVar13 = 0.0;
    fVar24 = 0.0;
    fVar14 = fVar21 * 0.0 + fVar17 * 0.0 + fVar15 * 0.0;
    fVar25 = 0.0;
  }
  else {
    lVar4 = lVar4 + (long)iVar3 * 0xf8;
    fVar25 = *(float *)(lVar4 + 0xc0);
    fVar24 = *(float *)(lVar4 + 0xc4);
    fVar13 = *(float *)(lVar4 + 200);
    fVar14 = (*(float *)(lVar4 + 0xb0) + *(float *)(lVar4 + 0xd0)) * fVar21 +
             (*(float *)(lVar4 + 0xb4) + *(float *)(lVar4 + 0xd4)) * fVar17 +
             (*(float *)(lVar4 + 0xb8) + *(float *)(lVar4 + 0xd8)) * fVar15;
  }
  *(float *)(param_2 + 0x74) = param_12;
  *(float *)(param_2 + 0x78) = -fVar1;
  *(float *)(param_2 + 0x70) =
       fVar11 * (param_11 -
                (fVar7 + fVar22 * fVar12 + fVar18 * fVar10 + fVar23 * fVar9 +
                fVar14 + fVar25 * fVar20 + fVar24 * fVar19 + fVar13 * fVar16));
  *(float *)(param_2 + 0x7c) = fVar1;
  return;
}

