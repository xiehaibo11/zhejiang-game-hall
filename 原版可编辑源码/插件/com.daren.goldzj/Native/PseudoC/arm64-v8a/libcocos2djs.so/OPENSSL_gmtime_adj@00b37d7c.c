
undefined8 OPENSSL_gmtime_adj(int *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  iVar7 = (int)((ulong)param_3 >> 0x20);
  lVar8 = (param_3 / 0x15180 + ((long)iVar7 >> 0x1f)) - ((long)iVar7 >> 0x1f);
  iVar7 = ((int)param_3 - (int)((ulong)(lVar8 * 0x1518000000000) >> 0x20)) + param_1[2] * 0xe10 +
          param_1[1] * 0x3c + *param_1;
  param_2 = (int)lVar8 + param_2;
  if (iVar7 < 0x15180) {
    if (iVar7 < 0) {
      param_2 = param_2 + -1;
      iVar7 = iVar7 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar7 = iVar7 + -0x15180;
  }
  iVar6 = (param_1[4] + -0xd) / 0xc;
  iVar9 = param_1[5] + iVar6;
  iVar3 = iVar9 * 0x5b5;
  iVar1 = iVar3 + 0x955d1c;
  iVar3 = iVar3 + 0x955d1f;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar1 = ((iVar9 + 0x1a90) / 100) * 3;
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  lVar8 = (long)(((param_1[3] + (iVar3 >> 2) + ((param_1[4] + iVar6 * -0xc) * 0x16f + -0x16f) / 0xc)
                 - (iVar9 >> 2)) + -0x7d4b) + (long)param_2;
  if (-1 < lVar8) {
    lVar8 = lVar8 + 0x10bd9;
    lVar5 = (lVar8 * 4) / 0x23ab1;
    lVar10 = lVar5 * 0x23ab1;
    lVar12 = lVar10 + 3;
    lVar10 = lVar10 + 6;
    if (-1 < lVar12) {
      lVar10 = lVar12;
    }
    lVar8 = lVar8 - (lVar10 >> 2);
    lVar10 = (lVar8 * 4000 + 4000) / 0x164b09;
    lVar11 = lVar10 * 0x5b5;
    lVar12 = lVar11 + 3;
    if (-1 < lVar11) {
      lVar12 = lVar11;
    }
    lVar8 = (lVar8 - (lVar12 >> 2)) + 0x1f;
    lVar12 = lVar8 * 0x50;
    iVar9 = ((int)(lVar12 / 0x6925) + (int)(lVar12 >> 0x3f)) -
            (SUB164(SEXT816(lVar12) * SEXT816(0x137a5afac274c5c9),0xc) >> 0x1f);
    uVar2 = ((int)lVar10 + (int)lVar5 * 100 + iVar9) - 0x1a90;
    if (0x7e8 < uVar2 >> 2) {
      return 0;
    }
    auVar4 = SEXT816((lVar12 / 0x98f) * 0x98f) * SEXT816(0x6666666666666667);
    param_1[4] = (int)(lVar12 / 0x98f) + iVar9 * -0xc + 1;
    param_1[5] = uVar2;
    param_1[2] = iVar7 / 0xe10;
    param_1[3] = (int)lVar8 - ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f));
    *param_1 = iVar7 % 0x3c;
    param_1[1] = (iVar7 / 0x3c) % 0x3c;
    return 1;
  }
  return 0;
}

