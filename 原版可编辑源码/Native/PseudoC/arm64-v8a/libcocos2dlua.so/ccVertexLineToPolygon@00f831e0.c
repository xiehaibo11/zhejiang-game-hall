
/* cocos2d::ccVertexLineToPolygon(cocos2d::Vec2*, float, cocos2d::Vec2*, unsigned int, unsigned int)
    */

void cocos2d::ccVertexLineToPolygon
               (Vec2 *param_1,float param_2,Vec2 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
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
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  uVar2 = param_5 + param_4;
  if (1 < uVar2) {
    uVar5 = (ulong)param_4;
    uVar3 = uVar2 - 1;
    if (param_4 < uVar2) {
      pfVar7 = (float *)(param_1 + uVar5 * 8);
      uVar8 = param_4 << 1;
      pfVar6 = pfVar7 + 2;
      fVar16 = *pfVar7;
      fVar17 = pfVar7[1];
      if (uVar5 != 0) goto LAB_00f832ec;
LAB_00f83280:
      local_b0 = fVar16 - *(float *)(param_1 + 8);
      fVar13 = fVar17 - *(float *)(param_1 + 0xc);
      do {
        fStack_ac = fVar13;
        fVar9 = (float)Vec2::getNormalized((Vec2 *)&local_b0);
        fVar13 = -fVar13;
        pfVar7 = pfVar6;
        while( true ) {
          fVar13 = param_2 * 0.5 * fVar13;
          fVar9 = param_2 * 0.5 * fVar9;
          *(float *)(param_3 + (ulong)uVar8 * 8) = fVar13 + fVar16;
          *(float *)((long)(param_3 + (ulong)uVar8 * 8) + 4) = fVar9 + fVar17;
          uVar1 = uVar8 + 1;
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar7 + 2;
          uVar8 = uVar8 + 2;
          *(float *)(param_3 + (ulong)uVar1 * 8) = fVar16 - fVar13;
          *(float *)((long)(param_3 + (ulong)uVar1 * 8) + 4) = fVar17 - fVar9;
          if (uVar2 == uVar5) goto LAB_00f83404;
          fVar16 = *pfVar7;
          fVar17 = pfVar7[1];
          if (uVar5 == 0) goto LAB_00f83280;
LAB_00f832ec:
          if (uVar3 == uVar5) break;
          fVar9 = *pfVar6;
          fVar13 = pfVar6[1];
          fVar19 = *(float *)(param_1 + (ulong)((int)uVar5 - 1) * 8);
          fVar18 = *(float *)((long)(param_1 + (ulong)((int)uVar5 - 1) * 8) + 4);
          local_b0 = fVar9 - fVar16;
          fVar14 = fVar13 - fVar17;
          fStack_ac = fVar14;
          fVar10 = (float)Vec2::getNormalized((Vec2 *)&local_b0);
          local_b0 = fVar19 - fVar16;
          fVar15 = fVar18 - fVar17;
          fStack_ac = fVar15;
          fVar11 = (float)Vec2::getNormalized((Vec2 *)&local_b0);
          fVar12 = acosf(fVar10 * fVar11 + fVar14 * fVar15);
          pfVar7 = pfVar6;
          if (1.2217305 <= fVar12) {
            if (2.9670596 <= fVar12) {
              local_b0 = fVar9 - fVar19;
              fVar13 = fVar13 - fVar18;
              goto LAB_00f833ec;
            }
            local_b0 = (fVar10 + fVar11) * 0.5;
            fVar9 = (fVar14 + fVar15) * 0.5;
            fStack_ac = fVar9;
            fVar13 = (float)Vec2::getNormalized((Vec2 *)&local_b0);
          }
          else {
            local_b0 = (fVar10 + fVar11) * 0.5;
            fVar13 = (fVar14 + fVar15) * 0.5;
LAB_00f833ec:
            fStack_ac = fVar13;
            fVar9 = (float)Vec2::getNormalized((Vec2 *)&local_b0);
            fVar13 = -fVar13;
          }
        }
        local_b0 = *(float *)(param_1 + (ulong)(uVar2 - 2) * 8) - fVar16;
        fVar13 = *(float *)((long)(param_1 + (ulong)(uVar2 - 2) * 8) + 4) - fVar17;
      } while( true );
    }
LAB_00f83404:
    uVar2 = 0;
    if (param_4 != 0) {
      uVar2 = param_4 - 1;
    }
    if (uVar2 < uVar3) {
      uVar5 = (ulong)uVar2;
      uVar2 = uVar2 * 2;
      do {
        pfVar7 = (float *)(param_3 + (ulong)(uVar2 + 2) * 8);
        fVar11 = *(float *)(param_3 + (ulong)uVar2 * 8);
        fVar10 = *(float *)((long)(param_3 + (ulong)uVar2 * 8) + 4);
        pfVar6 = (float *)(param_3 + (ulong)(uVar2 + 3) * 8);
        fVar16 = *pfVar7;
        fVar12 = *(float *)(param_3 + (ulong)(uVar2 + 1) * 8);
        fVar14 = *(float *)((long)(param_3 + (ulong)(uVar2 + 1) * 8) + 4);
        fVar17 = pfVar7[1];
        fVar13 = *pfVar6;
        fVar9 = pfVar6[1];
        if (((fVar11 == fVar13) && (fVar10 == fVar9)) || ((fVar12 == fVar16 && (fVar14 == fVar17))))
        {
LAB_00f834e0:
          *pfVar7 = fVar13;
          pfVar7[1] = fVar9;
          *pfVar6 = fVar16;
          pfVar6[1] = fVar17;
        }
        else {
          fVar18 = fVar13 - fVar11;
          fVar19 = fVar9 - fVar10;
          fVar14 = fVar14 - fVar10;
          fVar15 = SQRT(fVar18 * fVar18 + fVar19 * fVar19);
          fVar12 = fVar12 - fVar11;
          fVar18 = fVar18 / fVar15;
          fVar19 = fVar19 / fVar15;
          fVar20 = fVar14 * fVar18 - fVar12 * fVar19;
          fVar21 = (fVar17 - fVar10) * fVar18 - (fVar16 - fVar11) * fVar19;
          if (((fVar20 == fVar21) ||
              (fVar10 = (fVar16 - fVar11) * fVar18 + (fVar17 - fVar10) * fVar19,
              fVar15 = (fVar10 + (fVar21 * ((fVar12 * fVar18 + fVar14 * fVar19) - fVar10)) /
                                 (fVar21 - fVar20)) / fVar15, fVar15 < 0.0)) || (1.0 < fVar15))
          goto LAB_00f834e0;
        }
        uVar5 = uVar5 + 1;
        uVar2 = uVar2 + 2;
      } while (uVar5 < uVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

