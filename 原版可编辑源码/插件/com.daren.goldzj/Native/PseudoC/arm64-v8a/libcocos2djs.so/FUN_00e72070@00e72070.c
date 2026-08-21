
ulong FUN_00e72070(long *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  
  pbVar8 = (byte *)param_1[2];
  pbVar10 = (byte *)*param_1;
  while (pbVar10 < pbVar8) {
    bVar2 = *pbVar10;
    if (0x25 < bVar2) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar2 != 0x25) break;
      bVar1 = 0x25;
      while ((pbVar10 = pbVar10 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
        if (pbVar8 <= pbVar10) goto LAB_00e720a4;
        bVar1 = *pbVar10;
        bVar2 = bVar1;
      }
    }
    else {
LAB_00e720a4:
      pbVar10 = pbVar10 + 1;
    }
  }
  *param_1 = (long)pbVar10;
  if (pbVar8 <= pbVar10) {
    return 0;
  }
  bVar2 = *pbVar10;
  if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
    pbVar16 = pbVar10 + 1;
    if (pbVar16 == pbVar8) {
      return 0;
    }
    bVar6 = bVar2 == 0x2d;
    bVar2 = *pbVar16;
    if (bVar2 == 0x2b) {
      return 0;
    }
    if (bVar2 == 0x2d) {
      return 0;
    }
    pbVar9 = pbVar16;
    if (pbVar8 <= pbVar16) goto LAB_00e72244;
LAB_00e72158:
    uVar18 = (ulong)bVar2;
    uVar11 = 0;
    bVar5 = false;
    pbVar17 = pbVar9 + 1;
    if (bVar2 < 0x21) goto LAB_00e721a4;
    do {
      do {
        pbVar16 = pbVar9;
        if ((char)uVar18 < '\0') goto LAB_00e72268;
        cVar3 = (&DAT_0197bb0c)[uVar18 & 0x7f];
        if (((long)cVar3 < 0) || ('\t' < cVar3)) goto LAB_00e72268;
        if ((long)uVar11 < 0xccccccd) {
          if ((uVar11 == 0xccccccc) && ('\a' < cVar3)) {
            bVar5 = true;
            uVar11 = 0xccccccc;
          }
          else {
            uVar11 = (long)cVar3 + uVar11 * 10;
          }
        }
        else {
          bVar5 = true;
        }
        pbVar16 = pbVar9 + 1;
        if (pbVar8 <= pbVar17) goto LAB_00e72268;
        pbVar9 = pbVar9 + 1;
        pbVar16 = pbVar17 + 1;
        bVar2 = *pbVar17;
        uVar18 = (ulong)bVar2;
        pbVar17 = pbVar16;
      } while (0x20 < bVar2);
LAB_00e721a4:
    } while ((1L << (uVar18 & 0x3f) & 0x100003601U) == 0);
    pbVar16 = pbVar17 + -1;
LAB_00e72268:
    if (bVar5) {
      uVar11 = 0x7fffffff;
    }
    uVar18 = -uVar11;
    if (!bVar6) {
      uVar18 = uVar11;
    }
  }
  else {
    bVar6 = false;
    pbVar16 = pbVar10;
    pbVar9 = pbVar10;
    if (pbVar10 < pbVar8) goto LAB_00e72158;
LAB_00e72244:
    uVar18 = 0;
  }
  if (pbVar16 == pbVar10) {
    return 0;
  }
  if ((pbVar8 <= pbVar16) || (*pbVar16 != 0x23)) goto LAB_00e7244c;
  pbVar10 = pbVar16 + 1;
  if (pbVar8 <= pbVar10) {
    return 0;
  }
  if (0x22 < uVar18 - 2) {
    return 0;
  }
  bVar2 = *pbVar10;
  if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
    pbVar10 = pbVar16 + 2;
    if (pbVar10 == pbVar8) {
      return 0;
    }
    bVar6 = bVar2 == 0x2d;
    bVar2 = *pbVar10;
    if (bVar2 == 0x2b) {
      return 0;
    }
    if (bVar2 == 0x2d) {
      return 0;
    }
    lVar12 = 2;
    if (pbVar10 < pbVar8) goto LAB_00e7231c;
LAB_00e72408:
    uVar18 = 0;
    lVar13 = lVar12;
  }
  else {
    bVar6 = false;
    lVar12 = 1;
    if (pbVar8 <= pbVar10) goto LAB_00e72408;
LAB_00e7231c:
    uVar11 = (ulong)bVar2;
    uVar4 = 0;
    if ((uint)uVar18 != 0) {
      uVar4 = 0x7fffffff / (uint)uVar18;
    }
    uVar7 = (ulong)uVar4;
    uVar14 = 0;
    bVar5 = false;
    lVar19 = lVar12 + 1;
    if (bVar2 < 0x21) goto LAB_00e72370;
    do {
      do {
        lVar13 = lVar12;
        if ((char)uVar11 < '\0') goto LAB_00e72424;
        cVar3 = (&DAT_0197bb0c)[uVar11 & 0x7f];
        iVar15 = (int)cVar3;
        if ((iVar15 < 0) || ((long)uVar18 <= (long)iVar15)) goto LAB_00e72424;
        if ((long)uVar7 < (long)uVar14) {
          bVar5 = true;
        }
        else if ((uVar14 == uVar7) && ((char)(-1 - (char)uVar4 * (char)uVar18) < cVar3)) {
          bVar5 = true;
          uVar14 = uVar7;
        }
        else {
          uVar14 = (long)iVar15 + uVar14 * uVar18;
        }
        lVar13 = lVar12 + 1;
        if (pbVar8 <= pbVar16 + lVar19) goto LAB_00e72424;
        pbVar10 = pbVar16 + lVar19;
        lVar12 = lVar12 + 1;
        uVar11 = (ulong)*pbVar10;
        lVar19 = lVar19 + 1;
      } while (0x20 < *pbVar10);
LAB_00e72370:
    } while ((1L << (uVar11 & 0x3f) & 0x100003601U) == 0);
    lVar13 = lVar19 + -1;
LAB_00e72424:
    if (bVar5) {
      uVar14 = 0x7fffffff;
    }
    uVar18 = -uVar14;
    if (!bVar6) {
      uVar18 = uVar14;
    }
  }
  if (lVar13 == 1) {
    return 0;
  }
  pbVar16 = pbVar16 + lVar13;
LAB_00e7244c:
  *param_1 = (long)pbVar16;
  return uVar18;
}

