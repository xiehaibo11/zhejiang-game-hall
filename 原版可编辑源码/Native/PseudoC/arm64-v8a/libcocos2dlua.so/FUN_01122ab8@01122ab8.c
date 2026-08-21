
undefined4 FUN_01122ab8(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  size_t sVar14;
  void *__s;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int local_84;
  ushort local_6c [2];
  undefined1 auStack_68 [4];
  uint local_64;
  
                    /* try { // try from 01122ab8 to 01222adb has its CatchHandler @ 01122938 */
                    /* try { // try from 01122adc to 01222ae3 has its CatchHandler @ 01122cb8 */
  pcVar18 = (code *)param_1[9];
  lVar23 = *param_1;
  uVar20 = (ulong)param_3;
  uVar22 = *(uint *)((long)param_1 + 0x14);
  sVar14 = TIFFStripSize(lVar23);
  __s = _TIFFmalloc(sVar14);
  if (__s == (void *)0x0) {
    uVar21 = *(undefined8 *)(lVar23 + 0x3b8);
    uVar15 = TIFFFileName(lVar23);
    TIFFErrorExt(uVar21,uVar15,"No space for strip buffer");
    return 0;
  }
  sVar14 = TIFFStripSize(lVar23);
  _TIFFmemset(__s,0,sVar14);
                    /* try { // try from 01122b40 to 01222c1b has its CatchHandler @ 01122cbc */
  switch((short)param_1[4]) {
  case 1:
  case 5:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (uVar6 < 9) {
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar2 & 0x44) != 0) {
LAB_01122c84:
        bVar11 = false;
        iVar24 = 0;
        local_84 = 0;
        bVar12 = true;
        goto LAB_01122cc8;
      }
      if ((uVar2 & 0x88) != 0) goto LAB_01122c7c;
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x110U) != 0) goto LAB_01122cb0;
    }
    break;
  case 2:
  case 6:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (uVar6 < 9) {
      bVar12 = false;
                    /* try { // try from 01122c4c to 01222c53 has its CatchHandler @ 01122cb0 */
                    /* try { // try from 01122c54 to 01222cdf has its CatchHandler @ 01122938 */
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x22U) != 0) goto LAB_01122c84;
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar2 & 0x88) != 0) goto LAB_01122cb4;
      if ((uVar2 & 0x110) != 0) goto LAB_01122c7c;
    }
    break;
  case 3:
  case 7:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (uVar6 < 9) {
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar2 & 0x22) != 0) {
LAB_01122c7c:
        bVar12 = true;
        goto LAB_01122cb4;
      }
      if ((uVar2 & 0x44) != 0) {
LAB_01122cb0:
                    /* catch() { ... } // from try @ 01122c4c with catch @ 01122cb0 */
        bVar12 = false;
        goto LAB_01122cb4;
      }
      uVar2 = 1 << (ulong)(uVar6 & 0x1f) & 0x110;
joined_r0x01122c34:
      if (uVar2 != 0) goto LAB_01122c84;
    }
    break;
  case 4:
  case 8:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (7 < uVar6) break;
    bVar12 = false;
    if ((1 << (ulong)(uVar6 & 0x1f) & 0x22U) == 0) {
                    /* try { // try from 01122c1c to 01222c4b has its CatchHandler @ 01122938 */
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar2 & 0x44) == 0) {
        uVar2 = uVar2 & 0x88;
        goto joined_r0x01122c34;
      }
      goto LAB_01122c7c;
    }
LAB_01122cb4:
                    /* catch() { ... } // from try @ 01122a54 with catch @ 01122cb4 */
    iVar24 = param_4 - 1;
                    /* catch() { ... } // from try @ 01122adc with catch @ 01122cb8 */
    local_84 = param_3 * -2;
                    /* catch() { ... } // from try @ 01122a8c with catch @ 01122cbc
                       catch() { ... } // from try @ 01122b40 with catch @ 01122cbc */
    bVar11 = true;
                    /* catch() { ... } // from try @ 011229c4 with catch @ 01122cc0 */
    goto LAB_01122cc8;
  }
  bVar11 = false;
  bVar12 = false;
  iVar24 = 0;
  local_84 = 0;
