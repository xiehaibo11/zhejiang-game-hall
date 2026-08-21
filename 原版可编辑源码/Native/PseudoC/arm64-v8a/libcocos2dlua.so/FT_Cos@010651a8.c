
long FT_Cos(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
                    /* try { // try from 010651ac to 011651c3 has its CatchHandler @ 01065218 */
  lVar3 = 0xdbd95b;
                    /* try { // try from 010651c4 to 0116524f has its CatchHandler @ 0106516c */
  lVar6 = 0;
  if (param_1 < -0x2d0000) {
    lVar4 = param_1;
    lVar5 = 0xdbd95b;
    do {
      lVar3 = lVar6;
      param_1 = lVar4 + 0x5a0000;
      lVar6 = -lVar5;
      bVar1 = lVar4 < -0x870000;
      lVar4 = param_1;
      lVar5 = lVar3;
    } while (bVar1);
  }
  lVar4 = param_1;
  lVar5 = lVar6;
  if (0x2d0000 < param_1) {
    do {
      lVar6 = lVar3;
      param_1 = lVar4 + -0x5a0000;
      lVar3 = -lVar5;
                    /* catch() { ... } // from try @ 010651ac with catch @ 01065218 */
      bVar1 = 0x870000 < lVar4;
      lVar4 = param_1;
      lVar5 = lVar6;
    } while (bVar1);
  }
  lVar4 = 0;
  lVar5 = 1;
  do {
    uVar2 = lVar4 + 1;
    lVar8 = lVar6 + lVar5 >> (uVar2 & 0x3f);
    if (param_1 < 0) {
      lVar9 = (&DAT_0145cbf8)[lVar4];
      lVar7 = -(lVar3 + lVar5 >> (uVar2 & 0x3f));
    }
    else {
      lVar7 = lVar3 + lVar5 >> (uVar2 & 0x3f);
      lVar8 = -lVar8;
      lVar9 = -(&DAT_0145cbf8)[lVar4];
    }
    lVar6 = lVar7 + lVar6;
    lVar3 = lVar3 + lVar8;
    param_1 = param_1 + lVar9;
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 << 1;
  } while (lVar4 != 0x16);
  return lVar3 + 0x80 >> 8;
}

