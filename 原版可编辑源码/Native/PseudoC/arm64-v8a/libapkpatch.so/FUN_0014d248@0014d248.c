
void FUN_0014d248(long *param_1,ulong param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  void *pvVar19;
  undefined1 auVar20 [16];
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'I')) {
    *param_1 = (long)(pcVar2 + 1);
    if ((param_2 & 1) != 0) {
      local_a0 = param_1 + 0x48;
      param_1[0x54] = param_1[0x53];
      FUN_0014e13c(param_1 + 0x53,&local_a0);
      param_1[0x49] = param_1[0x48];
    }
    plVar17 = param_1 + 2;
    lVar18 = *plVar17;
    lVar3 = param_1[3];
    plVar1 = param_1 + 0x56;
LAB_0014d2fc:
    while( true ) {
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
      if ((param_2 & 1) != 0) {
        local_a0 = (long *)param_1[0x53];
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        local_90 = &local_68;
        if (local_a0 == plVar1) {
          if (param_1[0x54] - (long)plVar1 == 0) {
            lVar16 = 0;
            plVar11 = param_1 + 0x56;
            local_a0 = &local_88;
          }
          else {
            local_a0 = &local_88;
            local_98 = &local_88;
            __memmove_chk(&local_88,param_1 + 0x56,param_1[0x54] - (long)plVar1,0x20);
            plVar11 = (long *)param_1[0x53];
            lVar16 = param_1[0x54] - (long)plVar11 >> 3;
          }
          local_98 = local_a0 + lVar16;
          param_1[0x54] = (long)plVar11;
        }
        else {
          local_98 = (long *)param_1[0x54];
          local_90 = (long *)param_1[0x55];
          param_1[0x53] = (long)plVar1;
          param_1[0x54] = (long)plVar1;
          param_1[0x55] = (long)(param_1 + 0x5a);
        }
        puVar10 = (undefined8 *)FUN_0014c080(param_1);
        plVar11 = (long *)param_1[0x53];
        local_a8 = puVar10;
        if (local_a0 == &local_88) {
          plVar15 = &local_88;
          if (plVar11 != plVar1) {
            free(plVar11);
            plVar11 = param_1 + 0x56;
            param_1[0x53] = (long)plVar1;
            param_1[0x54] = (long)plVar1;
            param_1[0x55] = (long)(param_1 + 0x5a);
            plVar15 = local_a0;
          }
          if ((long)local_98 - (long)plVar15 == 0) {
            lVar16 = 0;
            plVar11 = param_1 + 0x56;
          }
          else {
            memmove(plVar11,plVar15,(long)local_98 - (long)plVar15);
            plVar11 = (long *)param_1[0x53];
            lVar16 = (long)local_98 - (long)local_a0 >> 3;
            plVar15 = local_a0;
          }
          param_1[0x54] = (long)(plVar11 + lVar16);
          plVar11 = plVar15;
joined_r0x0014d494:
          local_98 = plVar11;
          if (puVar10 == (undefined8 *)0x0) goto LAB_0014d5c0;
LAB_0014d498:
          FUN_0014c270(plVar17,&local_a8);
          local_b0 = puVar10;
          if (*(char *)(puVar10 + 1) == '!') {
            pvVar19 = (void *)param_1[0x266];
            plVar11 = (long *)puVar10[2];
            lVar16 = puVar10[3];
            lVar13 = *(long *)((long)pvVar19 + 8);
            puVar12 = pvVar19;
            if (0xfef < lVar13 + 0x20U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) {
LAB_0014d6a8:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar13 = 0;
              *puVar12 = pvVar19;
              puVar12[1] = 0;
              param_1[0x266] = (long)puVar12;
            }
            *(long *)((long)puVar12 + 8) = lVar13 + 0x20;
            local_b0 = (undefined8 *)((long)puVar12 + lVar13 + 0x10);
            *local_b0 = &PTR_FUN_00168840;
            *(undefined1 *)((long)puVar12 + lVar13 + 0x18) = 0x20;
            *(undefined2 *)((long)puVar12 + lVar13 + 0x19) = 0x202;
            *(undefined1 *)((long)puVar12 + lVar13 + 0x1b) = 2;
            lVar14 = lVar16 << 3;
            *(long **)((long)puVar12 + lVar13 + 0x20) = plVar11;
            *(long *)((long)puVar12 + lVar13 + 0x28) = lVar16;
            plVar15 = plVar11;
            lVar4 = lVar14;
            lVar8 = lVar16;
            while (plVar7 = plVar11, lVar5 = lVar14, lVar9 = lVar16, lVar8 != 0) {
              if (*(char *)(*plVar15 + 10) != '\x01') goto joined_r0x0014d558;
              lVar4 = lVar4 + -8;
              plVar15 = plVar15 + 1;
              lVar8 = lVar4;
            }
            *(undefined1 *)((long)puVar12 + lVar13 + 0x1a) = 1;
joined_r0x0014d558:
            do {
              if (lVar9 == 0) goto LAB_0014d57c;
              if (*(char *)(*plVar7 + 0xb) != '\x01') goto joined_r0x0014d584;
              lVar5 = lVar5 + -8;
              plVar7 = plVar7 + 1;
              lVar9 = lVar5;
            } while( true );
          }
          goto LAB_0014d5ac;
        }
        param_1[0x53] = (long)local_a0;
        if (plVar11 == plVar1) {
          param_1[0x54] = (long)local_98;
          param_1[0x55] = (long)local_90;
          plVar11 = &local_88;
          local_a0 = &local_88;
          local_90 = &local_68;
          goto joined_r0x0014d494;
        }
        plVar15 = (long *)param_1[0x55];
        param_1[0x54] = (long)local_98;
        param_1[0x55] = (long)local_90;
        local_a0 = plVar11;
        local_98 = plVar11;
        local_90 = plVar15;
        if (puVar10 != (undefined8 *)0x0) goto LAB_0014d498;
        goto LAB_0014d5c0;
      }
      local_a0 = (long *)FUN_0014c080(param_1);
      puVar12 = (undefined8 *)0x0;
      if (local_a0 == (long *)0x0) goto LAB_0014d674;
      FUN_0014c270(plVar17,&local_a0);
    }
    *param_1 = (long)(pcVar2 + 1);
    lVar18 = (lVar3 - lVar18 >> 3) * 8;
    auVar20 = FUN_00156e64(param_1,param_1[2] + lVar18,param_1[3]);
    pvVar19 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar18;
    lVar18 = *(long *)((long)pvVar19 + 8);
    puVar10 = pvVar19;
    if (0xfef < lVar18 + 0x20U) {
      puVar10 = malloc(0x1000);
      if (puVar10 == (void *)0x0) goto LAB_0014d6a8;
      lVar18 = 0;
      *puVar10 = pvVar19;
      puVar10[1] = 0;
      param_1[0x266] = (long)puVar10;
    }
    *(long *)((long)puVar10 + 8) = lVar18 + 0x20;
    puVar12 = (undefined8 *)((long)puVar10 + lVar18 + 0x10);
    *puVar12 = &PTR_FUN_001688b0;
    *(undefined4 *)((long)puVar10 + lVar18 + 0x18) = 0x1010123;
    *(undefined1 (*) [16])((long)puVar10 + lVar18 + 0x20) = auVar20;
    goto LAB_0014d674;
  }
  puVar12 = (undefined8 *)0x0;
LAB_0014d674:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar12);
LAB_0014d57c:
  *(undefined1 *)((long)puVar12 + lVar13 + 0x1b) = 1;
joined_r0x0014d584:
  do {
    if (lVar16 == 0) break;
    if (*(char *)(*plVar11 + 9) != '\x01') goto LAB_0014d5ac;
    lVar14 = lVar14 + -8;
    plVar11 = plVar11 + 1;
    lVar16 = lVar14;
  } while( true );
  *(undefined1 *)((long)puVar12 + lVar13 + 0x19) = 1;
LAB_0014d5ac:
  FUN_00154e80(*(undefined8 *)(param_1[0x54] + -8),&local_b0);
  plVar11 = local_a0;
LAB_0014d5c0:
  if (plVar11 != &local_88) {
    free(plVar11);
  }
  if (puVar10 == (undefined8 *)0x0) goto LAB_0014d66c;
  goto LAB_0014d2fc;
LAB_0014d66c:
  puVar12 = (undefined8 *)0x0;
  goto LAB_0014d674;
}

