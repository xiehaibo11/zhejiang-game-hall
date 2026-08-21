
long FT_Sin(char *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((long)param_1 < -0x2d0000) {
    lVar3 = 0;
    lVar5 = 0xdbd95b;
    do {
      lVar4 = lVar3;
      param_1 = "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                + (long)(param_1 + 2);
      lVar3 = -lVar5;
      lVar5 = lVar4;
    } while ((long)param_1 < -0x2d0000);
  }
  else if ((long)param_1 < 0x2d0001) {
    lVar3 = 0;
    lVar4 = 0xdbd95b;
  }
  else {
    lVar4 = 0xdbd95b;
    lVar5 = 0;
    do {
      lVar3 = lVar4;
      param_1 = param_1 + -0x5a0000;
      lVar4 = -lVar5;
      lVar5 = lVar3;
    } while (0x2d0000 < (long)param_1);
  }
  lVar5 = 0;
  lVar6 = 1;
  do {
    while( true ) {
      uVar1 = lVar5 + 1;
      lVar7 = lVar3 + lVar6 >> (uVar1 & 0x3f);
      lVar2 = lVar4 + lVar6;
      if (-1 < (long)param_1) break;
      lVar4 = lVar7 + lVar4;
      lVar3 = lVar3 - (lVar2 >> (uVar1 & 0x3f));
      param_1 = param_1 + (&DAT_01975780)[lVar5];
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 << 1;
      if (lVar5 == 0x16) goto LAB_00e1e3a0;
    }
    lVar4 = lVar4 - lVar7;
    lVar3 = (lVar2 >> (uVar1 & 0x3f)) + lVar3;
    param_1 = param_1 + -(&DAT_01975780)[lVar5];
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 << 1;
  } while (lVar5 != 0x16);
LAB_00e1e3a0:
  return lVar3 + 0x80 >> 8;
}

