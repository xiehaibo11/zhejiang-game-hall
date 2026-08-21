
void FT_Vector_Polarize(long *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_2 == (ulong *)0x0) {
    return;
  }
  if (param_3 == (ulong *)0x0) {
    return;
  }
  lVar12 = *param_1;
  lVar13 = param_1[1];
  if (lVar13 == 0 && lVar12 == 0) {
    return;
  }
  uVar5 = -(uint)lVar12;
  if (-1 < lVar12) {
    uVar5 = (uint)lVar12;
  }
  uVar2 = -(uint)lVar13;
  if (-1 < lVar13) {
    uVar2 = (uint)lVar13;
  }
  iVar6 = -(int)LZCOUNT(uVar2 | uVar5);
  iVar4 = iVar6 + 0x1f;
  uVar5 = iVar6 + 2;
  if (uVar5 == 0 || iVar4 < 0x1d) {
    uVar7 = (ulong)(0x1d - iVar4);
    lVar12 = lVar12 << (uVar7 & 0x3f);
    lVar13 = lVar13 << (uVar7 & 0x3f);
    lVar8 = -lVar12;
    lVar14 = lVar13;
    if (lVar13 <= lVar12) {
LAB_00e1e840:
      pcVar10 = (char *)0xffffffffffa60000;
      if (lVar14 < lVar8) {
        lVar13 = -lVar14;
        lVar8 = lVar12;
      }
      else {
        pcVar10 = (char *)0x0;
        lVar13 = lVar12;
        lVar8 = lVar14;
      }
      goto LAB_00e1e8ac;
    }
  }
  else {
    lVar12 = lVar12 >> ((ulong)uVar5 & 0x3f);
    lVar13 = lVar13 >> ((ulong)uVar5 & 0x3f);
    uVar7 = (ulong)(0x1d - iVar4);
    lVar8 = -lVar12;
    lVar14 = lVar13;
    if (lVar13 <= lVar12) goto LAB_00e1e840;
  }
  pcVar10 = "N2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE";
  if (lVar13 <= lVar8) {
    pcVar10 = (char *)0xb40000;
    if (lVar13 < 1) {
      pcVar10 = (char *)0xffffffffff4c0000;
    }
    lVar12 = -lVar13;
    lVar13 = lVar8;
    lVar8 = lVar12;
  }
LAB_00e1e8ac:
  lVar12 = 0;
  lVar14 = 1;
  do {
    while( true ) {
      uVar11 = lVar12 + 1;
      lVar15 = lVar8 + lVar14 >> (uVar11 & 0x3f);
      lVar1 = lVar13 + lVar14;
      if (lVar8 < 1) break;
      lVar13 = lVar15 + lVar13;
      lVar8 = lVar8 - (lVar1 >> (uVar11 & 0x3f));
      pcVar10 = pcVar10 + (&DAT_01975780)[lVar12];
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 << 1;
      if (lVar12 == 0x16) goto LAB_00e1e920;
    }
    lVar13 = lVar13 - lVar15;
    lVar8 = (lVar1 >> (uVar11 & 0x3f)) + lVar8;
    pcVar10 = pcVar10 + -(&DAT_01975780)[lVar12];
    lVar12 = lVar12 + 1;
    lVar14 = lVar14 << 1;
  } while (lVar12 != 0x16);
LAB_00e1e920:
  if ((long)pcVar10 < 0) {
    uVar11 = -(8U - (long)pcVar10 & 0xfffffffffffffff0);
  }
  else {
    uVar11 = (ulong)(pcVar10 + 8) & 0xfffffffffffffff0;
  }
  lVar12 = -lVar13;
  if (-1 < lVar13) {
    lVar12 = lVar13;
  }
  uVar9 = lVar12 * 0xdbd95b16 + 0x40000000U >> 0x20;
  uVar3 = -uVar9;
  if (-1 < lVar13) {
    uVar3 = uVar9;
  }
  uVar9 = (long)uVar3 >> (uVar7 & 0x3f);
  if ((int)uVar7 < 0) {
    uVar9 = (ulong)(uint)((int)uVar3 << (ulong)(-(int)uVar7 & 0x1f));
  }
  *param_2 = uVar9;
  *param_3 = uVar11;
  return;
}

