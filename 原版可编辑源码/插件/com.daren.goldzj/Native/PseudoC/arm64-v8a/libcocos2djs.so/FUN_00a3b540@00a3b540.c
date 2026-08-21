
undefined8 FUN_00a3b540(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  *param_2 = 0;
  lVar2 = *param_1;
  uVar3 = FUN_00a2eb18(lVar2,*(undefined8 *)(lVar2 + 0x8cc0),0,*(long *)(lVar2 + 0x218) + 8,0,1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x6a0) != 0) {
    uVar3 = FUN_00a2eb18(lVar2,*(long *)(lVar2 + 0x6a0),0,*(long *)(lVar2 + 0x218) + 0x10,0,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar2 = *param_1;
  }
  *(undefined8 *)(lVar2 + 0x78) = 0xffffffffffffffff;
  FUN_00a1b744(lVar2,0);
  FUN_00a1b6ac(lVar2,0);
                    /* try { // try from 00a3b5e4 to 00b3b6c7 has its CatchHandler @ 00a3b424 */
  FUN_00a1b4f0(lVar2,0xffffffffffffffff);
  FUN_00a1b4c4(lVar2,0xffffffffffffffff);
  lVar2 = *param_1;
  puVar5 = *(undefined4 **)(lVar2 + 0x218);
  if (*(char *)(lVar2 + 0x620) != '\0') {
    *puVar5 = 1;
  }
  *param_2 = 0;
  if (**(char **)(puVar5 + 2) == '\0') {
                    /* catch() { ... } // from try @ 00a3b498 with catch @ 00a3b65c */
    pcVar4 = *(char **)(puVar5 + 4);
                    /* catch() { ... } // from try @ 00a3b478 with catch @ 00a3b660 */
    if (pcVar4 == (char *)0x0) {
LAB_00a3b6a4:
      pcVar4 = "LIST";
    }
    else {
LAB_00a3b668:
      if (*pcVar4 == '\0') goto LAB_00a3b6a4;
    }
    uVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s",pcVar4);
    iVar1 = (int)uVar3;
    goto joined_r0x00a3b6b8;
  }
  if (*(char *)(lVar2 + 0x615) == '\0') {
    pcVar4 = *(char **)(puVar5 + 4);
    pcVar6 = "RETR";
    if (pcVar4 == (char *)0x0) goto LAB_00a3b688;
LAB_00a3b650:
    if (*pcVar4 == '\0') goto LAB_00a3b688;
  }
  else {
    *puVar5 = 1;
    pcVar4 = *(char **)(puVar5 + 4);
    if (**(char **)(puVar5 + 2) == '\0') {
      if (pcVar4 != (char *)0x0) goto LAB_00a3b668;
      goto LAB_00a3b6a4;
    }
    pcVar6 = "LIST";
    if (pcVar4 != (char *)0x0) goto LAB_00a3b650;
LAB_00a3b688:
    pcVar4 = pcVar6;
  }
  uVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s %s",pcVar4);
  iVar1 = (int)uVar3;
joined_r0x00a3b6b8:
  if (iVar1 != 0) {
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0xd1) = 9;
                    /* try { // try from 00a3b6c8 to 00b3b71b has its CatchHandler @ 00a3b6c8
                       catch() { ... } // from try @ 00a3b6c8 with catch @ 00a3b6c8
                       catch() { ... } // from try @ 00a3b900 with catch @ 00a3b6c8 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar4 = (char *)((long)param_1 + 0x68c), *pcVar4 == '\0')) {
    uVar3 = FUN_00a17c8c(param_1,0,pcVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*pcVar4 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_00a3e038(param_1 + 0xc3,0);
  *param_2 = (int)param_1[0xd1] == 0;
  return uVar3;
}

