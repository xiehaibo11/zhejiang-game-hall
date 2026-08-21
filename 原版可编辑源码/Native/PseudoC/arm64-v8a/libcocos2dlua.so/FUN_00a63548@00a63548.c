
undefined4 FUN_00a63548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  
  if (*(char **)(param_1 + 0x58) == (char *)0x0) {
    pcVar6 = (char *)(*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR_strdup_01769a10;
    if (pcVar6 == (char *)0x0) {
      return 0x1b;
    }
    basename(pcVar6);
    pcVar9 = (char *)(*(code *)puVar1)();
    (*(code *)PTR_free_01769a00)(pcVar6);
    pcVar6 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      return 0x1b;
    }
  }
  else {
    pcVar9 = (char *)0x0;
    pcVar6 = *(char **)(param_1 + 0x58);
  }
  pcVar3 = strchr(pcVar6,0x5c);
  if ((pcVar3 != (char *)0x0) || (pcVar3 = strchr(pcVar6,0x22), pcVar3 != (char *)0x0)) {
    puVar1 = PTR_malloc_017699f8;
    sVar4 = strlen(pcVar6);
    pcVar5 = (char *)(*(code *)puVar1)(sVar4 << 1 | 1);
    pcVar3 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      (*(code *)PTR_free_01769a00)(pcVar9);
      return 0x1b;
    }
    do {
      cVar8 = *pcVar6;
      if ((cVar8 == '\"') || (cVar8 == '\\')) {
        pcVar7 = pcVar3 + 1;
        *pcVar3 = '\\';
        cVar8 = *pcVar6;
      }
      else {
        pcVar7 = pcVar3;
        if (cVar8 == '\0') goto LAB_00a635f8;
      }
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar8;
      pcVar3 = pcVar7 + 1;
    } while( true );
  }
  pcVar5 = (char *)0x0;
LAB_00a63674:
  uVar2 = FUN_00a632b4(param_2,param_3,"; filename=\"%s\"",pcVar6);
  (*(code *)PTR_free_01769a00)(pcVar5);
  (*(code *)PTR_free_01769a00)(pcVar9);
  return uVar2;
LAB_00a635f8:
  *pcVar3 = '\0';
  pcVar6 = pcVar5;
  goto LAB_00a63674;
}

