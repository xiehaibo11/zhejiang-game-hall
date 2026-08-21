
long FT_Sin(long param_1)

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
  long lVar10;
  
  lVar5 = -param_1 + 0x5a0000;
  lVar3 = 0xdbd95b;
  lVar7 = 0;
  lVar4 = lVar3;
  lVar6 = -param_1;
  if (lVar5 < -0x2d0000) {
    do {
      lVar4 = lVar7;
      lVar5 = lVar6;
      lVar6 = lVar5 + 0x5a0000;
      lVar7 = -lVar3;
      lVar3 = lVar4;
    } while (lVar6 < -0x870000);
    lVar5 = lVar5 + 0xb40000;
  }
  lVar6 = lVar5;
  lVar3 = lVar7;
  if (0x2d0000 < lVar5) {
    do {
      lVar7 = lVar4;
      lVar5 = lVar6 + -0x5a0000;
      lVar4 = -lVar3;
      bVar1 = 0x870000 < lVar6;
      lVar6 = lVar5;
      lVar3 = lVar7;
    } while (bVar1);
  }
  lVar6 = 0;
  lVar3 = 1;
  do {
    uVar2 = lVar6 + 1;
    lVar9 = lVar7 + lVar3 >> (uVar2 & 0x3f);
    if (lVar5 < 0) {
      lVar10 = (&DAT_0145cbf8)[lVar6];
      lVar8 = -(lVar4 + lVar3 >> (uVar2 & 0x3f));
    }
    else {
      lVar8 = lVar4 + lVar3 >> (uVar2 & 0x3f);
      lVar9 = -lVar9;
      lVar10 = -(&DAT_0145cbf8)[lVar6];
    }
    lVar7 = lVar8 + lVar7;
    lVar5 = lVar5 + lVar10;
    lVar4 = lVar4 + lVar9;
    lVar6 = lVar6 + 1;
    lVar3 = lVar3 << 1;
  } while (lVar6 != 0x16);
  return lVar4 + 0x80 >> 8;
}

