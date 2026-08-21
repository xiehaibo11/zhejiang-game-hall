
ulong bn_add_words(ulong *rp,ulong *ap,ulong *bp,int num)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (num < 1) {
    return 0;
  }
  if ((uint)num < 4) {
    uVar8 = 0;
  }
  else {
    uVar7 = num - 4;
    lVar2 = (ulong)(uVar7 & 0xfffffffc) + 4;
    uVar8 = 0;
    puVar3 = ap + lVar2;
    puVar4 = rp + lVar2;
    puVar10 = bp;
    do {
      uVar11 = *ap;
                    /* try { // try from 00b92ae4 to 00c92b4b has its CatchHandler @ 00b92b74 */
      uVar12 = *puVar10;
      num = num - 4;
      uVar6 = 2;
      if (!CARRY8(uVar11,uVar8)) {
        uVar6 = 1;
      }
      *rp = uVar11 + uVar8 + uVar12;
      uVar9 = ap[1];
      uVar13 = puVar10[1];
      uVar5 = (ulong)CARRY8(uVar11,uVar8);
      if (CARRY8(uVar11 + uVar8,uVar12)) {
        uVar5 = uVar6;
      }
      uVar8 = 2;
      if (!CARRY8(uVar5,uVar9)) {
        uVar8 = 1;
      }
      rp[1] = uVar5 + uVar9 + uVar13;
      uVar11 = ap[2];
      uVar12 = puVar10[2];
      uVar6 = (ulong)CARRY8(uVar5,uVar9);
      if (CARRY8(uVar5 + uVar9,uVar13)) {
        uVar6 = uVar8;
      }
      uVar8 = 2;
      if (!CARRY8(uVar6,uVar11)) {
        uVar8 = 1;
      }
      rp[2] = uVar6 + uVar11 + uVar12;
      uVar9 = ap[3];
      puVar1 = puVar10 + 3;
      uVar5 = (ulong)CARRY8(uVar6,uVar11);
      if (CARRY8(uVar6 + uVar11,uVar12)) {
        uVar5 = uVar8;
      }
      ap = ap + 4;
      uVar6 = 2;
      if (!CARRY8(uVar5,uVar9)) {
        uVar6 = 1;
      }
      puVar10 = puVar10 + 4;
      uVar8 = (ulong)CARRY8(uVar5,uVar9);
      if (CARRY8(uVar5 + uVar9,*puVar1)) {
        uVar8 = uVar6;
      }
      rp[3] = uVar5 + uVar9 + *puVar1;
      rp = rp + 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b92ae4 with catch @ 00b92b74
                        */
    } while (3 < (uint)num);
    num = uVar7 & 3;
    if (num == 0) {
      return uVar8;
    }
    bp = bp + lVar2;
    rp = puVar4;
    ap = puVar3;
  }
  do {
    uVar12 = *ap;
    num = num - 1;
    uVar6 = uVar12 + uVar8;
    uVar11 = 2;
    if (!CARRY8(uVar12,uVar8)) {
      uVar11 = 1;
    }
    uVar8 = (ulong)CARRY8(uVar12,uVar8);
    if (CARRY8(uVar6,*bp)) {
      uVar8 = uVar11;
    }
    *rp = uVar6 + *bp;
    rp = rp + 1;
    ap = ap + 1;
    bp = bp + 1;
  } while (num != 0);
  return uVar8;
}

