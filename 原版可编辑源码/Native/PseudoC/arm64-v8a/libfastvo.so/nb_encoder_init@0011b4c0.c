
undefined8 * nb_encoder_init(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  size_t __nmemb;
  int *piVar15;
  ulong uVar16;
  
  piVar15 = (int *)*param_1;
  puVar7 = calloc(0x138,1);
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar7 = param_1;
  iVar2 = *piVar15;
  *(int *)((long)puVar7 + 0xc) = iVar2;
  iVar3 = piVar15[1];
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = iVar2 / iVar3;
  }
  *(int *)(puVar7 + 2) = iVar3;
  *(int *)((long)puVar7 + 0x14) = iVar6;
  *(int *)(puVar7 + 3) = iVar3 + iVar2;
  *(short *)(puVar7 + 8) = (short)piVar15[5];
  *(undefined2 *)((long)puVar7 + 0x42) = *(undefined2 *)((long)piVar15 + 0x16);
  uVar16 = *(ulong *)(piVar15 + 2);
  *(ulong *)((long)puVar7 + 0x1c) = uVar16;
  *(int *)((long)puVar7 + 0x24) = piVar15[4];
  iVar2 = piVar15[6];
  puVar7[0x24] = piVar15 + 8;
  *(short *)((long)puVar7 + 0x44) = (short)iVar2;
  iVar2 = piVar15[0x28];
  puVar7[5] = 0x100000400;
  *(undefined4 *)(puVar7 + 0x23) = 1;
  *(int *)((long)puVar7 + 300) = iVar2;
  *(int *)(puVar7 + 0x25) = iVar2;
  pvVar8 = calloc((long)(iVar3 << 1),1);
  puVar7[10] = pvVar8;
  pvVar8 = calloc((long)((piVar15[4] + *piVar15) * 2 + 4),1);
  puVar7[0xb] = pvVar8;
  iVar2 = piVar15[4];
  puVar7[0xc] = (long)pvVar8 + (long)iVar2 * 2 + 4;
  pvVar8 = calloc((long)((*piVar15 + iVar2) * 2 + 4),1);
  puVar7[0xd] = pvVar8;
  iVar2 = piVar15[4];
  iVar3 = (int)uVar16;
  puVar7[0x10] = lag_window;
  puVar7[0xf] = lpc_window;
  puVar7[0xe] = (long)pvVar8 + (long)iVar2 * 2 + 4;
  pvVar8 = calloc((long)(iVar3 << 1),1);
  puVar7[0x11] = pvVar8;
  pvVar9 = calloc((long)(iVar3 << 1),1);
  puVar7[0x12] = pvVar9;
  *(undefined4 *)(puVar7 + 1) = 1;
  if (0 < iVar3) {
    iVar2 = iVar3 + 1;
    if (iVar3 == 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar16 & 0xfffffffe;
      iVar11 = 0;
      puVar13 = (undefined2 *)((long)pvVar8 + 2);
      uVar14 = uVar12;
      do {
        uVar1 = iVar11 >> 0x10;
        iVar11 = iVar11 + 0x20000;
        uVar4 = 0;
        if (iVar2 != 0) {
          uVar4 = (undefined2)((int)((uVar1 | 1) * 0x6488) / iVar2);
        }
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = (undefined2)(((iVar11 >> 0x10) * 0x6488) / iVar2);
        }
        uVar14 = uVar14 - 2;
        puVar13[-1] = uVar4;
        *puVar13 = uVar5;
        puVar13 = puVar13 + 2;
      } while (uVar14 != 0);
      if (uVar12 == (uVar16 & 0xffffffff)) goto LAB_0011b6d0;
    }
    lVar10 = (uVar16 & 0xffffffff) - uVar12;
    iVar11 = (int)uVar12 * 0x10000;
    puVar13 = (undefined2 *)((long)pvVar8 + uVar12 * 2);
    do {
      iVar11 = iVar11 + 0x10000;
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = (undefined2)(((iVar11 >> 0x10) * 0x6488) / iVar2);
      }
      lVar10 = lVar10 + -1;
      *puVar13 = uVar4;
      puVar13 = puVar13 + 1;
    } while (lVar10 != 0);
  }
LAB_0011b6d0:
  __nmemb = (size_t)(iVar3 << 2);
  pvVar8 = calloc(__nmemb,1);
  puVar7[0x13] = pvVar8;
  pvVar8 = calloc(__nmemb,1);
  puVar7[0x14] = pvVar8;
  pvVar8 = calloc(__nmemb,1);
  puVar7[0x15] = pvVar8;
  pvVar8 = calloc(__nmemb,1);
  puVar7[0x16] = pvVar8;
  pvVar8 = calloc(__nmemb,1);
  puVar7[0x17] = pvVar8;
  pvVar8 = calloc((long)(iVar6 << 2),1);
  puVar7[0x19] = pvVar8;
  pvVar8 = calloc((long)(iVar6 << 2),1);
  puVar7[7] = pvVar8;
  pvVar8 = calloc(0x40,1);
  puVar7[0x1b] = pvVar8;
  vbr_init();
  puVar7[0x1f] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0x41000000;
  *(undefined4 *)((long)puVar7 + 0x114) = 2;
  *(undefined8 *)((long)puVar7 + 0x10c) = 0x1f4000000002;
  puVar7[0x26] = 0x100000000;
  return puVar7;
}

