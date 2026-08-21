
undefined8 FUN_00a63850(long *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  char *__s;
  char *__s_00;
  
  lVar6 = *param_1;
  if ((*(char *)((long)param_1 + 0x3be) != '\0') && (*(char *)(lVar6 + 0x612) == '\0')) {
    ppuVar1 = &PTR_DAT_016a4bf0;
    if ((undefined **)param_1[0x80] != &PTR_DAT_016a4af0) {
      ppuVar1 = &PTR_DAT_016a4c70;
    }
    UNRECOVERED_JUMPTABLE = (code *)ppuVar1[1];
    param_1[0x80] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00a63954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar5;
  }
  plVar3 = (long *)(*(code *)PTR_malloc_017699f8)(0x28);
  *(long **)(*param_1 + 0x218) = plVar3;
  if (plVar3 == (long *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    pcVar4 = (char *)(*(long *)(lVar6 + 0x8cc0) + 1);
    *(char **)(lVar6 + 0x8cc0) = pcVar4;
    *(undefined1 *)(lVar6 + 0x8cc8) = 1;
    pcVar4 = strstr(pcVar4,";type=");
    if ((pcVar4 != (char *)0x0) ||
       (pcVar4 = strstr((char *)param_1[0x16],";type="), pcVar4 != (char *)0x0)) {
      *pcVar4 = '\0';
      cVar2 = FUN_00a4a0e0(pcVar4[6]);
      *(undefined1 *)((long)param_1 + 0x3d4) = 1;
      if (cVar2 == 'D') {
        *(undefined1 *)(lVar6 + 0x615) = 1;
      }
      else if (cVar2 == 'A') {
        *(undefined1 *)(lVar6 + 0x613) = 1;
      }
      else {
        *(undefined1 *)(lVar6 + 0x613) = 0;
      }
    }
    lVar6 = *param_1;
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[4] = 0;
    *plVar3 = lVar6 + 0x98;
    __s_00 = (char *)param_1[0x43];
    plVar3[1] = (long)__s_00;
    __s = (char *)param_1[0x44];
    plVar3[2] = (long)__s;
    pcVar4 = strchr(__s_00,0xd);
    if ((((pcVar4 == (char *)0x0) && (pcVar4 = strchr(__s_00,10), pcVar4 == (char *)0x0)) &&
        (pcVar4 = strchr(__s,0xd), pcVar4 == (char *)0x0)) &&
       (pcVar4 = strchr(__s,10), pcVar4 == (char *)0x0)) {
      param_1[0xdc] = -1;
      uVar5 = 0;
    }
    else {
      uVar5 = 3;
    }
  }
  return uVar5;
}

