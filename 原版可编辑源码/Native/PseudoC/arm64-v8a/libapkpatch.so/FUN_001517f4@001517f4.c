
undefined8 * FUN_001517f4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar5 = (char *)*param_1;
  if (((1 < (ulong)(param_1[1] - (long)pcVar5)) && (*pcVar5 == 'c')) && (pcVar5[1] == 'v')) {
    lVar6 = param_1[0x61];
    *param_1 = (long)(pcVar5 + 2);
    *(undefined1 *)(param_1 + 0x61) = 0;
    lVar2 = FUN_0014a548();
    *(char *)(param_1 + 0x61) = (char)lVar6;
    if (lVar2 != 0) {
      pcVar5 = (char *)*param_1;
      if ((pcVar5 != (char *)param_1[1]) && (*pcVar5 == '_')) {
        lVar6 = param_1[2];
        lVar7 = param_1[3];
        pcVar5 = pcVar5 + 1;
        *param_1 = (long)pcVar5;
        if (pcVar5 == (char *)param_1[1]) goto LAB_001518b0;
        while (*pcVar5 != 'E') {
LAB_001518b0:
          do {
            local_50 = FUN_0014e504(param_1);
            if (local_50 == 0) goto LAB_00151994;
            FUN_0014c270(param_1 + 2,&local_50);
            pcVar5 = (char *)*param_1;
          } while (pcVar5 == (char *)param_1[1]);
        }
        lVar6 = (lVar7 - lVar6 >> 3) * 8;
        *param_1 = (long)(pcVar5 + 1);
        auVar10 = FUN_00156e64(param_1,param_1[2] + lVar6,param_1[3]);
        pvVar9 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar6;
        lVar6 = *(long *)((long)pvVar9 + 8);
        puVar3 = pvVar9;
        if (0xfef < lVar6 + 0x30U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) {
LAB_00151a58:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar3 = pvVar9;
          puVar3[1] = 0;
          param_1[0x266] = (long)puVar3;
        }
        *(long *)((long)puVar3 + 8) = lVar6 + 0x30;
        puVar4 = (undefined8 *)((long)puVar3 + lVar6 + 0x10);
        *puVar4 = &PTR_FUN_00167ce0;
        *(undefined4 *)((long)puVar3 + lVar6 + 0x18) = 0x101013c;
        *(long *)((long)puVar3 + lVar6 + 0x20) = lVar2;
        *(undefined1 (*) [16])((long)puVar3 + lVar6 + 0x28) = auVar10;
        goto LAB_00151998;
      }
      local_50 = FUN_0014e504(param_1);
      if (local_50 != 0) {
        pvVar9 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar9 + 8);
        puVar3 = pvVar9;
        if (0xfef < lVar6 + 0x10U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) goto LAB_00151a58;
          lVar6 = 0;
          *puVar3 = pvVar9;
          puVar3[1] = 0;
          param_1[0x266] = (long)puVar3;
        }
        *(long *)((long)puVar3 + 8) = lVar6 + 0x10;
        plVar8 = (long *)((long)puVar3 + lVar6 + 0x10);
        *plVar8 = local_50;
        pvVar9 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar9 + 8);
        puVar3 = pvVar9;
        if (0xfef < lVar6 + 0x30U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) goto LAB_00151a58;
          lVar6 = 0;
          *puVar3 = pvVar9;
          puVar3[1] = 0;
          param_1[0x266] = (long)puVar3;
        }
        *(long *)((long)puVar3 + 8) = lVar6 + 0x30;
        puVar4 = (undefined8 *)((long)puVar3 + lVar6 + 0x10);
        *puVar4 = &PTR_FUN_00167ce0;
        *(undefined4 *)((long)puVar3 + lVar6 + 0x18) = 0x101013c;
        *(long *)((long)puVar3 + lVar6 + 0x20) = lVar2;
        *(long **)((long)puVar3 + lVar6 + 0x28) = plVar8;
        *(undefined8 *)((long)puVar3 + lVar6 + 0x30) = 1;
        goto LAB_00151998;
      }
    }
  }
LAB_00151994:
  puVar4 = (undefined8 *)0x0;
LAB_00151998:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}

