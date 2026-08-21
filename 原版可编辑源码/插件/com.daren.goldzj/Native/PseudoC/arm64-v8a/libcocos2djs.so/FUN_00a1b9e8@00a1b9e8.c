
long * FUN_00a1b9e8(undefined8 param_1,char *param_2,long *param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  FILE *__stream;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  
  plVar5 = param_3;
  if (param_3 == (long *)0x0) {
    plVar5 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x28);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    pcVar6 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar6 = "none";
    }
    lVar9 = (*(code *)PTR_strdup_01d1b758)(pcVar6);
    plVar5[1] = lVar9;
    if (lVar9 != 0) goto LAB_00a1ba1c;
    (*(code *)PTR_free_01d1b748)();
    __stream = (FILE *)0x0;
    bVar1 = true;
  }
  else {
LAB_00a1ba1c:
    param_4 = param_4 & 1;
    *(undefined1 *)(plVar5 + 2) = 0;
    if (param_2 == (char *)0x0) {
LAB_00a1ba68:
      *(byte *)(plVar5 + 4) = param_4;
LAB_00a1ba6c:
      *(undefined1 *)(plVar5 + 2) = 1;
      return plVar5;
    }
    iVar4 = strcmp(param_2,"-");
    if (iVar4 == 0) {
      *(byte *)(plVar5 + 4) = param_4;
      __stream = (FILE *)&__sF;
      bVar1 = false;
    }
    else {
      if (*param_2 == '\0') goto LAB_00a1ba68;
      __stream = fopen(param_2,"r");
      *(byte *)(plVar5 + 4) = param_4;
      if (__stream == (FILE *)0x0) goto LAB_00a1ba6c;
      bVar1 = true;
    }
    pcVar6 = (char *)(*(code *)PTR_malloc_01d1b740)(5000);
    if (pcVar6 != (char *)0x0) {
      while (pcVar7 = fgets(pcVar6,5000,__stream), pcVar7 != (char *)0x0) {
        bVar2 = false;
        while ((sVar8 = strlen(pcVar7), sVar8 == 0 || (pcVar7[sVar8 - 1] != '\n'))) {
          pcVar7 = fgets(pcVar6,5000,__stream);
          bVar2 = true;
          if (pcVar7 == (char *)0x0) goto LAB_00a1bcb4;
        }
        if (!bVar2) {
          iVar4 = FUN_00a33994("Set-Cookie:",pcVar6,0xb);
          pcVar7 = pcVar6;
          if (iVar4 != 0) {
            pcVar7 = pcVar6 + 0xb;
          }
          for (; (*pcVar7 == ' ' || (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1) {
          }
          FUN_00a1bcd8(param_1,plVar5,iVar4 != 0,pcVar7,0,0);
        }
      }
LAB_00a1bcb4:
      (*(code *)PTR_free_01d1b748)(pcVar6);
      if (bVar1) {
        fclose(__stream);
      }
      goto LAB_00a1ba6c;
    }
    (*(code *)PTR_free_01d1b748)();
    if (param_3 != (long *)0x0) goto LAB_00a1bbe8;
  }
  (*(code *)PTR_free_01d1b748)(plVar5[1]);
  plVar3 = (long *)*plVar5;
  while (plVar3 != (long *)0x0) {
    lVar9 = *plVar3;
    (*(code *)PTR_free_01d1b748)(plVar3[7]);
    (*(code *)PTR_free_01d1b748)(plVar3[5]);
    (*(code *)PTR_free_01d1b748)(plVar3[3]);
    (*(code *)PTR_free_01d1b748)(plVar3[4]);
    (*(code *)PTR_free_01d1b748)(plVar3[1]);
    (*(code *)PTR_free_01d1b748)(plVar3[2]);
    (*(code *)PTR_free_01d1b748)(plVar3[10]);
    (*(code *)PTR_free_01d1b748)(plVar3[9]);
    (*(code *)PTR_free_01d1b748)(plVar3);
    plVar3 = (long *)lVar9;
  }
  (*(code *)PTR_free_01d1b748)(plVar5);
LAB_00a1bbe8:
  if (!bVar1) {
    return (long *)0x0;
  }
  if (__stream == (FILE *)0x0) {
    return (long *)0x0;
  }
  fclose(__stream);
  return (long *)0x0;
}

