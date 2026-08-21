
ulong bn_sub_words(ulong *rp,ulong *ap,ulong *bp,int num)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (num < 1) {
    return 0;
  }
  if ((uint)num < 4) {
    uVar9 = 0;
  }
  else {
    uVar6 = num - 4;
    lVar3 = (ulong)(uVar6 & 0xfffffffc) + 4;
    uVar9 = 0;
    puVar4 = ap + lVar3;
    puVar5 = rp + lVar3;
    puVar10 = bp;
    do {
      uVar11 = *ap;
      uVar12 = *puVar10;
      num = num - 4;
      *rp = (uVar11 - (long)(int)uVar9) - uVar12;
      uVar13 = ap[1];
      uVar14 = puVar10[1];
      if (uVar11 != uVar12) {
        uVar9 = (uint)(uVar11 < uVar12);
      }
      lVar7 = uVar13 - uVar14;
      rp[1] = lVar7 - (int)uVar9;
      uVar11 = ap[2];
      uVar12 = puVar10[2];
      if (lVar7 != 0) {
        uVar9 = (uint)(uVar13 < uVar14);
      }
      lVar7 = uVar11 - uVar12;
      rp[2] = lVar7 - (int)uVar9;
      puVar1 = ap + 3;
      puVar2 = puVar10 + 3;
      if (lVar7 != 0) {
        uVar9 = (uint)(uVar11 < uVar12);
      }
      ap = ap + 4;
      lVar8 = *puVar1 - *puVar2;
      lVar7 = (long)(int)uVar9;
      puVar10 = puVar10 + 4;
      if (lVar8 != 0) {
        uVar9 = (uint)(*puVar1 < *puVar2);
      }
      rp[3] = lVar8 - lVar7;
      rp = rp + 4;
    } while (3 < (uint)num);
    num = uVar6 & 3;
    if (num == 0) goto LAB_00b92cdc;
    rp = puVar5;
    ap = puVar4;
    bp = bp + lVar3;
  }
  do {
    uVar11 = *ap;
    uVar12 = *bp;
    num = num - 1;
    *rp = (uVar11 - (long)(int)uVar9) - uVar12;
    if (uVar11 != uVar12) {
      uVar9 = (uint)(uVar11 < uVar12);
    }
    rp = rp + 1;
    ap = ap + 1;
    bp = bp + 1;
  } while (num != 0);
LAB_00b92cdc:
  return (long)(int)uVar9;
}

