
/* btVoronoiSimplexSolver::closestPtPointTetrahedron(btVector3 const&, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, btSubSimplexClosestResult&) */

undefined8 __thiscall
btVoronoiSimplexSolver::closestPtPointTetrahedron
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5,btSubSimplexClosestResult *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
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
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  byte local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  
  local_b8 = 0;
  uVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(param_6 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_6 = uVar7;
  param_6[0x10] = (btSubSimplexClosestResult)((byte)param_6[0x10] | 0xf);
  fVar6 = *(float *)param_3;
  fVar8 = *(float *)(param_3 + 4);
  fVar10 = *(float *)param_2;
  fVar9 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_3 + 8);
  fVar14 = *(float *)(param_2 + 8);
  fVar30 = fVar6 - fVar10;
  fVar28 = fVar8 - fVar9;
  fVar16 = fVar12 - fVar14;
  fVar31 = *(float *)param_4 - fVar10;
  fVar29 = *(float *)(param_4 + 4) - fVar9;
  fVar17 = *(float *)(param_4 + 8) - fVar14;
  fVar25 = *(float *)(param_1 + 4) - fVar9;
  fVar35 = *(float *)param_5 - fVar10;
  fVar34 = *(float *)(param_5 + 4) - fVar9;
  fVar32 = *(float *)(param_5 + 8) - fVar14;
  fVar18 = *(float *)param_5 - fVar6;
  fVar19 = *(float *)(param_5 + 4) - fVar8;
  fVar21 = *(float *)(param_5 + 8) - fVar12;
  fVar36 = *(float *)param_4 - fVar6;
  fVar38 = *(float *)(param_4 + 4) - fVar8;
  fVar39 = *(float *)(param_4 + 8) - fVar12;
  fVar33 = *(float *)param_1 - fVar10;
  fVar26 = *(float *)(param_1 + 8) - fVar14;
  fVar11 = fVar28 * fVar17 - fVar16 * fVar29;
  fVar15 = fVar16 * fVar31 - fVar30 * fVar17;
  fVar23 = fVar30 * fVar29 - fVar28 * fVar31;
  fVar20 = fVar29 * fVar32 - fVar17 * fVar34;
  fVar13 = fVar17 * fVar35 - fVar31 * fVar32;
  fVar24 = fVar31 * fVar34 - fVar29 * fVar35;
  fVar22 = fVar16 * fVar34 - fVar28 * fVar32;
  fVar27 = fVar30 * fVar32 - fVar16 * fVar35;
  fVar37 = fVar38 * fVar18 - fVar36 * fVar19;
  fVar19 = fVar39 * fVar19 - fVar38 * fVar21;
  fVar21 = fVar36 * fVar21 - fVar39 * fVar18;
  fVar9 = (fVar14 - fVar12) * fVar37 + (fVar10 - fVar6) * fVar19 + (fVar9 - fVar8) * fVar21;
  fVar10 = fVar11 * fVar35 + fVar15 * fVar34 + fVar23 * fVar32;
  fVar18 = fVar28 * fVar35 - fVar30 * fVar34;
  fVar14 = fVar16 * fVar24 + fVar30 * fVar20 + fVar28 * fVar13;
  fVar16 = fVar17 * fVar18 + fVar31 * fVar22 + fVar29 * fVar27;
  uVar2 = (uint)((fVar33 * fVar11 + fVar25 * fVar15 + fVar23 * fVar26) * fVar10 < 0.0);
  if (fVar10 * fVar10 < 9.999999e-09) {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uint)((fVar26 * fVar24 + fVar33 * fVar20 + fVar25 * fVar13) * fVar14 < 0.0);
  if (fVar14 * fVar14 < 9.999999e-09) {
    uVar3 = 0xffffffff;
  }
  uVar4 = (uint)((fVar26 * fVar18 + fVar33 * fVar22 + fVar25 * fVar27) * fVar16 < 0.0);
  if (fVar16 * fVar16 < 9.999999e-09) {
    uVar4 = 0xffffffff;
  }
  uVar5 = (uint)(((*(float *)(param_1 + 8) - fVar12) * fVar37 +
                 (*(float *)param_1 - fVar6) * fVar19 + (*(float *)(param_1 + 4) - fVar8) * fVar21)
                 * fVar9 < 0.0);
  if (fVar9 * fVar9 < 9.999999e-09) {
    uVar5 = 0xffffffff;
  }
  uVar1 = uVar3 | uVar2 | uVar4 | uVar5;
  if ((int)uVar1 < 0) {
    param_6[0x24] = (btSubSimplexClosestResult)0x1;
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar2 != 0) {
    this = (btVoronoiSimplexSolver *)
           closestPtPointTriangle
                     (this,param_1,param_2,param_3,param_4,(btSubSimplexClosestResult *)&local_c8);
    fVar6 = (local_c8 - *(float *)param_1) * (local_c8 - *(float *)param_1) +
            (fStack_c4 - *(float *)(param_1 + 4)) * (fStack_c4 - *(float *)(param_1 + 4)) +
            (local_c0 - *(float *)(param_1 + 8)) * (local_c0 - *(float *)(param_1 + 8));
    if (fVar6 < 3.4028235e+38) {
      *(float *)param_6 = local_c8;
      *(float *)(param_6 + 4) = fStack_c4;
      *(float *)(param_6 + 8) = local_c0;
      *(undefined4 *)(param_6 + 0xc) = local_bc;
      param_6[0x10] =
           (btSubSimplexClosestResult)
           ((byte)param_6[0x10] & 0xf0 | local_b8 & 1 | local_b8 & 2 | local_b8 & 4);
      *(ulong *)(param_6 + 0x14) = CONCAT44(uStack_b0,local_b4);
      *(undefined4 *)(param_6 + 0x1c) = local_ac;
      *(undefined4 *)(param_6 + 0x20) = 0;
      goto joined_r0x01235cac;
    }
  }
  fVar6 = 3.4028235e+38;
