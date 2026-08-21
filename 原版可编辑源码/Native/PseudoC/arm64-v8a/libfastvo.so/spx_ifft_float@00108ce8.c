
void spx_ifft_float(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *__src;
  float *pfVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  void *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  short asStack_50 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_1;
  uVar11 = (ulong)uVar1;
  uVar5 = uVar11 * 2 + 0xf & 0x3fffffff0;
  lVar7 = -uVar5;
  __src = (void *)((long)asStack_50 + lVar7);
  __dest = (void *)((long)__src - uVar5);
  if (0 < (int)uVar1) {
    if (uVar1 < 4) {
      uVar6 = 0;
LAB_00108dd4:
      lVar7 = uVar11 - uVar6;
      pfVar3 = (float *)(param_2 + uVar6 * 4);
      puVar10 = (undefined2 *)((long)__src + uVar6 * 2);
      do {
        lVar7 = lVar7 + -1;
        *puVar10 = (short)(int)(*pfVar3 + 0.5);
        pfVar3 = pfVar3 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar7 != 0);
    }
    else {
      uVar6 = uVar11 & 0xfffffffc;
      puVar4 = (undefined8 *)(param_2 + 8);
      puVar10 = (undefined2 *)((long)asStack_50 + lVar7 + 4);
      auVar13 = NEON_fmov(0x3fe0000000000000,8);
      uVar5 = uVar6;
      do {
        uVar12 = puVar4[-1];
        uVar14 = *puVar4;
        puVar4 = puVar4 + 2;
        uVar5 = uVar5 - 4;
        puVar10[-2] = (short)(long)(double)(long)((double)(float)uVar12 + auVar13._0_8_);
        *puVar10 = (short)(long)(double)(long)((double)(float)uVar14 + auVar13._0_8_);
        puVar10[-1] = (short)(long)(double)(long)((double)(float)((ulong)uVar12 >> 0x20) +
                                                 auVar13._8_8_);
        puVar10[1] = (short)(long)(double)(long)((double)(float)((ulong)uVar14 >> 0x20) +
                                                auVar13._8_8_);
        puVar10 = puVar10 + 4;
      } while (uVar5 != 0);
      if (uVar6 != uVar11) goto LAB_00108dd4;
    }
    if (0 < (int)uVar1) {
      memcpy(__dest,__src,(long)(int)uVar1 << 2);
      spx_drft_backward(param_1,__dest);
      if (uVar1 < 8) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar11 & 0xfffffff8;
        puVar4 = (undefined8 *)((long)__dest + 8);
        puVar8 = (undefined8 *)(param_3 + 0x10);
        uVar5 = uVar6;
        do {
          uVar12 = puVar4[-1];
          uVar14 = *puVar4;
          puVar4 = puVar4 + 2;
          uVar5 = uVar5 - 8;
          auVar13._0_4_ = (int)(short)uVar12;
          auVar13._4_4_ = (int)(short)((ulong)uVar12 >> 0x10);
          auVar13._8_4_ = (int)(short)((ulong)uVar12 >> 0x20);
          auVar13._12_4_ = (int)(short)((ulong)uVar12 >> 0x30);
          auVar15._0_4_ = (int)(short)uVar14;
          auVar15._4_4_ = (int)(short)((ulong)uVar14 >> 0x10);
          auVar15._8_4_ = (int)(short)((ulong)uVar14 >> 0x20);
          auVar15._12_4_ = (int)(short)((ulong)uVar14 >> 0x30);
          auVar13 = NEON_scvtf(auVar13,4);
          auVar15 = NEON_scvtf(auVar15,4);
          puVar8[-1] = auVar13._8_8_;
          puVar8[-2] = auVar13._0_8_;
          puVar8[1] = auVar15._8_8_;
          *puVar8 = auVar15._0_8_;
          puVar8 = puVar8 + 4;
        } while (uVar5 != 0);
        if (uVar6 == uVar11) goto LAB_00108ea0;
      }
      lVar7 = uVar11 - uVar6;
      pfVar3 = (float *)(param_3 + uVar6 * 4);
      psVar9 = (short *)((long)__dest + uVar6 * 2);
      do {
        lVar7 = lVar7 + -1;
        *pfVar3 = (float)(int)*psVar9;
        pfVar3 = pfVar3 + 1;
        psVar9 = psVar9 + 1;
      } while (lVar7 != 0);
      goto LAB_00108ea0;
    }
  }
  spx_drft_backward(param_1,__dest);
LAB_00108ea0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

