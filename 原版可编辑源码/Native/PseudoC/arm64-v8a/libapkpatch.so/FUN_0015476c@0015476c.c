
undefined8 * FUN_0015476c(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 **local_c8;
  long *local_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar1 = (char *)*param_1;
  if (((ulong)(param_1[1] - (long)pcVar1) < 2) || (*pcVar1 != 'T')) goto LAB_00154b40;
  puVar12 = (undefined8 *)0x0;
  switch(pcVar1[1]) {
  case 'n':
    iVar2 = *(int *)((long)param_1 + 0x31c);
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar1 + 2);
    *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
    lVar9 = *(long *)((long)pvVar14 + 8);
    puVar12 = pvVar14;
    if (0xfef < lVar9 + 0x20U) {
      puVar12 = malloc(0x1000);
      if (puVar12 == (void *)0x0) goto LAB_00154c60;
      lVar9 = 0;
      *puVar12 = pvVar14;
      puVar12[1] = 0;
      param_1[0x266] = (long)puVar12;
    }
    *(long *)((long)puVar12 + 8) = lVar9 + 0x20;
    plVar13 = (long *)((long)puVar12 + lVar9 + 0x10);
    *plVar13 = (long)&PTR_FUN_00167650;
    *(undefined8 *)((long)puVar12 + lVar9 + 0x18) = 0x10101011b;
    *(int *)((long)puVar12 + lVar9 + 0x20) = iVar2;
    local_c0 = plVar13;
    FUN_00154e80(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
    lVar9 = FUN_0014a548(param_1);
    if (lVar9 != 0) {
      pvVar14 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar14 + 8);
      puVar15 = pvVar14;
      if (0xfef < lVar8 + 0x20U) {
        puVar15 = malloc(0x1000);
        if (puVar15 == (void *)0x0) {
LAB_00154c60:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = 0;
        *puVar15 = pvVar14;
        puVar15[1] = 0;
        param_1[0x266] = (long)puVar15;
      }
      *(long *)((long)puVar15 + 8) = lVar8 + 0x20;
      puVar12 = (undefined8 *)((long)puVar15 + lVar8 + 0x10);
      *puVar12 = &PTR_FUN_00167730;
      *(undefined4 *)((long)puVar15 + lVar8 + 0x18) = 0x101001d;
      *(long **)((long)puVar15 + lVar8 + 0x20) = plVar13;
      *(long *)((long)puVar15 + lVar8 + 0x28) = lVar9;
      break;
    }
    goto LAB_00154b40;
  case 'p':
    *param_1 = (long)(pcVar1 + 2);
    plVar13 = (long *)FUN_0015476c(param_1);
    if (plVar13 != (long *)0x0) {
      puVar15 = (undefined8 *)param_1[0x266];
      lVar9 = puVar15[1];
      puVar12 = puVar15;
      if (0xfef < lVar9 + 0x20U) {
        puVar12 = malloc(0x1000);
        if (puVar12 == (void *)0x0) goto LAB_00154c60;
        lVar9 = 0;
        *puVar12 = puVar15;
        puVar12[1] = 0;
        param_1[0x266] = (long)puVar12;
      }
      lVar8 = (long)puVar12 + lVar9;
      uVar11 = 0x1f;
      ppuVar10 = &PTR_FUN_00167810;
      goto LAB_00154c40;
    }
LAB_00154b40:
    puVar12 = (undefined8 *)0x0;
    break;
  case 't':
    lVar9 = param_1[100];
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar1 + 2);
    *(int *)(param_1 + 100) = (int)lVar9 + 1;
    lVar8 = *(long *)((long)pvVar14 + 8);
    puVar12 = pvVar14;
    if (0xfef < lVar8 + 0x20U) {
      puVar12 = malloc(0x1000);
      if (puVar12 == (void *)0x0) goto LAB_00154c60;
      lVar8 = 0;
      *puVar12 = pvVar14;
      puVar12[1] = 0;
      param_1[0x266] = (long)puVar12;
    }
    *(long *)((long)puVar12 + 8) = lVar8 + 0x20;
    plVar13 = (long *)((long)puVar12 + lVar8 + 0x10);
    *plVar13 = (long)&PTR_FUN_00167650;
    *(undefined8 *)((long)puVar12 + lVar8 + 0x18) = 0x20101011b;
    *(int *)((long)puVar12 + lVar8 + 0x20) = (int)lVar9;
    local_c0 = plVar13;
    FUN_00154e80(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
    lVar9 = param_1[3];
    lVar8 = param_1[2];
    plStack_a0 = &local_58;
    local_c8 = &local_b0;
    local_b8 = param_1[0x54] - param_1[0x53] >> 3;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_60 = 0;
    local_68 = 0;
    local_c0 = param_1;
    local_b0 = &local_98;
    local_a8 = &local_98;
    FUN_0014e13c(param_1 + 0x53,&local_c8);
    while( true ) {
      uVar7 = __strlen_chk(&DAT_0011aa2f,2);
      pcVar1 = (char *)*param_1;
      pcVar4 = "E";
      pcVar5 = pcVar1;
      uVar6 = uVar7;
      if (uVar7 <= (ulong)(param_1[1] - (long)pcVar1)) {
        while( true ) {
          if (uVar6 == 0) {
            lVar9 = (lVar9 - lVar8 >> 3) * 8;
            *param_1 = (long)(pcVar1 + uVar7);
            auVar16 = FUN_00156e64(param_1,param_1[2] + lVar9,param_1[3]);
            pvVar14 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar9;
            lVar9 = *(long *)((long)pvVar14 + 8);
            puVar15 = pvVar14;
            if (0xfef < lVar9 + 0x30U) {
              puVar15 = malloc(0x1000);
              if (puVar15 == (void *)0x0) goto LAB_00154c60;
              lVar9 = 0;
              *puVar15 = pvVar14;
              puVar15[1] = 0;
              param_1[0x266] = (long)puVar15;
            }
            *(long *)((long)puVar15 + 8) = lVar9 + 0x30;
            puVar12 = (undefined8 *)((long)puVar15 + lVar9 + 0x10);
            *puVar12 = &PTR_FUN_001677a0;
            *(undefined4 *)((long)puVar15 + lVar9 + 0x18) = 0x101001e;
            *(long **)((long)puVar15 + lVar9 + 0x20) = plVar13;
            *(undefined1 (*) [16])((long)puVar15 + lVar9 + 0x28) = auVar16;
            goto LAB_00154ab8;
          }
          if (*pcVar4 != *pcVar5) break;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          uVar6 = uVar6 - 1;
        }
      }
      local_c8 = (undefined8 **)FUN_0015476c(param_1);
      if (local_c8 == (undefined8 **)0x0) break;
      FUN_0014c270(param_1 + 2,&local_c8);
    }
    puVar12 = (undefined8 *)0x0;
LAB_00154ab8:
    local_c0[0x54] = local_c0[0x53] + local_b8 * 8;
    if (local_b0 != &local_98) {
      free(local_b0);
    }
    break;
  case 'y':
    lVar9 = param_1[99];
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar1 + 2);
    *(int *)(param_1 + 99) = (int)lVar9 + 1;
    lVar8 = *(long *)((long)pvVar14 + 8);
    puVar12 = pvVar14;
    if (0xfef < lVar8 + 0x20U) {
      puVar12 = malloc(0x1000);
      if (puVar12 == (void *)0x0) goto LAB_00154c60;
      lVar8 = 0;
      *puVar12 = pvVar14;
      puVar12[1] = 0;
      param_1[0x266] = (long)puVar12;
    }
    *(long *)((long)puVar12 + 8) = lVar8 + 0x20;
    plVar13 = (long *)((long)puVar12 + lVar8 + 0x10);
    *plVar13 = (long)&PTR_FUN_00167650;
    *(undefined8 *)((long)puVar12 + lVar8 + 0x18) = 0x101011b;
    *(int *)((long)puVar12 + lVar8 + 0x20) = (int)lVar9;
    local_c0 = plVar13;
    FUN_00154e80(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
    puVar15 = (undefined8 *)param_1[0x266];
    lVar9 = puVar15[1];
    puVar12 = puVar15;
    if (0xfef < lVar9 + 0x20U) {
      puVar12 = malloc(0x1000);
      if (puVar12 == (undefined8 *)0x0) goto LAB_00154c60;
      lVar9 = 0;
      *puVar12 = puVar15;
      puVar12[1] = 0;
      param_1[0x266] = (long)puVar12;
    }
    lVar8 = (long)puVar12 + lVar9;
    uVar11 = 0x1c;
    ppuVar10 = &PTR_FUN_001676c0;
LAB_00154c40:
    puVar12[1] = lVar9 + 0x20;
    puVar12 = (undefined8 *)(lVar8 + 0x10);
    *puVar12 = ppuVar10;
    *(uint *)(lVar8 + 0x18) = uVar11 | 0x1010000;
    *(long **)(lVar8 + 0x20) = plVar13;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;
}

