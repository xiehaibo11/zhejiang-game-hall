
undefined8 * FUN_01849c74(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  
  pcVar7 = (char *)*param_1;
  if ((1 < (ulong)(param_1[1] - (long)pcVar7)) && (*pcVar7 == 'T')) {
    if (pcVar7[1] == 's') {
      pcVar6 = "struct";
      *param_1 = (long)(pcVar7 + 2);
      pcVar7 = "";
      goto LAB_01849d34;
    }
    if (*pcVar7 == 'T') {
      if (pcVar7[1] == 'u') {
        pcVar6 = "union";
        *param_1 = (long)(pcVar7 + 2);
        pcVar7 = "";
        goto LAB_01849d34;
      }
      if ((*pcVar7 == 'T') && (pcVar7[1] == 'e')) {
        pcVar6 = "enum";
        *param_1 = (long)(pcVar7 + 2);
        pcVar7 = "";
        goto LAB_01849d34;
      }
    }
  }
  pcVar6 = (char *)0x0;
  pcVar7 = (char *)0x0;
LAB_01849d34:
  puVar1 = (undefined8 *)FUN_0183b554(param_1,0);
  puVar5 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (pcVar6 != pcVar7)) {
    pvVar8 = (void *)param_1[0x25c];
    plVar3 = (long *)((long)pvVar8 + 8);
    lVar4 = *plVar3;
    puVar2 = pvVar8;
    if (0xfef < lVar4 + 0x30U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar2 = pvVar8;
      plVar3 = puVar2 + 1;
      *plVar3 = 0;
      param_1[0x25c] = (long)puVar2;
    }
    *plVar3 = lVar4 + 0x30;
    puVar5 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
    *puVar5 = &PTR_FUN_01ce15e0;
    *(undefined8 **)((long)puVar2 + lVar4 + 0x30) = puVar1;
    *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010106;
    *(char **)((long)puVar2 + lVar4 + 0x20) = pcVar6;
    *(char **)((long)puVar2 + lVar4 + 0x28) = pcVar7;
  }
  return puVar5;
}

