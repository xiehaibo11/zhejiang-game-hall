
/* btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint(btSolverConstraint&,
   btVector3 const&, int, int, btManifoldPoint&, btVector3 const&, btVector3 const&,
   btCollisionObject*, btCollisionObject*, float, float, float) */

void btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint
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
  float fVar22;
  
  iVar3 = (int)param_5;
  pfVar2 = (float *)(ulong)(uint)param_3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x80000000;
  *(undefined8 *)(param_2 + 0x30) = 0x8000000080000000;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(lVar4 + (long)param_4 * 0xf8 + 0xf0);
  lVar5 = *(long *)(lVar4 + (long)iVar3 * 0xf8 + 0xf0);
  *(int *)(param_2 + 0x98) = param_4;
  *(int *)(param_2 + 0x9c) = iVar3;
  fVar1 = *(float *)(param_6 + 0x58);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(float *)(param_2 + 0x68) = fVar1;
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar7 = -fVar7;
  fVar8 = -fVar8;
  fVar9 = -fVar9;
  *(float *)param_2 = fVar7;
  *(float *)(param_2 + 4) = fVar8;
  *(float *)(param_2 + 8) = fVar9;
  if (lVar6 == 0) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar10 = (*(float *)(lVar6 + 0x124) * fVar7 + *(float *)(lVar6 + 0x128) * fVar8 +
             *(float *)(lVar6 + 300) * fVar9) * *(float *)(lVar6 + 0x250);
    fVar12 = (*(float *)(lVar6 + 0x134) * fVar7 + *(float *)(lVar6 + 0x138) * fVar8 +
             *(float *)(lVar6 + 0x13c) * fVar9) * *(float *)(lVar6 + 0x254);
    fVar11 = (*(float *)(lVar6 + 0x144) * fVar7 + *(float *)(lVar6 + 0x148) * fVar8 +
             *(float *)(lVar6 + 0x14c) * fVar9) * *(float *)(lVar6 + 600);
  }
  *(float *)(param_2 + 0x40) = fVar10;
  *(float *)(param_2 + 0x44) = fVar12;
  *(float *)(param_2 + 0x48) = fVar11;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  fVar11 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar10 = pfVar2[3];
  *(float *)(param_2 + 0x20) = fVar11;
  *(float *)(param_2 + 0x24) = fVar13;
  *(float *)(param_2 + 0x28) = fVar12;
  *(float *)(param_2 + 0x2c) = fVar10;
  if (lVar5 == 0) {
    fVar10 = 0.0;
    fVar17 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar10 = (fVar11 * *(float *)(lVar5 + 0x124) + fVar13 * *(float *)(lVar5 + 0x128) +
             fVar12 * *(float *)(lVar5 + 300)) * *(float *)(lVar5 + 0x250);
    fVar17 = (fVar11 * *(float *)(lVar5 + 0x134) + fVar13 * *(float *)(lVar5 + 0x138) +
             fVar12 * *(float *)(lVar5 + 0x13c)) * *(float *)(lVar5 + 0x254);
    fVar15 = (fVar11 * *(float *)(lVar5 + 0x144) + fVar13 * *(float *)(lVar5 + 0x148) +
             fVar12 * *(float *)(lVar5 + 0x14c)) * *(float *)(lVar5 + 600);
  }
  fVar14 = 0.0;
  fVar16 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  *(float *)(param_2 + 0x50) = fVar10;
  *(float *)(param_2 + 0x54) = fVar17;
  *(float *)(param_2 + 0x58) = fVar15;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (lVar6 != 0) {
    fVar16 = *(float *)(lVar6 + 0x124) * fVar7 + *(float *)(lVar6 + 0x128) * fVar8 +
             *(float *)(lVar6 + 300) * fVar9;
    fVar18 = *(float *)(lVar6 + 0x134) * fVar7 + *(float *)(lVar6 + 0x138) * fVar8 +
             *(float *)(lVar6 + 0x13c) * fVar9;
    fVar19 = *(float *)(lVar6 + 0x144) * fVar7 + *(float *)(lVar6 + 0x148) * fVar8 +
             *(float *)(lVar6 + 0x14c) * fVar9;
  }
  fVar10 = 0.0;
  fVar17 = 0.0;
  if (lVar5 != 0) {
    fVar14 = *(float *)(lVar5 + 0x124) * fVar11 + *(float *)(lVar5 + 0x128) * fVar13 +
             *(float *)(lVar5 + 300) * fVar12;
    fVar10 = fVar11 * *(float *)(lVar5 + 0x134) + fVar13 * *(float *)(lVar5 + 0x138) +
             fVar12 * *(float *)(lVar5 + 0x13c);
    fVar17 = fVar11 * *(float *)(lVar5 + 0x144) + fVar13 * *(float *)(lVar5 + 0x148) +
             fVar12 * *(float *)(lVar5 + 0x14c);
  }
  fVar15 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar10 = 1.0 / (fVar16 * fVar7 + fVar18 * fVar8 + fVar19 * fVar9 + 0.0 +
                 fVar14 * fVar11 + fVar10 * fVar13 + fVar17 * fVar12);
  fVar17 = 0.0;
  *(float *)(param_2 + 0x6c) = fVar10;
  if (lVar6 != 0) {
    lVar6 = lVar4 + (long)param_4 * 0xf8;
    fVar17 = *(float *)(lVar6 + 0xc0);
    fVar22 = *(float *)(lVar6 + 0xc4);
    fVar21 = *(float *)(lVar6 + 200);
    fVar20 = (*(float *)(lVar6 + 0xb0) + *(float *)(lVar6 + 0xd0)) * 0.0 +
             (*(float *)(lVar6 + 0xb4) + *(float *)(lVar6 + 0xd4)) * 0.0 +
             (*(float *)(lVar6 + 0xb8) + *(float *)(lVar6 + 0xd8)) * 0.0;
  }
  if (lVar5 == 0) {
    fVar14 = -0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
  }
  else {
    lVar4 = lVar4 + (long)iVar3 * 0xf8;
    fVar18 = *(float *)(lVar4 + 0xc0);
    fVar16 = *(float *)(lVar4 + 0xc4);
    fVar15 = *(float *)(lVar4 + 200);
    fVar14 = (*(float *)(lVar4 + 0xb0) + *(float *)(lVar4 + 0xd0)) * -0.0 +
             (*(float *)(lVar4 + 0xb4) + *(float *)(lVar4 + 0xd4)) * -0.0 +
             (*(float *)(lVar4 + 0xb8) + *(float *)(lVar4 + 0xd8)) * -0.0;
  }
  *(float *)(param_2 + 0x74) = param_12;
  *(float *)(param_2 + 0x78) = -fVar1;
  *(float *)(param_2 + 0x70) =
       fVar10 * (param_11 -
                (fVar20 + fVar17 * fVar7 + fVar22 * fVar8 + fVar21 * fVar9 +
                fVar14 + fVar18 * fVar11 + fVar16 * fVar13 + fVar15 * fVar12));
  *(float *)(param_2 + 0x7c) = fVar1;
  return;
}

