
long FUN_010b3a00(long *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  
  pbVar7 = (byte *)param_1[2];
  pbVar8 = (byte *)*param_1;
  do {
    if ((pbVar7 <= pbVar8) || (bVar11 = *pbVar8, 0x25 < bVar11)) break;
    if ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar11 != 0x25) break;
      bVar11 = 0x25;
      while (((pbVar9 = pbVar8 + 1, bVar11 != 10 && (bVar11 != 0xd)) &&
             (pbVar8 = pbVar9, pbVar9 < pbVar7))) {
        bVar11 = *pbVar9;
      }
    }
    pbVar8 = pbVar8 + 1;
  } while( true );
  *param_1 = (long)pbVar8;
  if (pbVar7 <= pbVar8) {
    return 0;
  }
  bVar11 = *pbVar8;
  if ((bVar11 == 0x2d) || (bVar11 == 0x2b)) {
    bVar5 = bVar11 == 0x2d;
    pbVar9 = pbVar8 + 1;
    if (pbVar9 == pbVar7) {
      return 0;
    }
  }
  else {
    bVar5 = false;
    pbVar9 = pbVar8;
  }
  if (pbVar9 < pbVar7) {
    lVar12 = 0;
    bVar4 = false;
    while( true ) {
      bVar11 = *pbVar9;
      if (((bVar11 < 0x21) && ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) != 0)) ||
         ((char)bVar11 < 0)) break;
      cVar2 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f];
      if (((long)cVar2 < 0) || ('\t' < cVar2)) break;
      if (lVar12 < 0xccccccd) {
        if ((lVar12 == 0xccccccc) && ('\a' < cVar2)) {
          bVar4 = true;
          lVar12 = 0xccccccc;
        }
        else {
          lVar12 = (long)cVar2 + lVar12 * 10;
        }
      }
      else {
        bVar4 = true;
      }
      pbVar9 = pbVar9 + 1;
      if (pbVar7 <= pbVar9) break;
    }
  }
  else {
    bVar4 = false;
    lVar12 = 0;
  }
  if (bVar4) {
    lVar12 = 0x7fffffff;
  }
  lVar10 = -lVar12;
  if (!bVar5) {
    lVar10 = lVar12;
  }
  if (pbVar9 == pbVar8) {
    return 0;
  }
  if ((pbVar9 < pbVar7) && (*pbVar9 == 0x23)) {
    if (pbVar7 <= pbVar9 + 1) {
      return 0;
    }
    if (0x22 < lVar10 - 2U) {
      return 0;
    }
    bVar11 = pbVar9[1];
    if ((bVar11 == 0x2d) || (bVar11 == 0x2b)) {
      bVar5 = bVar11 == 0x2d;
      if (pbVar9 + 2 == pbVar7) {
        return 0;
      }
      lVar12 = 2;
    }
    else {
      bVar5 = false;
      lVar12 = 1;
    }
    if (pbVar9 + lVar12 < pbVar7) {
      cVar2 = '\0';
      if (lVar10 != 0) {
        cVar2 = (char)(0x7fffffff / lVar10);
      }
      lVar3 = 0;
      if (lVar10 != 0) {
        lVar3 = 0x7fffffff / lVar10;
      }
      lVar13 = 0;
      bVar4 = false;
      while( true ) {
        bVar11 = pbVar9[lVar12];
        if (((bVar11 < 0x21) && ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) != 0)) ||
           ((char)bVar11 < 0)) break;
        cVar1 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f];
        iVar6 = (int)cVar1;
        if ((iVar6 < 0) || (lVar10 <= iVar6)) break;
        if (lVar3 < lVar13) {
          bVar4 = true;
        }
        else if ((lVar13 == lVar3) && ((char)(-1 - cVar2 * (char)lVar10) < cVar1)) {
          bVar4 = true;
          lVar13 = lVar3;
        }
        else {
          lVar13 = (long)iVar6 + lVar13 * lVar10;
        }
        lVar12 = lVar12 + 1;
        if (pbVar7 <= pbVar9 + lVar12) break;
      }
    }
    else {
      bVar4 = false;
      lVar13 = 0;
    }
    if (bVar4) {
      lVar13 = 0x7fffffff;
    }
    lVar10 = -lVar13;
    if (!bVar5) {
      lVar10 = lVar13;
    }
    if (lVar12 == 1) {
      return 0;
    }
    pbVar9 = pbVar9 + lVar12;
  }
  *param_1 = (long)pbVar9;
  return lVar10;
}

