
undefined8 FUN_00a67274(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  if (*(int *)(*(long *)(lVar5 + 0x218) + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xd9) = 0xd;
    uVar3 = FUN_00a668f0(param_1,1,0xd);
    return uVar3;
  }
  if (*(char *)(lVar5 + 0x616) != '\0') {
    uVar3 = FUN_00a673c8(param_1,0);
    return uVar3;
  }
  if (*(char *)(lVar5 + 0x62e) != '\0') {
    plVar1 = param_1 + 0xc3;
    if (param_1[0xd4] == 0) {
      pcVar4 = *(char **)(lVar5 + 0x6a0);
      if (*(char **)(lVar5 + 0x6a0) == (char *)0x0) {
        pcVar4 = "NLST";
        if (*(char *)(lVar5 + 0x615) == '\0') {
          pcVar4 = "LIST";
        }
      }
      uVar3 = FUN_00a54d8c(plVar1,"PRET %s",pcVar4);
      iVar2 = (int)uVar3;
    }
    else if (*(char *)(lVar5 + 0x621) == '\0') {
      uVar3 = FUN_00a54d8c(plVar1,"PRET RETR %s");
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_00a54d8c(plVar1,"PRET STOR %s");
      iVar2 = (int)uVar3;
    }
    if (iVar2 != 0) {
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0xd9) = 0x1d;
    return 0;
  }
  if (*(char *)((long)param_1 + 0x3cc) == '\0') {
    uVar6 = 1;
    if (*(char *)((long)param_1 + 0x3c3) == '\0') goto LAB_00a6731c;
    *(undefined1 *)((long)param_1 + 0x3cc) = 1;
  }
  uVar6 = 0;
LAB_00a6731c:
  uVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",&DAT_013cbe2a + (uVar6 | uVar6 << 2));
  if ((int)uVar3 == 0) {
    *(int *)((long)param_1 + 0x6bc) = (int)uVar6;
    *(undefined4 *)(param_1 + 0xd9) = 0x1e;
    FUN_00a38740(*param_1,"Connect data stream passively\n");
    uVar3 = 0;
  }
  return uVar3;
}

