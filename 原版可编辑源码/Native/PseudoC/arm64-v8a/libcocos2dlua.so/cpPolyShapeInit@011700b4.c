
undefined8
cpPolyShapeInit(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
               float *param_5,float *param_6)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
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
  float afStack_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pfVar8 = (float *)((long)afStack_50 -
                    ((-(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3) +
                     0xf & 0xfffffffffffffff0));
  uVar3 = (uint)param_4;
  if (0 < (int)uVar3) {
    fVar9 = *param_6;
    fVar10 = param_6[1];
    fVar11 = param_6[2];
    fVar12 = param_6[3];
    fVar13 = param_6[4];
    fVar14 = param_6[5];
    if (uVar3 < 4) {
      lVar4 = 0;
    }
    else {
      lVar4 = (param_4 & 0xffffffff) - (ulong)(uVar3 & 3);
      lVar5 = lVar4;
      pfVar6 = pfVar8;
      pfVar7 = param_5;
      if (lVar4 != 0) {
        do {
          fVar15 = *pfVar7;
          fVar19 = pfVar7[1];
          fVar16 = pfVar7[2];
          fVar20 = pfVar7[3];
          fVar17 = pfVar7[4];
          fVar21 = pfVar7[5];
          fVar18 = pfVar7[6];
          fVar22 = pfVar7[7];
          lVar5 = lVar5 + -4;
          *pfVar6 = fVar13 + fVar15 * fVar9 + fVar19 * fVar11;
          pfVar6[1] = fVar14 + fVar15 * fVar10 + fVar19 * fVar12;
          pfVar6[2] = fVar13 + fVar16 * fVar9 + fVar20 * fVar11;
          pfVar6[3] = fVar14 + fVar16 * fVar10 + fVar20 * fVar12;
          pfVar6[4] = fVar13 + fVar17 * fVar9 + fVar21 * fVar11;
          pfVar6[5] = fVar14 + fVar17 * fVar10 + fVar21 * fVar12;
          pfVar6[6] = fVar13 + fVar18 * fVar9 + fVar22 * fVar11;
          pfVar6[7] = fVar14 + fVar18 * fVar10 + fVar22 * fVar12;
          pfVar6 = pfVar6 + 8;
          pfVar7 = pfVar7 + 8;
        } while (lVar5 != 0);
        if ((param_4 & 3) == 0) goto LAB_011701c0;
      }
    }
    param_5 = param_5 + lVar4 * 2 + 1;
    pfVar6 = pfVar8 + lVar4 * 2 + 1;
    lVar4 = (param_4 & 0xffffffff) - lVar4;
    do {
      fVar15 = param_5[-1];
      fVar16 = *param_5;
      param_5 = param_5 + 2;
      lVar4 = lVar4 + -1;
      pfVar6[-1] = fVar13 + fVar9 * fVar15 + fVar11 * fVar16;
      *pfVar6 = fVar14 + fVar10 * fVar15 + fVar12 * fVar16;
      pfVar6 = pfVar6 + 2;
    } while (lVar4 != 0);
  }
LAB_011701c0:
  uVar2 = cpConvexHull(0,param_4 & 0xffffffff,pfVar8,pfVar8,0);
  cpPolyShapeInitRaw(param_1,param_2,param_3,uVar2,pfVar8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

