
ulong FUN_00b621a4(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  while( true ) {
    bVar3 = *param_2;
    if ((0x20 < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x100000600U) == 0)) break;
    param_2 = param_2 + 1;
  }
  sVar5 = strlen((char *)param_2);
  iVar17 = (int)sVar5;
  if (0x9c4 < iVar17) {
    return 0xffffffff;
  }
  if ((iVar17 < 1) ||
     (pcVar6 = strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_0176eba8,(uint)bVar3),
     pcVar6 == (char *)0x0)) {
    return 0;
  }
  uVar13 = 0;
  do {
    uVar10 = uVar13 + 1;
    *(char *)((long)param_1 + uVar13) = (char)pcVar6 + 'X';
    if ((long)iVar17 <= (long)uVar10) {
      uVar10 = (ulong)((int)uVar13 + 1);
      goto LAB_00b62278;
    }
    pcVar6 = strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_0176eba8,(uint)param_2[uVar13 + 1]);
    uVar13 = uVar10;
  } while (pcVar6 != (char *)0x0);
  if ((int)uVar10 == 0) {
    return 0;
  }
LAB_00b62278:
  iVar18 = (int)uVar10;
  lVar7 = (long)iVar18;
  iVar17 = 0;
  iVar11 = 0;
  lVar14 = (long)(iVar18 + -1);
  uVar10 = uVar10 & 0xffffffff;
  lVar12 = lVar7;
  do {
    bVar3 = *(byte *)((long)param_1 + lVar14);
    *(byte *)((long)param_1 + lVar12) = bVar3;
    if (lVar14 < 1) {
      uVar9 = iVar18 + iVar11;
      break;
    }
    *(byte *)((long)param_1 + lVar12) = bVar3 | *(char *)((long)param_1 + lVar14 + -1) << 6;
    bVar3 = *(byte *)((long)param_1 + lVar14 + -1) >> 2 & 0xf;
    *(byte *)((long)param_1 + lVar12 + -1) = bVar3;
    iVar8 = (int)uVar10;
    if (iVar18 + -2 == iVar17) {
      uVar9 = iVar8 - 1;
      break;
    }
    *(byte *)((long)param_1 + lVar12 + -1) = bVar3 | *(char *)((long)param_1 + lVar14 + -2) << 4;
    bVar3 = *(byte *)((long)param_1 + lVar14 + -2) >> 4 & 3;
    *(byte *)((long)param_1 + lVar12 + -2) = bVar3;
    if (lVar14 < 3) {
      uVar9 = iVar8 - 2;
      break;
    }
    lVar4 = lVar14 + -3;
    iVar17 = iVar17 + 4;
    uVar9 = iVar8 - 3;
    uVar10 = (ulong)uVar9;
    lVar14 = lVar14 + -4;
    iVar11 = iVar11 + -3;
    *(byte *)((long)param_1 + lVar12 + -2) = bVar3 | *(char *)((long)param_1 + lVar4) << 2;
    *(undefined1 *)((long)param_1 + lVar12 + -3) = 0;
    lVar12 = lVar12 + -3;
  } while (iVar18 != iVar17);
  lVar12 = (long)(int)uVar9;
  iVar17 = uVar9 - 1;
  lVar14 = (lVar12 << 0x20) + -0x100000000;
  do {
    iVar17 = iVar17 + 1;
    lVar14 = lVar14 + 0x100000000;
    if (lVar7 < lVar12) break;
    pcVar6 = (char *)((long)param_1 + lVar12);
    lVar12 = lVar12 + 1;
  } while (*pcVar6 == '\0');
  if (iVar18 < iVar17) {
    return 0;
  }
  lVar14 = lVar14 >> 0x20;
  uVar13 = (lVar7 + 1) - lVar14;
  if (0x1f < uVar13) {
    uVar10 = uVar13 & 0xffffffffffffffe0;
    if (uVar10 == 0) goto LAB_00b623c4;
    lVar12 = lVar7 + 1;
    if (((undefined8 *)((long)param_1 + lVar12) <= param_1) ||
       ((ulong)((long)param_1 + (lVar12 - lVar14)) <= (ulong)((long)param_1 + lVar14))) {
      lVar14 = lVar14 + uVar10;
      uVar15 = lVar12 - iVar17 & 0xffffffffffffffe0;
      puVar16 = param_1;
      do {
        puVar2 = (undefined8 *)((long)iVar17 + (long)puVar16);
        uVar19 = *puVar2;
        uVar21 = puVar2[3];
        uVar20 = puVar2[2];
        uVar15 = uVar15 - 0x20;
        puVar16[1] = puVar2[1];
        *puVar16 = uVar19;
        puVar16[3] = uVar21;
        puVar16[2] = uVar20;
        puVar16 = puVar16 + 4;
      } while (uVar15 != 0);
      if (uVar13 == uVar10) {
        return uVar10;
      }
      goto LAB_00b623c4;
    }
  }
  uVar10 = 0;
LAB_00b623c4:
  do {
    uVar13 = uVar10 + 1;
    *(undefined1 *)((long)param_1 + uVar10) = *(undefined1 *)((long)param_1 + lVar14);
    bVar1 = lVar14 < lVar7;
    lVar14 = lVar14 + 1;
    uVar10 = uVar13;
  } while (bVar1);
  return uVar13;
}

