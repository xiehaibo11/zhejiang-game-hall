
/* WARNING: Type propagation algorithm not settling */

int FUN_00a3c9b4(long *param_1,char *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  char *pcVar11;
  
  *param_2 = '\0';
  lVar10 = *param_1;
  if (*(long *)(lVar10 + 0x6a0) != 0) {
                    /* catch() { ... } // from try @ 00a3c924 with catch @ 00a3c9f8 */
    iVar3 = FUN_00a2eb18(lVar10,*(long *)(lVar10 + 0x6a0),0,*(long *)(lVar10 + 0x218) + 8,0,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    lVar10 = *param_1;
  }
                    /* catch() { ... } // from try @ 00a3c944 with catch @ 00a3ca10 */
                    /* catch() { ... } // from try @ 00a3c8fc with catch @ 00a3ca14 */
                    /* catch() { ... } // from try @ 00a3c94c with catch @ 00a3ca18 */
  *(undefined8 *)(lVar10 + 0x78) = 0xffffffffffffffff;
  FUN_00a1b744(lVar10,0);
                    /* catch() { ... } // from try @ 00a3c8e8 with catch @ 00a3ca28 */
  FUN_00a1b6ac(lVar10,0);
                    /* catch() { ... } // from try @ 00a3c8bc with catch @ 00a3ca2c */
  FUN_00a1b4f0(lVar10,0xffffffffffffffff);
                    /* catch() { ... } // from try @ 00a3c92c with catch @ 00a3ca3c */
  FUN_00a1b4c4(lVar10,0xffffffffffffffff);
  lVar10 = *param_1;
  puVar9 = *(undefined4 **)(lVar10 + 0x218);
  if (*(char *)(lVar10 + 0x620) != '\0') {
    *puVar9 = 1;
  }
  *param_2 = '\0';
  puVar8 = *(undefined8 **)(lVar10 + 0x870);
  *(undefined8 **)(puVar9 + 4) = puVar8;
  if (*(char *)(lVar10 + 0x621) == '\0') {
                    /* try { // try from 00a3ca94 to 00b3cad7 has its CatchHandler @ 00a3ca94
                       catch() { ... } // from try @ 00a3ca94 with catch @ 00a3ca94
                       catch() { ... } // from try @ 00a3cb04 with catch @ 00a3ca94
                       catch() { ... } // from try @ 00a3cb20 with catch @ 00a3ca94 */
    pcVar11 = *(char **)(puVar9 + 2);
    if (puVar8 == (undefined8 *)0x0) {
      if (pcVar11 != (char *)0x0) goto LAB_00a3cae0;
LAB_00a3cbb0:
      pcVar6 = "HELP";
      goto LAB_00a3cbb8;
    }
    pcVar6 = "VRFY";
    if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
      pcVar6 = pcVar11;
    }
    iVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s %s",pcVar6,*puVar8);
joined_r0x00a3cacc:
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar7 = 7;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      pcVar11 = *(char **)(puVar9 + 2);
                    /* try { // try from 00a3cad8 to 00b3cb03 has its CatchHandler @ 00a3cb50 */
      if (pcVar11 == (char *)0x0) goto LAB_00a3cbb0;
LAB_00a3cae0:
      pcVar6 = "HELP";
      if (*pcVar11 != '\0') {
        pcVar6 = pcVar11;
      }
LAB_00a3cbb8:
                    /* try { // try from 00a3cbbc to 00b3ccaf has its CatchHandler @ 00a3cb64 */
      iVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s",pcVar6);
      goto joined_r0x00a3cacc;
    }
    if (*(char **)(lVar10 + 0x808) == (char *)0x0) {
                    /* try { // try from 00a3cb04 to 00b3cb13 has its CatchHandler @ 00a3ca94 */
      lVar5 = (*(code *)PTR_strdup_01d1b758)(&DAT_018961ce);
    }
    else {
      if (**(char **)(lVar10 + 0x808) == '<') {
        pcVar11 = "%s";
      }
      else {
        pcVar11 = "<%s>";
      }
      lVar5 = FUN_00a0e870(pcVar11);
    }
                    /* try { // try from 00a3cb14 to 00b3cb1f has its CatchHandler @ 00a3cb50 */
    if (lVar5 == 0) {
      return 0x1b;
    }
                    /* try { // try from 00a3cb20 to 00b3cb63 has its CatchHandler @ 00a3ca94 */
    if ((*(char **)(lVar10 + 0x810) == (char *)0x0) || (*(int *)((long)param_1 + 0x6ac) == 0)) {
      lVar4 = 0;
    }
    else {
      if (**(char **)(lVar10 + 0x810) == '\0') {
        lVar4 = (*(code *)PTR_strdup_01d1b758)(&DAT_018961ce);
      }
      else {
        lVar4 = FUN_00a0e870("%s");
      }
      if (lVar4 == 0) goto LAB_00a3cc80;
    }
                    /* catch() { ... } // from try @ 00a3cad8 with catch @ 00a3cb50
                       catch() { ... } // from try @ 00a3cb14 with catch @ 00a3cb50 */
    plVar1 = param_1 + 0xc3;
                    /* catch() { ... } // from try @ 00a3cbbc with catch @ 00a3cb64 */
    if ((*(char *)((long)param_1 + 0x6b9) == '\0') || (*(long *)(*param_1 + 0x8cf8) < 1)) {
      if (lVar4 == 0) {
        iVar3 = FUN_00a3e3a4(plVar1,"MAIL FROM:%s",lVar5);
      }
      else {
        iVar3 = FUN_00a3e3a4(plVar1,"MAIL FROM:%s AUTH=%s",lVar5,lVar4);
      }
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_00a0e870("%ld",*(undefined8 *)(lVar10 + 0x8cf8));
      if (lVar10 == 0) {
        (*(code *)PTR_free_01d1b748)(lVar5);
        lVar5 = lVar4;
LAB_00a3cc80:
        (*(code *)PTR_free_01d1b748)(lVar5);
        return 0x1b;
      }
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00a3cba8 with catch @ 00a3cc94 */
        iVar3 = FUN_00a3e3a4(plVar1,"MAIL FROM:%s SIZE=%s",lVar5,lVar10);
      }
      else {
        iVar3 = FUN_00a3e3a4(plVar1,"MAIL FROM:%s AUTH=%s SIZE=%s",lVar5,lVar4,lVar10);
                    /* try { // try from 00a3cba8 to 00b3cbbb has its CatchHandler @ 00a3cc94 */
      }
    }
                    /* try { // try from 00a3ccb0 to 00b3cd03 has its CatchHandler @ 00a3ccb0
                       catch() { ... } // from try @ 00a3ccb0 with catch @ 00a3ccb0
                       catch() { ... } // from try @ 00a3ce0c with catch @ 00a3ccb0 */
    (*(code *)PTR_free_01d1b748)(lVar5);
    (*(code *)PTR_free_01d1b748)(lVar4);
    (*(code *)PTR_free_01d1b748)(lVar10);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar7 = 8;
  }
  *(undefined4 *)(param_1 + 0xd1) = uVar7;
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar11 = (char *)((long)param_1 + 0x68c), *pcVar11 == '\0')) {
    iVar3 = FUN_00a17c8c(param_1,0,pcVar11);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*pcVar11 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a3cd1c;
    }
  }
  iVar3 = FUN_00a3e038(param_1 + 0xc3,0);
                    /* try { // try from 00a3cd04 to 00b3cd1b has its CatchHandler @ 00a3ce88 */
  bVar2 = (int)param_1[0xd1] == 0;
  *param_2 = bVar2;
  if (iVar3 != 0) {
    return iVar3;
  }
  if (!bVar2) {
    return 0;
  }
LAB_00a3cd1c:
                    /* try { // try from 00a3cd24 to 00b3cd2f has its CatchHandler @ 00a3ce84 */
  if (**(int **)(*param_1 + 0x218) != 0) {
                    /* try { // try from 00a3cd30 to 00b3cd3b has its CatchHandler @ 00a3ce80 */
                    /* try { // try from 00a3cd3c to 00b3ce0b has its CatchHandler @ 00a3ce98 */
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return 0;
}

