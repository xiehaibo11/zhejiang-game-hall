
undefined8 FUN_00a51f28(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  *param_2 = 0;
  lVar2 = *param_1;
  uVar3 = FUN_00a45500(lVar2,*(undefined8 *)(lVar2 + 0x8cc0),0,*(long *)(lVar2 + 0x218) + 8,0,1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x6a0) != 0) {
    uVar3 = FUN_00a45500(lVar2,*(long *)(lVar2 + 0x6a0),0,*(long *)(lVar2 + 0x218) + 0x10,0,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar2 = *param_1;
  }
                    /* try { // try from 00a51fb8 to 00b51fd3 has its CatchHandler @ 00a52050 */
  *(undefined8 *)(lVar2 + 0x78) = 0xffffffffffffffff;
  FUN_00a3112c(lVar2,0);
  FUN_00a31094(lVar2,0);
                    /* try { // try from 00a51fd4 to 00b52087 has its CatchHandler @ 00a51f6c */
  FUN_00a30ed8(lVar2,0xffffffffffffffff);
  FUN_00a30eac(lVar2,0xffffffffffffffff);
  lVar2 = *param_1;
  puVar5 = *(undefined4 **)(lVar2 + 0x218);
  if (*(char *)(lVar2 + 0x620) != '\0') {
    *puVar5 = 1;
  }
  *param_2 = 0;
  if (**(char **)(puVar5 + 2) == '\0') {
    pcVar4 = *(char **)(puVar5 + 4);
    if (pcVar4 == (char *)0x0) {
LAB_00a5208c:
      pcVar4 = "LIST";
    }
    else {
LAB_00a52050:
                    /* catch() { ... } // from try @ 00a51fb8 with catch @ 00a52050 */
      if (*pcVar4 == '\0') goto LAB_00a5208c;
    }
    uVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",pcVar4);
    iVar1 = (int)uVar3;
    goto joined_r0x00a520a0;
  }
  if (*(char *)(lVar2 + 0x615) == '\0') {
    pcVar4 = *(char **)(puVar5 + 4);
    pcVar6 = "RETR";
    if (pcVar4 == (char *)0x0) goto LAB_00a52070;
LAB_00a52038:
    if (*pcVar4 == '\0') goto LAB_00a52070;
  }
  else {
    *puVar5 = 1;
    pcVar4 = *(char **)(puVar5 + 4);
    if (**(char **)(puVar5 + 2) == '\0') {
                    /* try { // try from 00a52088 to 00b520cb has its CatchHandler @ 00a52088
                       catch() { ... } // from try @ 00a52088 with catch @ 00a52088
                       catch() { ... } // from try @ 00a520e0 with catch @ 00a52088 */
      if (pcVar4 != (char *)0x0) goto LAB_00a52050;
      goto LAB_00a5208c;
    }
    pcVar6 = "LIST";
    if (pcVar4 != (char *)0x0) goto LAB_00a52038;
LAB_00a52070:
    pcVar4 = pcVar6;
  }
  uVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s %s",pcVar4);
  iVar1 = (int)uVar3;
joined_r0x00a520a0:
  if (iVar1 != 0) {
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0xd1) = 9;
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar4 = (char *)((long)param_1 + 0x68c), *pcVar4 == '\0')) {
    uVar3 = FUN_00a2d674(param_1,0,pcVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*pcVar4 == '\0') {
      return 0;
    }
  }
                    /* try { // try from 00a520cc to 00b520df has its CatchHandler @ 00a52154 */
  uVar3 = FUN_00a54a20(param_1 + 0xc3,0);
                    /* try { // try from 00a520e0 to 00b5218f has its CatchHandler @ 00a52088 */
  *param_2 = (int)param_1[0xd1] == 0;
                    /* try { // try from 00a51f6c to 00b51fb7 has its CatchHandler @ 00a51f6c
                       catch() { ... } // from try @ 00a51f6c with catch @ 00a51f6c
                       catch() { ... } // from try @ 00a51fd4 with catch @ 00a51f6c */
  return uVar3;
}

