
ulong FUN_00a2050c(long *param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  iVar2 = *(int *)(lVar9 + 0x128);
  if (iVar2 - 100U < 100) {
LAB_00a20534:
    uVar5 = 0;
  }
  else {
    pcVar1 = (char *)(lVar9 + 0x8c38);
    if (*pcVar1 != '\0') {
      uVar7 = 0x16;
      if (*(char *)(lVar9 + 0x618) == '\0') {
        uVar7 = 0;
      }
      return (ulong)uVar7;
    }
    bVar4 = false;
    if (((char)param_1[0x78] == '\0') ||
       ((iVar2 != 0x191 &&
        ((bVar4 = false, 299 < iVar2 || (*(char *)((long)param_1 + 0x3ca) == '\0')))))) {
LAB_00a20638:
      if (*(char *)((long)param_1 + 0x3c1) == '\0') goto LAB_00a206a0;
LAB_00a20640:
      if ((iVar2 != 0x197) && ((299 < iVar2 || (*(char *)((long)param_1 + 0x3ca) == '\0'))))
      goto LAB_00a206a0;
      uVar5 = *(ulong *)(lVar9 + 0x8c18) & *(ulong *)(lVar9 + 0x8c28);
      uVar7 = (uint)uVar5;
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar7 >> 1 & 1) != 0) {
          uVar8 = 2;
          goto LAB_00a20728;
        }
        if ((uVar7 >> 3 & 1) != 0) {
          uVar8 = 8;
          goto LAB_00a20728;
        }
        if ((uVar7 >> 5 & 1) != 0) {
          uVar8 = 0x20;
          goto LAB_00a20728;
        }
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)(lVar9 + 0x8c28) = 0;
          *(undefined8 *)(lVar9 + 0x8c20) = 0x40000000;
          *pcVar1 = '\x01';
          goto LAB_00a206a0;
        }
        *(undefined8 *)(lVar9 + 0x8c20) = 1;
      }
      else {
        uVar8 = 4;
LAB_00a20728:
        *(undefined8 *)(lVar9 + 0x8c20) = uVar8;
      }
      *(ulong *)(lVar9 + 0x8c28) = 0;
LAB_00a20730:
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar9 + 0x1f8));
      *(undefined8 *)(lVar9 + 0x1f8) = 0;
      lVar6 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(lVar9 + 0x908));
                    /* try { // try from 00a2075c to 00b20763 has its CatchHandler @ 00a20824 */
      *(long *)(lVar9 + 0x1f8) = lVar6;
      if (lVar6 == 0) {
        return 0x1b;
      }
                    /* try { // try from 00a20764 to 00b20847 has its CatchHandler @ 00a20628 */
      if ((((*(uint *)(lVar9 + 0x430) | 4) != 5) && (*(char *)((long)param_1 + 0x3cb) == '\0')) &&
         (uVar5 = FUN_00a20808(param_1), (int)uVar5 != 0)) {
        return uVar5;
      }
    }
    else {
      uVar5 = *(ulong *)(lVar9 + 0x8bf8) & *(ulong *)(lVar9 + 0x8c08);
      uVar7 = (uint)uVar5;
      if ((uVar7 >> 2 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 4;
LAB_00a20630:
        *(ulong *)(lVar9 + 0x8c08) = 0;
        bVar4 = true;
        goto LAB_00a20638;
      }
      if ((uVar7 >> 1 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 2;
        goto LAB_00a20630;
      }
      if ((uVar7 >> 3 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 8;
        goto LAB_00a20630;
      }
      if ((uVar7 >> 5 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 0x20;
        goto LAB_00a20630;
      }
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 00a20628 to 00b206f7 has its CatchHandler @ 00a20628
                       catch() { ... } // from try @ 00a20628 with catch @ 00a20628
                       catch() { ... } // from try @ 00a20764 with catch @ 00a20628 */
        *(undefined8 *)(lVar9 + 0x8c00) = 1;
        goto LAB_00a20630;
      }
      bVar4 = false;
      *(undefined8 *)(lVar9 + 0x8c08) = 0;
      *(undefined8 *)(lVar9 + 0x8c00) = 0x40000000;
      *pcVar1 = '\x01';
      if (*(char *)((long)param_1 + 0x3c1) != '\0') goto LAB_00a20640;
LAB_00a206a0:
      if (bVar4) goto LAB_00a20730;
      if (((iVar2 < 300) && (*(char *)(lVar9 + 0x8c10) == '\0')) &&
         ((*(char *)((long)param_1 + 0x3ca) != '\0' && ((*(uint *)(lVar9 + 0x430) | 4) != 5)))) {
        lVar6 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(lVar9 + 0x908));
        *(long *)(lVar9 + 0x1f8) = lVar6;
        if (lVar6 == 0) {
          return 0x1b;
        }
        *(char *)(lVar9 + 0x8c10) = '\x01';
                    /* try { // try from 00a206f8 to 00b206ff has its CatchHandler @ 00a20834 */
      }
    }
    lVar6 = *param_1;
    iVar2 = *(int *)(lVar6 + 0x128);
    if (iVar2 < 400) {
      return 0;
    }
    if (*(char *)(lVar6 + 0x618) == '\0') {
      return 0;
    }
    if (iVar2 == 0x197) {
      cVar3 = *(char *)((long)param_1 + 0x3c1);
joined_r0x00a207c0:
      if ((cVar3 != '\0') && (*(char *)(lVar6 + 0x8c38) == '\0')) goto LAB_00a20534;
    }
    else if (iVar2 == 0x191) {
      cVar3 = (char)param_1[0x78];
      goto joined_r0x00a207c0;
    }
    FUN_00a23020(lVar9,"The requested URL returned error: %d",*(undefined4 *)(lVar9 + 0x128));
    uVar5 = 0x16;
  }
  return uVar5;
}

