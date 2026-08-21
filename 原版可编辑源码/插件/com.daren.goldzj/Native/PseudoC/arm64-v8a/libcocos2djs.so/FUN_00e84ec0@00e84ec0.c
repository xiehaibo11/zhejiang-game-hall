
undefined2 FUN_00e84ec0(byte *param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  byte *pbVar4;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar5;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 <= param_1) {
    return 0;
  }
  iVar8 = 0;
  iVar11 = 0x34;
  while( true ) {
    uVar6 = (long)(iVar11 + iVar8) & 0xfffffffffffffffe;
    pbVar7 = &DAT_0197d3aa + CONCAT11((&DAT_0197d3ac)[uVar6],(&DAT_0197d3ad)[uVar6]);
    bVar9 = *pbVar7;
    uVar10 = (uint)bVar9;
    if ((bVar9 & 0x7f) == *param_1) break;
    iVar1 = iVar11 + iVar8 >> 1;
    if ((bVar9 & 0x7f) < *param_1) {
      iVar8 = iVar1 + 1;
      iVar1 = iVar11;
    }
    iVar11 = iVar1;
    if (iVar1 <= iVar8) {
      return 0;
    }
  }
  if (param_1 + 1 < param_2) {
    pbVar5 = param_1 + 1;
    do {
      pbVar4 = pbVar5 + 1;
      cVar3 = (char)uVar10;
      pbVar7 = pbVar7 + 1;
      bVar9 = *pbVar7;
      uVar10 = (uint)bVar9;
      if (cVar3 < '\0') {
        if ((uint)*pbVar5 != (uVar10 & 0x7f)) {
          return 0;
        }
      }
      else {
        uVar12 = uVar10 & 0x7f;
        if ((bVar9 & 0x7f) == 0) {
          return 0;
        }
        lVar2 = 3;
        if ((bVar9 & 0x80) == 0) {
          lVar2 = 1;
        }
        pbVar13 = pbVar7 + lVar2;
        while( true ) {
          pbVar7 = &DAT_0197d3aa + CONCAT11(*pbVar13,pbVar13[1]);
          uVar10 = (uint)*pbVar7;
          if ((uint)*pbVar5 == (uVar10 & 0x7f)) break;
          uVar12 = uVar12 - 1;
          pbVar13 = pbVar13 + 2;
          if ((int)uVar12 < 1) {
            return 0;
          }
        }
      }
      bVar9 = (byte)uVar10;
      pbVar5 = pbVar4;
    } while (pbVar4 < param_2);
  }
  if ((-1 < (char)bVar9) && ((char)pbVar7[1] < '\0')) {
    return CONCAT11(pbVar7[2],pbVar7[3]);
  }
  return 0;
}