joined_r0x01235cac:
  if (uVar3 != 0) {
    this = (btVoronoiSimplexSolver *)
           closestPtPointTriangle
                     (this,param_1,param_2,param_4,param_5,(btSubSimplexClosestResult *)&local_c8);
    fVar9 = (local_c8 - *(float *)param_1) * (local_c8 - *(float *)param_1) +
            (fStack_c4 - *(float *)(param_1 + 4)) * (fStack_c4 - *(float *)(param_1 + 4)) +
            (local_c0 - *(float *)(param_1 + 8)) * (local_c0 - *(float *)(param_1 + 8));
    if (fVar9 < fVar6) {
      *(float *)param_6 = local_c8;
      *(float *)(param_6 + 4) = fStack_c4;
      *(float *)(param_6 + 8) = local_c0;
      *(undefined4 *)(param_6 + 0xc) = local_bc;
      param_6[0x10] =
           (btSubSimplexClosestResult)
           ((byte)param_6[0x10] & 0xf0 |
           local_b8 & 1 | (local_b8 >> 1 & 1) << 2 | (local_b8 >> 2 & 1) << 3);
      *(undefined4 *)(param_6 + 0x14) = local_b4;
      *(undefined4 *)(param_6 + 0x18) = 0;
      *(undefined4 *)(param_6 + 0x1c) = uStack_b0;
      *(undefined4 *)(param_6 + 0x20) = local_ac;
      fVar6 = fVar9;
    }
  }
  if (uVar4 != 0) {
    this = (btVoronoiSimplexSolver *)
           closestPtPointTriangle
                     (this,param_1,param_2,param_5,param_3,(btSubSimplexClosestResult *)&local_c8);
    fVar9 = (local_c8 - *(float *)param_1) * (local_c8 - *(float *)param_1) +
            (fStack_c4 - *(float *)(param_1 + 4)) * (fStack_c4 - *(float *)(param_1 + 4)) +
            (local_c0 - *(float *)(param_1 + 8)) * (local_c0 - *(float *)(param_1 + 8));
    if (fVar9 < fVar6) {
      *(float *)param_6 = local_c8;
      *(float *)(param_6 + 4) = fStack_c4;
      *(float *)(param_6 + 8) = local_c0;
      *(undefined4 *)(param_6 + 0xc) = local_bc;
      param_6[0x10] =
           (btSubSimplexClosestResult)
           ((byte)param_6[0x10] & 0xf0 | local_b8 & 1 | local_b8 >> 1 & 2 | (local_b8 >> 1 & 1) << 3
           );
      *(undefined4 *)(param_6 + 0x1c) = 0;
      *(undefined4 *)(param_6 + 0x20) = uStack_b0;
      *(undefined4 *)(param_6 + 0x14) = local_b4;
      *(undefined4 *)(param_6 + 0x18) = local_ac;
      fVar6 = fVar9;
    }
  }
  if ((uVar5 != 0) &&
     (closestPtPointTriangle
                (this,param_1,param_3,param_5,param_4,(btSubSimplexClosestResult *)&local_c8),
     (local_c8 - *(float *)param_1) * (local_c8 - *(float *)param_1) +
     (fStack_c4 - *(float *)(param_1 + 4)) * (fStack_c4 - *(float *)(param_1 + 4)) +
     (local_c0 - *(float *)(param_1 + 8)) * (local_c0 - *(float *)(param_1 + 8)) < fVar6)) {
    *(float *)param_6 = local_c8;
    *(float *)(param_6 + 4) = fStack_c4;
    *(float *)(param_6 + 8) = local_c0;
    *(undefined4 *)(param_6 + 0xc) = local_bc;
    param_6[0x10] =
         (btSubSimplexClosestResult)
         ((byte)param_6[0x10] & 0xf0 | local_b8 & 4 | (local_b8 & 1) << 1 | (local_b8 >> 1 & 1) << 3
         );
    *(undefined4 *)(param_6 + 0x14) = 0;
    *(undefined4 *)(param_6 + 0x18) = local_b4;
    *(undefined4 *)(param_6 + 0x1c) = local_ac;
    *(undefined4 *)(param_6 + 0x20) = uStack_b0;
  }
  return 1;
}

