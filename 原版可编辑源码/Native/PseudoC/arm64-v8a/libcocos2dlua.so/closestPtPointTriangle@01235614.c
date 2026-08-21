
/* btVoronoiSimplexSolver::closestPtPointTriangle(btVector3 const&, btVector3 const&, btVector3
   const&, btVector3 const&, btSubSimplexClosestResult&) */

undefined8 __thiscall
btVoronoiSimplexSolver::closestPtPointTriangle
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btSubSimplexClosestResult *param_5)

{
  btSubSimplexClosestResult bVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  bVar1 = (btSubSimplexClosestResult)((byte)param_5[0x10] & 0xf0);
  param_5[0x10] = bVar1;
  fVar13 = *(float *)param_3;
  fVar14 = *(float *)(param_3 + 4);
  fVar5 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar24 = *(float *)param_1;
  fVar26 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_2 + 8);
  fVar16 = *(float *)param_4;
  fVar17 = *(float *)(param_4 + 4);
  fVar27 = *(float *)(param_1 + 8);
  fVar18 = *(float *)(param_4 + 8);
  fVar12 = fVar13 - fVar5;
  fVar11 = fVar14 - fVar2;
  fVar10 = fVar15 - fVar6;
  fVar9 = fVar16 - fVar5;
  fVar8 = fVar17 - fVar2;
  fVar7 = fVar18 - fVar6;
  fVar21 = fVar12 * (fVar24 - fVar5) + fVar11 * (fVar26 - fVar2) + fVar10 * (fVar27 - fVar6);
  fVar19 = fVar9 * (fVar24 - fVar5) + fVar8 * (fVar26 - fVar2) + fVar7 * (fVar27 - fVar6);
  if ((0.0 < fVar21) || (0.0 < fVar19)) {
    fVar22 = fVar12 * (fVar24 - fVar13) + fVar11 * (fVar26 - fVar14) + fVar10 * (fVar27 - fVar15);
    fVar23 = fVar9 * (fVar24 - fVar13) + fVar8 * (fVar26 - fVar14) + fVar7 * (fVar27 - fVar15);
    if ((0.0 <= fVar22) && (fVar23 <= fVar22)) {
      uVar4 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)param_3;
      bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 2);
      fVar21 = 1.0;
      fVar13 = 0.0;
      goto LAB_01235708;
    }
    fVar20 = fVar21 * fVar23 - fVar22 * fVar19;
    if (((0.0 < fVar22) || (fVar21 < 0.0)) || (0.0 < fVar20)) {
      fVar25 = fVar9 * (fVar24 - fVar16) + fVar8 * (fVar26 - fVar17) + fVar7 * (fVar27 - fVar18);
      fVar24 = fVar12 * (fVar24 - fVar16) + fVar11 * (fVar26 - fVar17) + fVar10 * (fVar27 - fVar18);
      if ((fVar25 < 0.0) || (fVar25 < fVar24)) {
        fVar21 = fVar24 * fVar19 - fVar21 * fVar25;
        if (((0.0 < fVar25) || (fVar19 < 0.0)) || (0.0 < fVar21)) {
          fVar19 = fVar22 * fVar25 - fVar24 * fVar23;
          if (((0.0 < fVar19) || (fVar23 = fVar23 - fVar22, fVar23 < 0.0)) ||
             (fVar24 - fVar25 < 0.0)) {
            fVar19 = 1.0 / (fVar20 + fVar19 + fVar21);
            fVar21 = fVar21 * fVar19;
            fVar19 = fVar20 * fVar19;
            fVar13 = (1.0 - fVar21) - fVar19;
            *(undefined4 *)(param_5 + 0xc) = 0;
            param_5[0x10] = (btSubSimplexClosestResult)((byte)bVar1 | 7);
            *(float *)param_5 = fVar9 * fVar19 + fVar12 * fVar21 + fVar5;
            *(float *)(param_5 + 4) = fVar8 * fVar19 + fVar11 * fVar21 + fVar2;
            *(float *)(param_5 + 8) = fVar7 * fVar19 + fVar10 * fVar21 + fVar6;
          }
          else {
            fVar19 = fVar23 / (fVar23 + (fVar24 - fVar25));
            fVar21 = 1.0 - fVar19;
            *(undefined4 *)(param_5 + 0xc) = 0;
            param_5[0x10] = (btSubSimplexClosestResult)((byte)bVar1 | 6);
            *(float *)param_5 = fVar13 + (fVar16 - fVar13) * fVar19;
            *(float *)(param_5 + 4) = fVar14 + (fVar17 - fVar14) * fVar19;
            *(float *)(param_5 + 8) = fVar15 + (fVar18 - fVar15) * fVar19;
            fVar13 = 0.0;
          }
        }
        else {
          fVar19 = fVar19 / (fVar19 - fVar25);
          *(undefined4 *)(param_5 + 0xc) = 0;
          param_5[0x10] = (btSubSimplexClosestResult)((byte)bVar1 | 5);
          fVar13 = 1.0 - fVar19;
          *(float *)param_5 = fVar5 + fVar9 * fVar19;
          *(float *)(param_5 + 4) = fVar2 + fVar8 * fVar19;
          *(float *)(param_5 + 8) = fVar6 + fVar7 * fVar19;
          fVar21 = 0.0;
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_4 + 8);
        uVar3 = *(undefined8 *)param_4;
        fVar19 = 1.0;
        fVar13 = 0.0;
        param_5[0x10] = (btSubSimplexClosestResult)((byte)bVar1 | 4);
        *(undefined8 *)(param_5 + 8) = uVar4;
        *(undefined8 *)param_5 = uVar3;
        fVar21 = 0.0;
      }
      goto LAB_01235714;
    }
    fVar21 = fVar21 / (fVar21 - fVar22);
    *(undefined4 *)(param_5 + 0xc) = 0;
    param_5[0x10] = (btSubSimplexClosestResult)((byte)bVar1 | 3);
    fVar13 = 1.0 - fVar21;
    *(float *)param_5 = fVar5 + fVar12 * fVar21;
    *(float *)(param_5 + 4) = fVar2 + fVar11 * fVar21;
    *(float *)(param_5 + 8) = fVar6 + fVar10 * fVar21;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 1);
    fVar21 = 0.0;
    fVar13 = 1.0;
LAB_01235708:
    param_5[0x10] = bVar1;
    *(undefined8 *)(param_5 + 8) = uVar4;
    *(undefined8 *)param_5 = uVar3;
  }
  fVar19 = 0.0;
LAB_01235714:
  *(float *)(param_5 + 0x14) = fVar13;
  *(float *)(param_5 + 0x18) = fVar21;
  *(float *)(param_5 + 0x1c) = fVar19;
  *(undefined4 *)(param_5 + 0x20) = 0;
  return 1;
}

