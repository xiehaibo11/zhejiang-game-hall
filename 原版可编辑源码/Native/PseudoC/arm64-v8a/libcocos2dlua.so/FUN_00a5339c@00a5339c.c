
/* WARNING: Type propagation algorithm not settling */

int FUN_00a5339c(long *param_1,char *param_2)

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
    iVar3 = FUN_00a45500(lVar10,*(long *)(lVar10 + 0x6a0),0,*(long *)(lVar10 + 0x218) + 8,0,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    lVar10 = *param_1;
  }
  *(undefined8 *)(lVar10 + 0x78) = 0xffffffffffffffff;
  FUN_00a3112c(lVar10,0);
  FUN_00a31094(lVar10,0);
  FUN_00a30ed8(lVar10,0xffffffffffffffff);
  FUN_00a30eac(lVar10,0xffffffffffffffff);
  lVar10 = *param_1;
  puVar9 = *(undefined4 **)(lVar10 + 0x218);
  if (*(char *)(lVar10 + 0x620) != '\0') {
    *puVar9 = 1;
  }
  *param_2 = '\0';
  puVar8 = *(undefined8 **)(lVar10 + 0x870);
  *(undefined8 **)(puVar9 + 4) = puVar8;
  if (*(char *)(lVar10 + 0x621) == '\0') {
    pcVar11 = *(char **)(puVar9 + 2);
    if (puVar8 == (undefined8 *)0x0) {
      if (pcVar11 != (char *)0x0) goto LAB_00a534c8;
LAB_00a53598:
      pcVar6 = "HELP";
      goto LAB_00a535a0;
    }
    pcVar6 = "VRFY";
    if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
      pcVar6 = pcVar11;
    }
    iVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s %s",pcVar6,*puVar8);
joined_r0x00a534b4:
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar7 = 7;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      pcVar11 = *(char **)(puVar9 + 2);
      if (pcVar11 == (char *)0x0) goto LAB_00a53598;
LAB_00a534c8:
      pcVar6 = "HELP";
      if (*pcVar11 != '\0') {
        pcVar6 = pcVar11;
      }
LAB_00a535a0:
      iVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",pcVar6);
      goto joined_r0x00a534b4;
    }
    if (*(char **)(lVar10 + 0x808) == (char *)0x0) {
      lVar5 = (*(code *)PTR_strdup_01769a10)(&DAT_013c8afe);
    }
    else {
      if (**(char **)(lVar10 + 0x808) == '<') {
        pcVar11 = "%s";
      }
      else {
        pcVar11 = "<%s>";
      }
      lVar5 = FUN_00a24258(pcVar11);
    }
    if (lVar5 == 0) {
      return 0x1b;
    }
    if ((*(char **)(lVar10 + 0x810) == (char *)0x0) || (*(int *)((long)param_1 + 0x6ac) == 0)) {
      lVar4 = 0;
    }
    else {
      if (**(char **)(lVar10 + 0x810) == '\0') {
        lVar4 = (*(code *)PTR_strdup_01769a10)(&DAT_013c8afe);
      }
      else {
        lVar4 = FUN_00a24258("%s");
      }
      if (lVar4 == 0) goto LAB_00a53668;
    }
    plVar1 = param_1 + 0xc3;
    if ((*(char *)((long)param_1 + 0x6b9) == '\0') || (*(long *)(*param_1 + 0x8cf8) < 1)) {
      if (lVar4 == 0) {
                    /* try { // try from 00a53604 to 00b53637 has its CatchHandler @ 00a53704 */
        iVar3 = FUN_00a54d8c(plVar1,"MAIL FROM:%s",lVar5);
      }
      else {
        iVar3 = FUN_00a54d8c(plVar1,"MAIL FROM:%s AUTH=%s",lVar5,lVar4);
      }
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_00a24258("%ld",*(undefined8 *)(lVar10 + 0x8cf8));
      if (lVar10 == 0) {
                    /* try { // try from 00a53650 to 00b53683 has its CatchHandler @ 00a536d4 */
        (*(code *)PTR_free_01769a00)(lVar5);
        lVar5 = lVar4;
LAB_00a53668:
        (*(code *)PTR_free_01769a00)(lVar5);
        return 0x1b;
      }
      if (lVar4 == 0) {
                    /* try { // try from 00a53684 to 00b5371f has its CatchHandler @ 00a5336c */
        iVar3 = FUN_00a54d8c(plVar1,"MAIL FROM:%s SIZE=%s",lVar5,lVar10);
      }
      else {
        iVar3 = FUN_00a54d8c(plVar1,"MAIL FROM:%s AUTH=%s SIZE=%s",lVar5,lVar4,lVar10);
      }
    }
    (*(code *)PTR_free_01769a00)(lVar5);
    (*(code *)PTR_free_01769a00)(lVar4);
    (*(code *)PTR_free_01769a00)(lVar10);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar7 = 8;
  }
  *(undefined4 *)(param_1 + 0xd1) = uVar7;
                    /* catch() { ... } // from try @ 00a53638 with catch @ 00a536d0 */
                    /* catch() { ... } // from try @ 00a53650 with catch @ 00a536d4 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar11 = (char *)((long)param_1 + 0x68c), *pcVar11 == '\0')) {
    iVar3 = FUN_00a2d674(param_1,0,pcVar11);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*pcVar11 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a53704;
    }
  }
  iVar3 = FUN_00a54a20(param_1 + 0xc3,0);
  bVar2 = (int)param_1[0xd1] == 0;
  *param_2 = bVar2;
  if (iVar3 != 0) {
    return iVar3;
  }
  if (!bVar2) {
    return 0;
  }
LAB_00a53704:
                    /* catch() { ... } // from try @ 00a53604 with catch @ 00a53704 */
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return 0;
}

