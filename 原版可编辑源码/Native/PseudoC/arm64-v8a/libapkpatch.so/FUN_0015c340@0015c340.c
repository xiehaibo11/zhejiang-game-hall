
undefined8 * FUN_0015c340(long *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  
  pcVar1 = (char *)*param_1;
  if (((ulong)(param_1[1] - (long)pcVar1) < 2) || (*pcVar1 != 'T')) {
LAB_0015c3a4:
    pcVar7 = (char *)0x0;
    pcVar8 = (char *)0x0;
  }
  else {
    cVar2 = pcVar1[1];
    if (cVar2 == 'e') {
      pcVar8 = "enum";
      pcVar7 = "";
    }
    else if (cVar2 == 's') {
      pcVar8 = "struct";
      pcVar7 = "";
    }
    else {
      if (cVar2 != 'u') goto LAB_0015c3a4;
      pcVar8 = "union";
      pcVar7 = "";
    }
    *param_1 = (long)(pcVar1 + 2);
  }
  puVar3 = (undefined8 *)FUN_0014b4c0(param_1,0);
  puVar6 = puVar3;
  if ((puVar3 != (undefined8 *)0x0) && (pcVar8 != pcVar7)) {
    pvVar9 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar9 + 8);
    puVar4 = pvVar9;
    if (0xfef < lVar5 + 0x30U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar4 = pvVar9;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    puVar6 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
    *puVar6 = &PTR_FUN_00169020;
    *(undefined8 **)((long)puVar4 + lVar5 + 0x30) = puVar3;
    *(long *)((long)puVar4 + 8) = lVar5 + 0x30;
    *(undefined4 *)((long)puVar4 + lVar5 + 0x18) = 0x1010106;
    *(char **)((long)puVar4 + lVar5 + 0x20) = pcVar8;
    *(char **)((long)puVar4 + lVar5 + 0x28) = pcVar7;
  }
  return puVar6;
}

