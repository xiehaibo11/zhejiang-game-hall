
undefined8 * sb_encoder_init(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  undefined2 *puVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  undefined4 local_4c;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  puVar8 = calloc(0xf8,1);
  if (puVar8 == (undefined8 *)0x0) goto LAB_00129410;
  *puVar8 = param_1;
  param_1 = (undefined8 *)*param_1;
  uVar9 = speex_encoder_init(*param_1);
  puVar8[1] = uVar9;
  puVar8[7] = 0;
  iVar1 = *(int *)(param_1 + 1);
  *(int *)(puVar8 + 2) = iVar1 << 1;
  *(int *)((long)puVar8 + 0x14) = iVar1;
  iVar12 = *(int *)((long)param_1 + 0xc);
  iVar6 = 0;
  if (iVar12 != 0) {
    iVar6 = iVar1 / iVar12;
  }
  *(int *)(puVar8 + 3) = iVar12;
  *(int *)((long)puVar8 + 0x1c) = iVar6;
  *(int *)(puVar8 + 4) = iVar12 + iVar1;
  uVar2 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(puVar8 + 0x1b) = 1;
  puVar8[0x1c] = param_1 + 4;
  *(undefined4 *)((long)puVar8 + 0x24) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  local_4c = 9;
  *(undefined4 *)(puVar8 + 0x1d) = uVar2;
  *(undefined4 *)((long)puVar8 + 0xec) = uVar2;
  speex_encoder_ctl(uVar9,4,&local_4c);
  local_4c = 1;
  speex_encoder_ctl(puVar8[1],0x69,&local_4c);
  *(undefined2 *)((long)puVar8 + 0x2c) = *(undefined2 *)(param_1 + 3);
  *(undefined2 *)((long)puVar8 + 0x2e) = *(undefined2 *)((long)param_1 + 0x14);
  uVar4 = *(undefined2 *)((long)param_1 + 0x16);
  *(undefined4 *)(puVar8 + 5) = 1;
  *(undefined2 *)(puVar8 + 6) = uVar4;
  pvVar10 = calloc((long)((*(int *)(puVar8 + 4) - *(int *)((long)puVar8 + 0x14)) * 2),1);
  puVar8[8] = pvVar10;
  pvVar10 = calloc(0x80,1);
  puVar8[9] = pvVar10;
  pvVar10 = calloc(0x80,1);
  puVar8[10] = pvVar10;
  uVar3 = *(uint *)((long)puVar8 + 0x24);
  uVar18 = (ulong)uVar3;
  sVar17 = (size_t)(int)(uVar3 << 1);
  puVar8[0xc] = lag_window;
  puVar8[0xb] = lpc_window;
  pvVar10 = calloc(sVar17,1);
  puVar8[0xd] = pvVar10;
  pvVar11 = calloc(sVar17,1);
  puVar8[0xe] = pvVar11;
  pvVar11 = calloc(sVar17,1);
  iVar1 = *(int *)((long)puVar8 + 0x1c);
  puVar8[0xf] = pvVar11;
  pvVar11 = calloc((long)(iVar1 << 2),1);
  puVar8[0x13] = pvVar11;
  pvVar11 = calloc((long)(iVar1 << 1),1);
  sVar17 = (size_t)(int)(uVar3 << 2);
  puVar8[0x14] = pvVar11;
  puVar8[0x15] = 0;
  pvVar11 = calloc(sVar17,1);
  puVar8[0x10] = pvVar11;
  pvVar11 = calloc(sVar17,1);
  puVar8[0x11] = pvVar11;
  pvVar11 = calloc(sVar17,1);
  puVar8[0x12] = pvVar11;
  if (0 < (int)uVar3) {
    iVar1 = uVar3 + 1;
    if (uVar3 == 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar18 & 0xfffffffe;
      iVar12 = 0;
      puVar14 = (undefined2 *)((long)pvVar10 + 2);
      uVar16 = uVar13;
      do {
        uVar3 = iVar12 >> 0x10;
        iVar12 = iVar12 + 0x20000;
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = (undefined2)((int)((uVar3 | 1) * 0x6488) / iVar1);
        }
        uVar5 = 0;
        if (iVar1 != 0) {
          uVar5 = (undefined2)(((iVar12 >> 0x10) * 0x6488) / iVar1);
        }
        uVar16 = uVar16 - 2;
        puVar14[-1] = uVar4;
        *puVar14 = uVar5;
        puVar14 = puVar14 + 2;
      } while (uVar16 != 0);
      if (uVar13 == uVar18) goto LAB_001293d4;
    }
    lVar15 = uVar18 - uVar13;
    iVar12 = (int)uVar13 * 0x10000;
    puVar14 = (undefined2 *)((long)pvVar10 + uVar13 * 2);
    do {
      iVar12 = iVar12 + 0x10000;
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = (undefined2)(((iVar12 >> 0x10) * 0x6488) / iVar1);
      }
      lVar15 = lVar15 + -1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
LAB_001293d4:
  puVar8[0x1a] = 0;
  *(undefined4 *)(puVar8 + 0x16) = 0x41000000;
  *(undefined4 *)(puVar8 + 0x1e) = 2;
  *(undefined8 *)((long)puVar8 + 0xbc) = 20000;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  speex_encoder_ctl(puVar8[1],0x19,(long)puVar8 + 0xf4);
  *(int *)((long)puVar8 + 0xf4) = *(int *)((long)puVar8 + 0xf4) << 1;
LAB_00129410:
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

