
ulong FT_Atan2(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 == 0 && param_1 == 0) {
    return 0;
  }
  uVar4 = -(uint)param_1;
  if (-1 < param_1) {
    uVar4 = (uint)param_1;
  }
  uVar2 = -(uint)param_2;
  if (-1 < param_2) {
    uVar2 = (uint)param_2;
  }
  iVar5 = -(int)LZCOUNT(uVar2 | uVar4);
  iVar3 = iVar5 + 0x1f;
  uVar4 = iVar5 + 2;
  if (uVar4 == 0 || iVar3 < 0x1d) {
    uVar6 = (ulong)(0x1d - iVar3);
    param_1 = param_1 << (uVar6 & 0x3f);
    param_2 = param_2 << (uVar6 & 0x3f);
    lVar8 = -param_1;
    lVar10 = param_2;
    if (param_1 < param_2) {
LAB_00e1e56c:
      pcVar7 = 
      "N2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE";
      lVar9 = param_2;
      lVar10 = lVar8;
      if (param_2 <= lVar8) {
        pcVar7 = (char *)0xb40000;
        if (param_2 < 1) {
          pcVar7 = (char *)0xffffffffff4c0000;
        }
        lVar9 = lVar8;
        lVar10 = -param_2;
      }
      goto LAB_00e1e59c;
    }
  }
  else {
    param_1 = param_1 >> ((ulong)uVar4 & 0x3f);
    param_2 = param_2 >> ((ulong)uVar4 & 0x3f);
    lVar8 = -param_1;
    lVar10 = param_2;
    if (param_1 < param_2) goto LAB_00e1e56c;
  }
  pcVar7 = (char *)0xffffffffffa60000;
  if (lVar10 < lVar8) {
    lVar9 = -lVar10;
    lVar10 = param_1;
  }
  else {
    pcVar7 = (char *)0x0;
    lVar9 = param_1;
  }
LAB_00e1e59c:
  lVar8 = 0;
  lVar11 = 1;
  do {
    while( true ) {
      uVar6 = lVar8 + 1;
      lVar12 = lVar10 + lVar11 >> (uVar6 & 0x3f);
      lVar1 = lVar9 + lVar11;
      if (0 < lVar10) break;
      lVar9 = lVar9 - lVar12;
      lVar10 = (lVar1 >> (uVar6 & 0x3f)) + lVar10;
      pcVar7 = pcVar7 + -(&DAT_01975780)[lVar8];
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 << 1;
      if (lVar8 == 0x16) goto LAB_00e1e610;
    }
    lVar9 = lVar12 + lVar9;
    lVar10 = lVar10 - (lVar1 >> (uVar6 & 0x3f));
    pcVar7 = pcVar7 + (&DAT_01975780)[lVar8];
    lVar8 = lVar8 + 1;
    lVar11 = lVar11 << 1;
  } while (lVar8 != 0x16);
LAB_00e1e610:
  if (-1 < (long)pcVar7) {
    return (ulong)(pcVar7 + 8) & 0xfffffffffffffff0;
  }
  return -(8U - (long)pcVar7 & 0xfffffffffffffff0);
}

