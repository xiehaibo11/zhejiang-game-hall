
void spx_fft_float(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  short *psVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  float fStack_40;
  undefined2 auStack_3c [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *param_1;
  uVar18 = (ulong)uVar2;
  uVar8 = uVar18 * 2 + 0xf & 0x3fffffff0;
  lVar11 = -uVar8;
  lVar6 = lVar11 + -0x40;
  puVar17 = (undefined4 *)((long)&fStack_40 + (lVar6 - uVar8) + 0x40);
  if (0 < (int)uVar2) {
    if (uVar2 < 4) {
      uVar9 = 0;
LAB_00108b68:
      lVar10 = uVar18 - uVar9;
      puVar13 = (undefined2 *)((long)&fStack_40 + uVar9 * 2 + lVar6 + 0x40);
      pfVar7 = (float *)(param_2 + uVar9 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar13 = (short)(int)(*pfVar7 + 0.5);
        puVar13 = puVar13 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar10 != 0);
    }
    else {
      uVar9 = uVar18 & 0xfffffffc;
      puVar12 = (undefined8 *)(param_2 + 8);
      puVar13 = (undefined2 *)((long)auStack_3c + lVar11);
      auVar20 = NEON_fmov(0x3fe0000000000000,8);
      uVar8 = uVar9;
      do {
        uVar19 = puVar12[-1];
        uVar21 = *puVar12;
        puVar12 = puVar12 + 2;
        uVar8 = uVar8 - 4;
        puVar13[-2] = (short)(long)(double)(long)((double)(float)uVar19 + auVar20._0_8_);
        *puVar13 = (short)(long)(double)(long)((double)(float)uVar21 + auVar20._0_8_);
        puVar13[-1] = (short)(long)(double)(long)((double)(float)((ulong)uVar19 >> 0x20) +
                                                 auVar20._8_8_);
        puVar13[1] = (short)(long)(double)(long)((double)(float)((ulong)uVar21 >> 0x20) +
                                                auVar20._8_8_);
        puVar13 = puVar13 + 4;
      } while (uVar8 != 0);
      if (uVar9 != uVar18) goto LAB_00108b68;
    }
    if (0 < (int)uVar2) {
      *puVar17 = 0x7fc00000;
      if (uVar2 != 1) {
        fVar5 = 1.0 / (float)(int)uVar2;
        if (uVar18 - 1 < 8) {
          lVar11 = 1;
        }
        else {
          uVar1 = uVar2 - 1 & 7;
          lVar10 = (uVar18 - 1) - (ulong)uVar1;
          puVar12 = (undefined8 *)(&stack0xffffffffffffffd4 + lVar11);
          lVar11 = lVar10 + 1;
          puVar15 = (undefined8 *)(puVar17 + 5);
          do {
            puVar4 = puVar12 + -1;
            uVar19 = puVar12[-2];
            uVar23 = puVar12[1];
            uVar21 = *puVar12;
            puVar12 = puVar12 + 4;
            lVar10 = lVar10 + -8;
            puVar15[-1] = CONCAT44((float)((ulong)*puVar4 >> 0x20) * fVar5,(float)*puVar4 * fVar5);
            puVar15[-2] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar5,(float)uVar19 * fVar5);
            puVar15[1] = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar5,(float)uVar23 * fVar5);
            *puVar15 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar5,(float)uVar21 * fVar5);
            puVar15 = puVar15 + 4;
          } while (lVar10 != 0);
          if (uVar1 == 0) goto LAB_00108c40;
        }
        lVar10 = uVar18 - lVar11;
        pfVar7 = (float *)((long)&fStack_40 + lVar11 * 4 + lVar6 + 0x40);
        pfVar14 = (float *)(puVar17 + lVar11);
        do {
          lVar10 = lVar10 + -1;
          *pfVar14 = *pfVar7 * fVar5;
          pfVar7 = pfVar7 + 1;
          pfVar14 = pfVar14 + 1;
        } while (lVar10 != 0);
      }
LAB_00108c40:
      spx_drft_forward(param_1,puVar17);
      if (0 < (int)uVar2) {
        if (uVar2 < 8) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar18 & 0xfffffff8;
          puVar12 = (undefined8 *)(puVar17 + 2);
          puVar15 = (undefined8 *)(param_3 + 0x10);
          uVar8 = uVar9;
          do {
            uVar19 = puVar12[-1];
            uVar21 = *puVar12;
            puVar12 = puVar12 + 2;
            uVar8 = uVar8 - 8;
            auVar20._0_4_ = (int)(short)uVar19;
            auVar20._4_4_ = (int)(short)((ulong)uVar19 >> 0x10);
            auVar20._8_4_ = (int)(short)((ulong)uVar19 >> 0x20);
            auVar20._12_4_ = (int)(short)((ulong)uVar19 >> 0x30);
            auVar22._0_4_ = (int)(short)uVar21;
            auVar22._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
            auVar22._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
            auVar22._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
            auVar20 = NEON_scvtf(auVar20,4);
            auVar22 = NEON_scvtf(auVar22,4);
            puVar15[-1] = auVar20._8_8_;
            puVar15[-2] = auVar20._0_8_;
            puVar15[1] = auVar22._8_8_;
            *puVar15 = auVar22._0_8_;
            puVar15 = puVar15 + 4;
          } while (uVar8 != 0);
          if (uVar9 == uVar18) goto LAB_00108cc0;
        }
        lVar11 = uVar18 - uVar9;
        pfVar7 = (float *)(param_3 + uVar9 * 4);
        psVar16 = (short *)((long)puVar17 + uVar9 * 2);
        do {
          lVar11 = lVar11 + -1;
          *pfVar7 = (float)(int)*psVar16;
          pfVar7 = pfVar7 + 1;
          psVar16 = psVar16 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00108cc0;
    }
  }
  spx_drft_forward(param_1,puVar17);
LAB_00108cc0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

