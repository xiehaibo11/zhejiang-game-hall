
ulong FUN_00a66bfc(long *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  
  if (99 < param_2 - 200U) {
    FUN_00a38a08(*param_1,"Couldn\'t set desired mode");
    return 0x11;
  }
  if (param_2 != 200) {
    FUN_00a38740(*param_1,"Got a %03d response code instead of the assumed 200\n",param_2);
  }
  switch(param_3) {
  case 0x13:
    iVar2 = *(int *)(*(long *)(*param_1 + 0x218) + 0x18);
    if (iVar2 == 0) {
LAB_00a66e94:
      uVar7 = FUN_00a67274(param_1);
      return uVar7;
    }
    if ((iVar2 == 1) && (param_1[0xd4] != 0)) {
      uVar4 = FUN_00a54d8c(param_1 + 0xc3,"SIZE %s");
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar8 = 0x17;
    }
    else {
      if (param_1[0xd4] == 0) goto LAB_00a66e94;
      uVar4 = FUN_00a54d8c(param_1 + 0xc3,"REST %d",0);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar8 = 0x1a;
    }
    break;
  case 0x14:
    lVar11 = *param_1;
    if (*(int *)(lVar11 + 0x5f8) == 2) {
      pcVar10 = *(char **)(lVar11 + 0x8cc0);
      pcVar5 = (char *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_00a66dcc;
      if ((*pcVar10 == '\0') || (pcVar5 = strchr(pcVar10,0x2f), pcVar5 == (char *)0x0)) {
        pcVar5 = (char *)0x0;
        pcVar10 = *(char **)(lVar11 + 0x6a0);
      }
      else {
        pcVar5 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar10);
        if (pcVar5 == (char *)0x0) {
          return 0x1b;
        }
        sVar6 = strlen(pcVar5);
        if ((pcVar5[sVar6 - 1] == '/') || (pcVar10 = strrchr(pcVar5,0x2f), pcVar10 == (char *)0x0))
        goto LAB_00a66dcc;
        pcVar10[1] = '\0';
        pcVar10 = *(char **)(lVar11 + 0x6a0);
      }
    }
    else {
      pcVar5 = (char *)0x0;
LAB_00a66dcc:
      pcVar10 = *(char **)(lVar11 + 0x6a0);
    }
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "NLST";
      if (*(char *)(lVar11 + 0x615) == '\0') {
        pcVar10 = "LIST";
      }
    }
    pcVar1 = pcVar5;
    pcVar3 = " ";
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
      pcVar3 = "";
    }
    lVar11 = FUN_00a24258("%s%s%s",pcVar10,pcVar3,pcVar1);
    if (lVar11 == 0) {
      (*(code *)PTR_free_01769a00)(pcVar5);
      return 0x1b;
    }
    uVar4 = FUN_00a54d8c(param_1 + 0xc3,"%s",lVar11);
    (*(code *)PTR_free_01769a00)(pcVar5);
    (*(code *)PTR_free_01769a00)(lVar11);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar8 = 0x1f;
    break;
  case 0x15:
    uVar7 = FUN_00a668f0(param_1,1,0xd);
    return uVar7;
  case 0x16:
    puVar9 = *(undefined8 **)(*param_1 + 1000);
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
    if (puVar9 == (undefined8 *)0x0) {
      uVar7 = FUN_00a67080(param_1,0);
      return uVar7;
    }
    pcVar10 = (char *)*puVar9;
    pcVar5 = pcVar10 + 1;
    if (*pcVar10 != '*') {
      pcVar5 = pcVar10;
    }
    *(uint *)(param_1 + 0xd8) = (uint)(*pcVar10 == '*');
    uVar4 = FUN_00a54d8c(param_1 + 0xc3,"%s",pcVar5);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar8 = 0xe;
    break;
  default:
    return 0;
  }
  *(undefined4 *)(param_1 + 0xd9) = uVar8;
  return 0;
}