LAB_01122cc8:
  TIFFGetFieldDefaulted(lVar23,0x116,&local_64);
  TIFFGetFieldDefaulted(lVar23,0x212,auStack_68,local_6c);
  lVar16 = TIFFScanlineSize(lVar23);
  iVar9 = uVar22 - param_3;
  if (uVar22 < param_3 || iVar9 == 0) {
    iVar9 = 0;
  }
  if (param_4 == 0) {
    uVar13 = 1;
    goto LAB_01122f90;
  }
  uVar22 = 0;
  if (bVar11) {
    do {
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar10 = 0;
      if (local_64 != 0) {
        uVar10 = uVar2 / local_64;
      }
      uVar8 = local_64 - (uVar2 - uVar10 * local_64);
      uVar10 = param_4 - uVar22;
      if (uVar8 + uVar22 <= param_4) {
        uVar10 = uVar8;
      }
      uVar8 = 0;
      if (local_6c[0] != 0) {
        uVar8 = uVar10 / local_6c[0];
      }
      iVar7 = uVar10 - uVar8 * local_6c[0];
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = (uint)local_6c[0] - iVar7;
      }
      uVar13 = TIFFComputeStrip(lVar23,uVar2,0);
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar8 = 0;
      if (local_64 != 0) {
        uVar8 = uVar2 / local_64;
      }
      lVar17 = TIFFReadEncodedStrip
                         (lVar23,uVar13,__s,
                          lVar16 * (ulong)(uVar10 + iVar4 + (uVar2 - uVar8 * local_64)));
      if ((lVar17 == -1) && ((int)param_1[1] != 0)) goto LAB_01122f08;
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar8 = 0;
      if (local_64 != 0) {
        uVar8 = uVar2 / local_64;
      }
      (*pcVar18)(param_1,param_2 + (ulong)(iVar24 * param_3) * 4,0,iVar24,uVar20,uVar10,iVar9,
                 local_84,(void *)((long)__s + lVar16 * (ulong)(uVar2 - uVar8 * local_64)));
      uVar22 = uVar10 + uVar22;
      iVar24 = iVar24 - uVar10;
    } while (uVar22 < param_4);
  }
  else {
    do {
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar10 = 0;
      if (local_64 != 0) {
        uVar10 = uVar2 / local_64;
      }
      uVar8 = local_64 - (uVar2 - uVar10 * local_64);
      uVar10 = param_4 - uVar22;
      if (uVar8 + uVar22 <= param_4) {
        uVar10 = uVar8;
      }
      uVar8 = 0;
      if (local_6c[0] != 0) {
        uVar8 = uVar10 / local_6c[0];
      }
      iVar7 = uVar10 - uVar8 * local_6c[0];
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = (uint)local_6c[0] - iVar7;
      }
      uVar13 = TIFFComputeStrip(lVar23,uVar2,0);
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar8 = 0;
      if (local_64 != 0) {
        uVar8 = uVar2 / local_64;
      }
      lVar17 = TIFFReadEncodedStrip
                         (lVar23,uVar13,__s,
                          lVar16 * (ulong)(uVar10 + iVar4 + (uVar2 - uVar8 * local_64)));
      if ((lVar17 == -1) && ((int)param_1[1] != 0)) goto LAB_01122f08;
      uVar2 = (int)param_1[0x11] + uVar22;
      uVar8 = 0;
      if (local_64 != 0) {
        uVar8 = uVar2 / local_64;
      }
      (*pcVar18)(param_1,param_2 + (ulong)(iVar24 * param_3) * 4,0,iVar24,uVar20,uVar10,iVar9,
                 local_84,(void *)((long)__s + lVar16 * (ulong)(uVar2 - uVar8 * local_64)));
      uVar22 = uVar10 + uVar22;
      iVar24 = uVar10 + iVar24;
    } while (uVar22 < param_4);
  }
  uVar13 = 1;
LAB_01122f0c:
  if (bVar12) {
    uVar22 = 0;
    uVar19 = 0;
    do {
      uVar1 = param_2 + (ulong)((int)uVar19 * param_3) * 4;
      if (uVar1 < (uVar1 + uVar20 * 4) - 4) {
        lVar17 = (ulong)uVar22 * 4;
        lVar23 = param_2;
        lVar16 = param_2 + uVar20 * 4 + -4;
        do {
          puVar3 = (undefined4 *)(lVar23 + lVar17);
          uVar5 = *puVar3;
          lVar23 = lVar23 + 4;
          *puVar3 = *(undefined4 *)(lVar16 + lVar17);
          *(undefined4 *)(lVar16 + lVar17) = uVar5;
          lVar16 = lVar16 + -4;
        } while (puVar3 + 1 < (undefined4 *)(lVar16 + lVar17));
      }
      uVar19 = uVar19 + 1;
      uVar22 = uVar22 + param_3;
    } while (uVar19 != param_4);
  }
LAB_01122f90:
  _TIFFfree(__s);
  return uVar13;
LAB_01122f08:
  uVar13 = 0;
  goto LAB_01122f0c;
}

