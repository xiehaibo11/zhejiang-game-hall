
ulong FUN_00a35ef4(long *param_1)

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
  
                    /* try { // try from 00a35f00 to 00b35f3f has its CatchHandler @ 00a35fc4 */
  lVar9 = *param_1;
  iVar2 = *(int *)(lVar9 + 0x128);
  if (iVar2 - 100U < 100) {
LAB_00a35f1c:
    uVar5 = 0;
  }
  else {
    pcVar1 = (char *)(lVar9 + 0x8c38);
    if (*pcVar1 != '\0') {
      uVar7 = 0x16;
                    /* try { // try from 00a35f40 to 00b35f6f has its CatchHandler @ 00a35eb0 */
      if (*(char *)(lVar9 + 0x618) == '\0') {
        uVar7 = 0;
      }
      return (ulong)uVar7;
    }
    bVar4 = false;
                    /* try { // try from 00a35f70 to 00b35f83 has its CatchHandler @ 00a35fc4 */
    if (((char)param_1[0x78] == '\0') ||
       ((iVar2 != 0x191 &&
        ((bVar4 = false, 299 < iVar2 || (*(char *)((long)param_1 + 0x3ca) == '\0')))))) {
LAB_00a36020:
      if (*(char *)((long)param_1 + 0x3c1) == '\0') goto LAB_00a36088;
LAB_00a36028:
      if ((iVar2 != 0x197) && ((299 < iVar2 || (*(char *)((long)param_1 + 0x3ca) == '\0'))))
      goto LAB_00a36088;
      uVar5 = *(ulong *)(lVar9 + 0x8c18) & *(ulong *)(lVar9 + 0x8c28);
      uVar7 = (uint)uVar5;
                    /* try { // try from 00a36058 to 00b360db has its CatchHandler @ 00a36058
                       catch() { ... } // from try @ 00a36058 with catch @ 00a36058
                       catch() { ... } // from try @ 00a36148 with catch @ 00a36058 */
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar7 >> 1 & 1) != 0) {
          uVar8 = 2;
          goto LAB_00a36110;
        }
        if ((uVar7 >> 3 & 1) != 0) {
          uVar8 = 8;
          goto LAB_00a36110;
        }
        if ((uVar7 >> 5 & 1) != 0) {
          uVar8 = 0x20;
          goto LAB_00a36110;
        }
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)(lVar9 + 0x8c28) = 0;
          *(undefined8 *)(lVar9 + 0x8c20) = 0x40000000;
          *pcVar1 = '\x01';
          goto LAB_00a36088;
        }
        *(undefined8 *)(lVar9 + 0x8c20) = 1;
                    /* try { // try from 00a361ec to 00b3623b has its CatchHandler @ 00a361ec
                       catch() { ... } // from try @ 00a361ec with catch @ 00a361ec
                       catch() { ... } // from try @ 00a36284 with catch @ 00a361ec
                       catch() { ... } // from try @ 00a36304 with catch @ 00a361ec */
      }
      else {
                    /* try { // try from 00a360e4 to 00b3610f has its CatchHandler @ 00a361b0 */
        uVar8 = 4;
LAB_00a36110:
        *(undefined8 *)(lVar9 + 0x8c20) = uVar8;
      }
      *(ulong *)(lVar9 + 0x8c28) = 0;
LAB_00a36118:
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar9 + 0x1f8));
      *(undefined8 *)(lVar9 + 0x1f8) = 0;
                    /* try { // try from 00a36130 to 00b36147 has its CatchHandler @ 00a361ac */
      lVar6 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(lVar9 + 0x908));
      *(long *)(lVar9 + 0x1f8) = lVar6;
                    /* try { // try from 00a36148 to 00b361eb has its CatchHandler @ 00a36058 */
      if (lVar6 == 0) {
        return 0x1b;
      }
      if ((((*(uint *)(lVar9 + 0x430) | 4) != 5) && (*(char *)((long)param_1 + 0x3cb) == '\0')) &&
         (uVar5 = FUN_00a361f0(param_1), (int)uVar5 != 0)) {
        return uVar5;
      }
    }
    else {
                    /* try { // try from 00a35f84 to 00b35fdf has its CatchHandler @ 00a35eb0 */
      uVar5 = *(ulong *)(lVar9 + 0x8bf8) & *(ulong *)(lVar9 + 0x8c08);
      uVar7 = (uint)uVar5;
      if ((uVar7 >> 2 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 4;
LAB_00a36018:
        *(ulong *)(lVar9 + 0x8c08) = 0;
        bVar4 = true;
        goto LAB_00a36020;
      }
      if ((uVar7 >> 1 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 2;
        goto LAB_00a36018;
      }
      if ((uVar7 >> 3 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 8;
        goto LAB_00a36018;
      }
      if ((uVar7 >> 5 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 0x20;
        goto LAB_00a36018;
      }
      if ((uVar5 & 1) != 0) {
        *(undefined8 *)(lVar9 + 0x8c00) = 1;
        goto LAB_00a36018;
      }
      bVar4 = false;
      *(undefined8 *)(lVar9 + 0x8c08) = 0;
      *(undefined8 *)(lVar9 + 0x8c00) = 0x40000000;
      *pcVar1 = '\x01';
                    /* catch() { ... } // from try @ 00a35f00 with catch @ 00a35fc4
                       catch() { ... } // from try @ 00a35f70 with catch @ 00a35fc4 */
      if (*(char *)((long)param_1 + 0x3c1) != '\0') goto LAB_00a36028;
LAB_00a36088:
      if (bVar4) goto LAB_00a36118;
      if (((iVar2 < 300) && (*(char *)(lVar9 + 0x8c10) == '\0')) &&
         ((*(char *)((long)param_1 + 0x3ca) != '\0' && ((*(uint *)(lVar9 + 0x430) | 4) != 5)))) {
        lVar6 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(lVar9 + 0x908));
        *(long *)(lVar9 + 0x1f8) = lVar6;
        if (lVar6 == 0) {
          return 0x1b;
        }
                    /* try { // try from 00a360dc to 00b360e3 has its CatchHandler @ 00a3619c */
        *(char *)(lVar9 + 0x8c10) = '\x01';
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
joined_r0x00a361a8:
                    /* catch() { ... } // from try @ 00a36130 with catch @ 00a361ac */
                    /* catch() { ... } // from try @ 00a360e4 with catch @ 00a361b0 */
      if ((cVar3 != '\0') && (*(char *)(lVar6 + 0x8c38) == '\0')) goto LAB_00a35f1c;
    }
    else if (iVar2 == 0x191) {
      cVar3 = (char)param_1[0x78];
      goto joined_r0x00a361a8;
    }
    FUN_00a38a08(lVar9,"The requested URL returned error: %d",*(undefined4 *)(lVar9 + 0x128));
    uVar5 = 0x16;
  }
  return uVar5;
}

