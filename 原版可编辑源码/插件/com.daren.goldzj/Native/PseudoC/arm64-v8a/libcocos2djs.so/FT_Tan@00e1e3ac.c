
ulong FT_Tan(char *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if ((long)param_1 < -0x2d0000) {
    uVar4 = 0;
    uVar7 = 0x1000000;
    do {
      uVar5 = uVar4;
      param_1 = "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                + (long)(param_1 + 2);
      uVar4 = -uVar7;
      uVar7 = uVar5;
    } while ((long)param_1 < -0x2d0000);
  }
  else if ((long)param_1 < 0x2d0001) {
    uVar4 = 0;
    uVar5 = 0x1000000;
  }
  else {
    uVar5 = 0x1000000;
    uVar7 = 0;
    do {
      uVar4 = uVar5;
      param_1 = param_1 + -0x5a0000;
      uVar5 = -uVar7;
      uVar7 = uVar4;
    } while (0x2d0000 < (long)param_1);
  }
  lVar6 = 0;
  lVar8 = 1;
  do {
    while( true ) {
      uVar7 = lVar6 + 1;
      lVar9 = (long)(uVar4 + lVar8) >> (uVar7 & 0x3f);
      lVar1 = uVar5 + lVar8;
      if (-1 < (long)param_1) break;
      uVar5 = lVar9 + uVar5;
      uVar4 = uVar4 - (lVar1 >> (uVar7 & 0x3f));
      param_1 = param_1 + (&DAT_01975780)[lVar6];
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 << 1;
      if (lVar6 == 0x16) goto LAB_00e1e498;
    }
    uVar5 = uVar5 - lVar9;
    uVar4 = (lVar1 >> (uVar7 & 0x3f)) + uVar4;
    param_1 = param_1 + -(&DAT_01975780)[lVar6];
    lVar6 = lVar6 + 1;
    lVar8 = lVar8 << 1;
  } while (lVar6 != 0x16);
LAB_00e1e498:
  iVar2 = 1;
  if ((long)uVar4 < 0) {
    iVar2 = -1;
  }
  uVar7 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar7 = uVar5;
  }
  iVar3 = -iVar2;
  if (-1 < (long)uVar5) {
    iVar3 = iVar2;
  }
  if (uVar7 == 0) {
    uVar4 = 0xffffffff80000001;
    if (-1 < iVar3) {
      uVar4 = 0x7fffffff;
    }
    return uVar4;
  }
  uVar5 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar5 = uVar4;
  }
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = (uVar5 * 0x10000 + (uVar7 >> 1)) / uVar7;
  }
  uVar5 = -uVar4;
  if (-1 < iVar3) {
    uVar5 = uVar4;
  }
  return uVar5;
}

