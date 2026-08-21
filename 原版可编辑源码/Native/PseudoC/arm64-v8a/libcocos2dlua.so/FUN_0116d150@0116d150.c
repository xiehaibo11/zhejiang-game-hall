
long * FUN_0116d150(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
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
  
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      lVar4 = param_1[4];
      lVar1 = param_1[5];
      fVar17 = *(float *)(param_2 + 1);
      fVar9 = *(float *)((long)param_2 + 0xc);
      fVar10 = *(float *)(param_2 + 2);
      fVar15 = *(float *)((long)param_2 + 0x14);
      fVar14 = *(float *)(lVar1 + 8);
      fVar11 = *(float *)(lVar1 + 0xc);
      fVar16 = *(float *)(lVar1 + 0x10);
      fVar12 = *(float *)(lVar1 + 0x14);
      fVar20 = *(float *)(lVar4 + 8);
      fVar18 = *(float *)(lVar4 + 0xc);
      fVar21 = *(float *)(lVar4 + 0x10);
      fVar19 = *(float *)(lVar4 + 0x14);
      fVar8 = fVar21;
      if (fVar21 <= fVar10) {
        fVar8 = fVar10;
      }
      fVar25 = (float)NEON_fminnm(fVar20,fVar17);
      fVar23 = fVar19;
      if (fVar19 <= fVar15) {
        fVar23 = fVar15;
      }
      fVar22 = (float)NEON_fminnm(fVar18,fVar9);
      fVar8 = (fVar12 - fVar11) * (fVar16 - fVar14) + (fVar8 - fVar25) * (fVar23 - fVar22);
      fVar23 = fVar16;
      if (fVar16 <= fVar10) {
        fVar23 = fVar10;
      }
      fVar22 = (float)NEON_fminnm(fVar14,fVar17);
      fVar25 = fVar12;
      if (fVar12 <= fVar15) {
        fVar25 = fVar15;
      }
      fVar24 = (float)NEON_fminnm(fVar11,fVar9);
      fVar23 = (fVar19 - fVar18) * (fVar21 - fVar20) + (fVar23 - fVar22) * (fVar25 - fVar24);
      if (fVar8 == fVar23) {
        fVar20 = (fVar21 + fVar20) - fVar17;
        fVar18 = (fVar19 + fVar18) - fVar9;
        fVar9 = (fVar12 + fVar11) - fVar9;
        fVar8 = fVar20 - fVar10;
        fVar17 = (fVar16 + fVar14) - fVar17;
        fVar14 = fVar18 - fVar15;
        fVar16 = fVar17 - fVar10;
        fVar12 = fVar9 - fVar15;
        fVar11 = fVar10 - fVar20;
        if (0.0 <= fVar8) {
          fVar11 = fVar8;
        }
        fVar8 = fVar15 - fVar18;
        if (0.0 <= fVar14) {
          fVar8 = fVar14;
        }
        fVar10 = fVar10 - fVar17;
        if (0.0 <= fVar16) {
          fVar10 = fVar16;
        }
        fVar23 = fVar15 - fVar9;
        if (0.0 <= fVar12) {
          fVar23 = fVar12;
        }
        fVar8 = fVar8 + fVar11;
        fVar23 = fVar23 + fVar10;
      }
      if (fVar8 <= fVar23) {
        lVar4 = FUN_0116d150(lVar4,param_2,param_3);
        param_1[4] = lVar4;
      }
      else {
        lVar4 = FUN_0116d150(lVar1,param_2,param_3);
        param_1[5] = lVar4;
      }
      *(long **)(lVar4 + 0x18) = param_1;
      uVar6 = NEON_fminnm((int)param_1[1],(int)param_2[1]);
      uVar7 = NEON_fminnm(*(undefined4 *)((long)param_1 + 0xc),*(undefined4 *)((long)param_2 + 0xc))
      ;
      fVar8 = *(float *)(param_1 + 2);
      if (*(float *)(param_1 + 2) <= *(float *)(param_2 + 2)) {
        fVar8 = *(float *)(param_2 + 2);
      }
      fVar10 = *(float *)((long)param_1 + 0x14);
      if (*(float *)((long)param_1 + 0x14) <= *(float *)((long)param_2 + 0x14)) {
        fVar10 = *(float *)((long)param_2 + 0x14);
      }
      *(undefined4 *)(param_1 + 1) = uVar6;
      *(undefined4 *)((long)param_1 + 0xc) = uVar7;
      *(float *)(param_1 + 2) = fVar8;
      *(float *)((long)param_1 + 0x14) = fVar10;
      param_2 = param_1;
    }
    else {
      plVar5 = *(long **)(param_3 + 0x38);
      if (plVar5 == (long *)0x0) {
        plVar5 = calloc(1,0x8000);
        cpArrayPush(*(undefined8 *)(param_3 + 0x48),plVar5);
        lVar4 = 0x2a9;
        plVar3 = *(long **)(param_3 + 0x38);
        plVar2 = plVar5;
        do {
          plVar2[9] = (long)plVar3;
          lVar4 = lVar4 + -1;
          plVar3 = plVar2 + 6;
          plVar2 = plVar2 + 6;
        } while (lVar4 != 0);
        plVar2 = plVar5 + 0xff6;
      }
      else {
        plVar2 = (long *)plVar5[3];
      }
      *(long **)(param_3 + 0x38) = plVar2;
      *plVar5 = 0;
      lVar4 = param_2[1];
      uVar7 = *(undefined4 *)((long)param_2 + 0xc);
      fVar8 = *(float *)(param_2 + 2);
      fVar10 = *(float *)((long)param_2 + 0x14);
      lVar1 = param_1[1];
      uVar13 = *(undefined4 *)((long)param_1 + 0xc);
      fVar15 = *(float *)(param_1 + 2);
      fVar17 = *(float *)((long)param_1 + 0x14);
      plVar5[3] = 0;
      plVar5[4] = (long)param_2;
      uVar6 = NEON_fminnm((int)lVar4,(int)lVar1);
      uVar7 = NEON_fminnm(uVar7,uVar13);
      if (fVar8 <= fVar15) {
        fVar8 = fVar15;
      }
      if (fVar10 <= fVar17) {
        fVar10 = fVar17;
      }
      *(undefined4 *)(plVar5 + 1) = uVar6;
      *(undefined4 *)((long)plVar5 + 0xc) = uVar7;
      *(float *)(plVar5 + 2) = fVar8;
      *(float *)((long)plVar5 + 0x14) = fVar10;
      param_2[3] = (long)plVar5;
      plVar5[5] = (long)param_1;
      param_1[3] = (long)plVar5;
      param_2 = plVar5;
    }
  }
  return param_2;
}

