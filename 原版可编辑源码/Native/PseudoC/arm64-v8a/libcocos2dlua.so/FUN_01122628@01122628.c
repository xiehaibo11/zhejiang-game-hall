
undefined4 FUN_01122628(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  size_t sVar14;
  void *__s;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  uint local_68;
  int local_64;
  
  lVar23 = *param_1;
  pcVar18 = (code *)param_1[9];
  sVar14 = TIFFTileSize(lVar23);
  __s = _TIFFmalloc(sVar14);
  if (__s == (void *)0x0) {
    uVar21 = *(undefined8 *)(lVar23 + 0x3b8);
    uVar15 = TIFFFileName(lVar23);
    TIFFErrorExt(uVar21,uVar15,"%s","No space for tile buffer");
    return 0;
  }
  sVar14 = TIFFTileSize(lVar23);
  _TIFFmemset(__s,0,sVar14);
  TIFFGetField(lVar23,0x142,&local_64);
  TIFFGetField(lVar23,0x143,&local_68);
  switch((short)param_1[4]) {
  case 1:
  case 5:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (8 < uVar6) break;
    uVar22 = 1 << (ulong)(uVar6 & 0x1f);
    if ((uVar22 & 0x44) == 0) {
      if ((uVar22 & 0x88) != 0) goto LAB_01122820;
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x110U) != 0) goto LAB_011229d4;
      break;
    }
LAB_01122814:
    bVar12 = true;
    goto LAB_0112282c;
  case 2:
  case 6:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (uVar6 < 9) {
      bVar12 = false;
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x22U) != 0) goto LAB_01122814;
      uVar22 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar22 & 0x88) != 0) goto LAB_011229d8;
      if ((uVar22 & 0x110) != 0) goto LAB_01122820;
    }
    break;
  case 3:
  case 7:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (uVar6 < 9) {
      uVar22 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar22 & 0x22) != 0) {
LAB_01122820:
        bVar12 = true;
        goto LAB_011229d8;
      }
      if ((uVar22 & 0x44) != 0) {
LAB_011229d4:
        bVar12 = false;
        goto LAB_011229d8;
      }
      uVar22 = 1 << (ulong)(uVar6 & 0x1f) & 0x110;
joined_r0x01122810:
      if (uVar22 != 0) goto LAB_01122814;
    }
    break;
  case 4:
  case 8:
    uVar6 = *(ushort *)((long)param_1 + 0x22);
    if (7 < uVar6) break;
    bVar12 = false;
    if ((1 << (ulong)(uVar6 & 0x1f) & 0x22U) == 0) {
      uVar22 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar22 & 0x44) == 0) {
        uVar22 = uVar22 & 0x88;
        goto joined_r0x01122810;
      }
      goto LAB_01122820;
    }
LAB_011229d8:
    iVar24 = param_4 - 1;
    iVar8 = -(local_64 + param_3);
    bVar13 = true;
    goto joined_r0x011229f4;
  }
  bVar12 = false;
LAB_0112282c:
  iVar24 = 0;
  bVar13 = false;
  iVar8 = param_3 - local_64;
