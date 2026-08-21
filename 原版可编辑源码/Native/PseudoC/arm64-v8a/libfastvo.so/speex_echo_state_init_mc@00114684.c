
uint * speex_echo_state_init_mc(uint param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  void *pvVar11;
  short sVar12;
  undefined2 uVar13;
  ulong uVar14;
  short *psVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  short *psVar22;
  ulong uVar23;
  ulong uVar24;
  size_t sVar25;
  size_t __nmemb;
  
  puVar7 = calloc(0x140,1);
  puVar7[9] = 8000;
  lVar17 = (long)(int)(param_1 << 0xf) * 0x10624dd3;
  lVar20 = (long)(int)(param_1 << 0x10) * 0x10624dd3;
  uVar19 = param_1 * 2;
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = (int)(param_1 + param_2 + -1) / (int)param_1;
  }
  puVar7[7] = param_3;
  puVar7[8] = param_4;
  *puVar7 = param_1;
  puVar7[1] = uVar19;
  puVar7[2] = uVar6;
  *(short *)(puVar7 + 10) = (short)(uint)((ulong)lVar17 >> 0x29) - (short)(lVar17 >> 0x3f);
  *(short *)((long)puVar7 + 0x2a) = (short)(uint)((ulong)lVar20 >> 0x29) - (short)(lVar20 >> 0x3f);
  *(short *)(puVar7 + 0xb) =
       (short)(uint)((ulong)((long)(int)(param_1 << 0xe) * 0x10624dd3) >> 0x29) -
       (short)((int)(param_1 << 0xe) >> 0x1f);
  uVar8 = spx_fft_init(uVar19);
  sVar25 = (size_t)(int)(uVar19 * param_3 * 2);
  *(undefined8 *)(puVar7 + 0x40) = uVar8;
  pvVar9 = calloc(sVar25,1);
  iVar18 = uVar19 * param_4 * 2;
  *(void **)(puVar7 + 0xe) = pvVar9;
  pvVar9 = calloc((long)iVar18,1);
  uVar2 = *puVar7;
  iVar3 = param_3 * 2;
  *(void **)(puVar7 + 0x10) = pvVar9;
  pvVar9 = calloc((long)(int)(iVar3 * uVar2),1);
  *(void **)(puVar7 + 0x14) = pvVar9;
  pvVar9 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x16) = pvVar9;
  pvVar9 = calloc(sVar25,1);
  __nmemb = (size_t)(int)(uVar2 * 4 + 4);
  *(void **)(puVar7 + 0x18) = pvVar9;
  pvVar9 = calloc(__nmemb,1);
  *(void **)(puVar7 + 0x32) = pvVar9;
  pvVar9 = calloc(__nmemb,1);
  *(void **)(puVar7 + 0x30) = pvVar9;
  pvVar9 = calloc(__nmemb,1);
  *(void **)(puVar7 + 0x34) = pvVar9;
  pvVar9 = calloc(__nmemb,1);
  *(void **)(puVar7 + 0x38) = pvVar9;
  pvVar9 = calloc(__nmemb,1);
  *(void **)(puVar7 + 0x36) = pvVar9;
  pvVar9 = calloc((long)(int)(iVar18 * (uVar6 + 1)),1);
  *(void **)(puVar7 + 0x12) = pvVar9;
  pvVar9 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x1a) = pvVar9;
  pvVar9 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x1c) = pvVar9;
  pvVar9 = calloc((long)(int)(param_4 * param_3 * uVar19 * uVar6 * 4),1);
  uVar2 = param_4 * param_3 * uVar6 * uVar19;
  *(void **)(puVar7 + 0x20) = pvVar9;
  pvVar9 = calloc((long)(int)(uVar2 * 2),1);
  *(void **)(puVar7 + 0x22) = pvVar9;
  pvVar9 = calloc((long)(int)(param_1 << 3),1);
  sVar25 = (size_t)(int)(param_1 * 4 + 4);
  *(void **)(puVar7 + 0x1e) = pvVar9;
  pvVar9 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x28) = pvVar9;
  puVar10 = calloc(sVar25,1);
  sVar25 = (size_t)(int)(param_1 * 4);
  *(undefined4 **)(puVar7 + 0x2a) = puVar10;
  pvVar9 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x3c) = pvVar9;
  pvVar11 = calloc((long)(int)(uVar6 << 1),1);
  *(void **)(puVar7 + 0x3e) = pvVar11;
  pvVar11 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x2c) = pvVar11;
  pvVar11 = calloc(sVar25,1);
  *(void **)(puVar7 + 0x2e) = pvVar11;
  if (0 < (int)param_1) {
    uVar14 = 0;
    uVar4 = -(param_1 >> 0xe & 1) & 0xffff0000 | (param_1 & 0x7fff) << 1;
    do {
      uVar19 = uVar19 - 1;
      iVar18 = 0;
      if (uVar4 != 0) {
        iVar18 = ((short)((int)uVar14 << 1) * 0x6488) / (int)uVar4;
      }
      if ((short)iVar18 < 0x3244) {
        iVar18 = (iVar18 * 0x10000 >> 0xd) * (iVar18 * 0x10000 >> 0x10) + 0x8000 >> 0x10;
        sVar12 = (short)(((int)((((iVar18 * -10 + 0x1000 >> 0xd) + 0x154) * iVar18 * 8 + 0x8000U &
                                0xffff0000) + 0xf0000000) >> 0x10) * iVar18 + 0x1000U >> 0xd) +
                 0x2000;
      }
      else {
        iVar18 = iVar18 * -0x10000 + 0x64880000;
        iVar18 = (iVar18 >> 0xd) * (iVar18 >> 0x10) + 0x8000 >> 0x10;
        sVar12 = -0x2000 - (short)(((int)((((iVar18 * -10 + 0x1000 >> 0xd) + 0x154) * iVar18 * 8 +
                                           0x8000U & 0xffff0000) + 0xf0000000) >> 0x10) * iVar18 +
                                   0x1000U >> 0xd);
      }
      sVar12 = sVar12 * -2 + 0x3fff;
      *(short *)((long)pvVar9 + uVar14 * 2) = sVar12;
      uVar14 = uVar14 + 1;
      *(short *)((long)pvVar9 + (long)(int)uVar19 * 2) = sVar12;
    } while (param_1 != uVar14);
  }
  if ((-1 < (int)*puVar7) && (uVar19 = *puVar7, *puVar10 = 0xfff24000, 0 < (int)uVar19)) {
    lVar17 = 0;
    do {
      *(undefined4 *)(*(long *)(puVar7 + 0x2a) + lVar17 * 4 + 4) = 0xfff24000;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)*puVar7);
  }
  if (0 < (int)uVar2) {
    memset(*(void **)(puVar7 + 0x20),0,(ulong)uVar2 << 2);
  }
  sVar12 = 0;
  if ((short)uVar6 != 0) {
    sVar12 = (short)(0x1333 / (int)(short)uVar6);
  }
  iVar18 = (int)-sVar12;
  if (iVar18 < 0x532b) {
    if (iVar18 < -0x532a) {
LAB_00114acc:
      iVar18 = 0;
    }
    else {
      uVar19 = iVar18 * 0x5c55 + 0x2000;
      iVar18 = (int)(uVar19 * 4) >> 0x10;
      if (0x77ff < iVar18) goto LAB_00114ab8;
      if (iVar18 < -0x7800) goto LAB_00114acc;
      uVar19 = uVar19 >> 0xe;
      uVar2 = uVar19 & 0x7ff;
      iVar18 = uVar2 * 8;
      uVar19 = -((int)(uVar19 << 0x10) >> 0x1b) - 2;
      iVar18 = (int)((((((uVar2 * 0x28a8 >> 0xe) + 0xe8e) * iVar18 * 4 & 0x1fff0000) + 0x2c5c0000 >>
                      0x10) * iVar18 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
      iVar16 = iVar18 >> (uVar19 & 0x1f);
      if ((int)uVar19 < 1) {
        iVar16 = iVar18 << (ulong)(-uVar19 & 0x1f);
      }
      iVar18 = (iVar16 << 0xf) >> 0x10;
    }
  }
  else {
LAB_00114ab8:
    iVar18 = -1;
  }
  psVar15 = *(short **)(puVar7 + 0x3e);
  iVar16 = 0x599a;
  *psVar15 = 0x599a;
  if (1 < (int)uVar6) {
    uVar19 = 0x599a;
    lVar17 = (ulong)uVar6 - 1;
    iVar16 = 0x599a;
    psVar22 = psVar15;
    do {
      psVar22 = psVar22 + 1;
      uVar19 = (uint)(iVar18 * (short)uVar19) >> 0xf;
      lVar17 = lVar17 + -1;
      *psVar22 = (short)uVar19;
      iVar16 = iVar16 + (short)uVar19;
    } while (lVar17 != 0);
  }
  if (0 < (int)uVar6) {
    uVar23 = (ulong)(int)uVar6;
    uVar14 = 0xfffffffffffffffe;
    if (-2 < (long)~uVar23) {
      uVar14 = ~uVar23;
    }
    if (uVar14 + uVar23 < 0xfffffffffffffffe) {
      uVar14 = uVar14 + uVar23 + 2;
      uVar21 = uVar14 & 0xfffffffffffffffe;
      psVar22 = psVar15 + (uVar23 - 1);
      uVar23 = uVar23 - uVar21;
      uVar24 = uVar21;
      do {
        uVar24 = uVar24 - 2;
        sVar12 = 0;
        if (iVar16 != 0) {
          sVar12 = (short)((*psVar22 * 0x6666) / iVar16);
        }
        sVar5 = 0;
        if (iVar16 != 0) {
          sVar5 = (short)((psVar22[-1] * 0x6666) / iVar16);
        }
        *psVar22 = sVar12;
        psVar22[-1] = sVar5;
        psVar22 = psVar22 + -2;
      } while (uVar24 != 0);
      if (uVar14 == uVar21) goto LAB_00114bbc;
    }
    do {
      uVar14 = uVar23 - 1;
      sVar12 = 0;
      if (iVar16 != 0) {
        sVar12 = (short)((psVar15[uVar14] * 0x6666) / iVar16);
      }
      psVar15[uVar14] = sVar12;
      bVar1 = 1 < (long)uVar23;
      uVar23 = uVar14;
    } while (bVar1);
  }
LAB_00114bbc:
  pvVar9 = calloc((long)(int)(param_4 << 1),1);
  *(void **)(puVar7 + 0x42) = pvVar9;
  pvVar9 = calloc((long)iVar3,1);
  *(void **)(puVar7 + 0x44) = pvVar9;
  pvVar9 = calloc((long)iVar3,1);
  *(void **)(puVar7 + 0x46) = pvVar9;
  *(undefined2 *)(puVar7 + 0x48) = 0x7333;
  if ((int)puVar7[9] < 12000) {
    *(undefined2 *)((long)puVar7 + 0x122) = 0x7333;
  }
  else {
    if ((int)puVar7[9] < 24000) {
      uVar13 = 0x7db2;
    }
    else {
      uVar13 = 0x7efa;
    }
    *(undefined2 *)((long)puVar7 + 0x122) = uVar13;
  }
  pvVar9 = calloc((long)(int)(param_3 << 3),1);
  uVar19 = *puVar7;
  *(void **)(puVar7 + 0x4a) = pvVar9;
  puVar7[4] = 0;
  puVar7[0x3a] = 0xfff24000;
  puVar7[0x3b] = 0xfff24000;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  pvVar9 = calloc((long)(int)(param_4 * uVar19 * 6),1);
  *(void **)(puVar7 + 0x4c) = pvVar9;
  puVar7[0x4e] = uVar19 << 1;
  puVar7[0x4f] = 0;
  return puVar7;
}