joined_r0x011229f4:
  if (param_4 != 0) {
    if (param_3 != 0) {
      uVar22 = 0;
      uVar26 = 1;
      do {
        iVar7 = (int)param_1[0x11];
        uVar25 = 0;
        if (local_68 != 0) {
          uVar25 = (iVar7 + uVar22) / local_68;
        }
        iVar17 = local_68 - ((iVar7 + uVar22) - uVar25 * local_68);
        uVar25 = 0;
        iVar4 = param_4 - uVar22;
        if (iVar17 + uVar22 <= param_4) {
          iVar4 = iVar17;
        }
        while ((lVar16 = TIFFReadTile(lVar23,__s,*(int *)((long)param_1 + 0x8c) + uVar25,
                                      iVar7 + uVar22,0,0), lVar16 != -1 || ((int)param_1[1] == 0)))
        {
          uVar2 = (int)param_1[0x11] + uVar22;
          uVar9 = 0;
          if (local_68 != 0) {
            uVar9 = uVar2 / local_68;
          }
          iVar7 = uVar9 * local_68;
          lVar16 = TIFFTileRowSize(lVar23);
          if (param_3 < local_64 + uVar25) {
            iVar17 = local_64 - (param_3 - uVar25);
            iVar10 = param_3 - uVar25;
            iVar11 = iVar17 + iVar8;
          }
          else {
                    /* try { // try from 01122938 to 012229c3 has its CatchHandler @ 01122938
                       catch() { ... } // from try @ 01122938 with catch @ 01122938
                       catch() { ... } // from try @ 01122a30 with catch @ 01122938
                       catch() { ... } // from try @ 01122ab8 with catch @ 01122938
                       catch() { ... } // from try @ 01122c1c with catch @ 01122938
                       catch() { ... } // from try @ 01122c54 with catch @ 01122938 */
            iVar17 = 0;
            iVar10 = local_64;
            iVar11 = iVar8;
          }
          (*pcVar18)(param_1,param_2 + (ulong)(iVar24 * param_3) * 4 + (ulong)uVar25 * 4,uVar25,
                     iVar24,iVar10,iVar4,iVar17,iVar11,
                     (void *)((long)__s + lVar16 * (ulong)(uVar2 - iVar7)));
          uVar25 = local_64 + uVar25;
          if (param_3 <= uVar25) goto LAB_01122970;
          iVar7 = (int)param_1[0x11];
        }
        uVar26 = 0;
LAB_01122970:
        uVar22 = iVar4 + uVar22;
        iVar7 = -iVar4;
        if (!bVar13) {
          iVar7 = iVar4;
        }
        iVar24 = iVar7 + iVar24;
      } while (uVar22 < param_4);
      goto LAB_01122a00;
    }
    uVar22 = 0;
    do {
      uVar25 = (int)param_1[0x11] + uVar22;
      uVar2 = 0;
      if (local_68 != 0) {
        uVar2 = uVar25 / local_68;
      }
      iVar8 = local_68 - (uVar25 - uVar2 * local_68);
      iVar24 = param_4 - uVar22;
      if (iVar8 + uVar22 <= param_4) {
        iVar24 = iVar8;
      }
                    /* try { // try from 011229c4 to 01222a2f has its CatchHandler @ 01122cc0 */
      uVar22 = iVar24 + uVar22;
    } while (uVar22 < param_4);
  }
  uVar26 = 1;
LAB_01122a00:
  _TIFFfree(__s);
  if ((bVar12) && (param_4 != 0)) {
    uVar22 = 0;
    uVar19 = 0;
    do {
                    /* try { // try from 01122a30 to 01222a53 has its CatchHandler @ 01122938 */
      uVar1 = param_2 + (ulong)((int)uVar19 * param_3) * 4;
      if (uVar1 < (uVar1 + (ulong)param_3 * 4) - 4) {
        lVar20 = (ulong)uVar22 * 4;
                    /* try { // try from 01122a54 to 01222a5b has its CatchHandler @ 01122cb4 */
        lVar23 = param_2;
        lVar16 = param_2 + (ulong)param_3 * 4 + -4;
        do {
          puVar3 = (undefined4 *)(lVar23 + lVar20);
          uVar5 = *puVar3;
          lVar23 = lVar23 + 4;
          *puVar3 = *(undefined4 *)(lVar16 + lVar20);
          *(undefined4 *)(lVar16 + lVar20) = uVar5;
          lVar16 = lVar16 + -4;
        } while (puVar3 + 1 < (undefined4 *)(lVar16 + lVar20));
      }
      uVar19 = uVar19 + 1;
      uVar22 = uVar22 + param_3;
                    /* try { // try from 01122a8c to 01222ab7 has its CatchHandler @ 01122cbc */
    } while (uVar19 != param_4);
  }
  return uVar26;
}

