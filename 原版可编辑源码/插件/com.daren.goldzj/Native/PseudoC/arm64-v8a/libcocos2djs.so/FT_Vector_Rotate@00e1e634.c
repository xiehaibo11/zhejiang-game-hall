
void FT_Vector_Rotate(long *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((param_1 != (long *)0x0) && (param_2 != (char *)0x0)) {
    lVar11 = *param_1;
    lVar8 = param_1[1];
    if (lVar8 != 0 || lVar11 != 0) {
      uVar4 = -(uint)lVar11;
      if (-1 < lVar11) {
        uVar4 = (uint)lVar11;
      }
      uVar3 = -(uint)lVar8;
      if (-1 < lVar8) {
        uVar3 = (uint)lVar8;
      }
      iVar5 = -(int)LZCOUNT(uVar3 | uVar4);
      iVar6 = iVar5 + 0x1f;
      uVar4 = iVar5 + 2;
      if (uVar4 == 0 || iVar6 < 0x1d) {
        uVar7 = (ulong)(0x1d - iVar6);
        lVar11 = lVar11 << (uVar7 & 0x3f);
        lVar8 = lVar8 << (uVar7 & 0x3f);
      }
      else {
        lVar11 = lVar11 >> ((ulong)uVar4 & 0x3f);
        lVar8 = lVar8 >> ((ulong)uVar4 & 0x3f);
        uVar7 = (ulong)(0x1d - iVar6);
      }
      lVar12 = lVar11;
      if ((long)param_2 < -0x2d0000) {
        do {
          lVar11 = lVar8;
          param_2 = "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                    + (long)(param_2 + 2);
          lVar8 = -lVar12;
          lVar12 = lVar11;
        } while ((long)param_2 < -0x2d0000);
      }
      else {
        for (; 0x2d0000 < (long)param_2; param_2 = param_2 + -0x5a0000) {
          lVar12 = -lVar8;
          lVar8 = lVar11;
          lVar11 = lVar12;
        }
      }
      lVar12 = 0;
      lVar13 = 1;
      do {
        while( true ) {
          uVar1 = lVar12 + 1;
          lVar14 = lVar8 + lVar13 >> (uVar1 & 0x3f);
          lVar2 = lVar11 + lVar13;
          if ((long)param_2 < 0) break;
          lVar11 = lVar11 - lVar14;
          lVar8 = (lVar2 >> (uVar1 & 0x3f)) + lVar8;
          param_2 = param_2 + -(&DAT_01975780)[lVar12];
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 << 1;
          if (lVar12 == 0x16) goto LAB_00e1e76c;
        }
        lVar11 = lVar14 + lVar11;
        lVar8 = lVar8 - (lVar2 >> (uVar1 & 0x3f));
        param_2 = param_2 + (&DAT_01975780)[lVar12];
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 << 1;
      } while (lVar12 != 0x16);
LAB_00e1e76c:
      lVar12 = -lVar11;
      if (-1 < lVar11) {
        lVar12 = lVar11;
      }
      uVar10 = lVar12 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar1 = -uVar10;
      if (-1 < lVar11) {
        uVar1 = uVar10;
      }
      lVar11 = -lVar8;
      if (-1 < lVar8) {
        lVar11 = lVar8;
      }
      uVar9 = lVar11 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar10 = -uVar9;
      if (-1 < lVar8) {
        uVar10 = uVar9;
      }
      iVar6 = (int)uVar7;
      if (iVar6 < 1) {
        lVar11 = uVar1 << ((ulong)(uint)-iVar6 & 0x3f);
        lVar8 = uVar10 << ((ulong)(uint)-iVar6 & 0x3f);
      }
      else {
        lVar8 = (long)(1 << (ulong)(iVar6 - 1U & 0x1f));
        lVar11 = (long)(uVar1 + lVar8 + ((long)uVar1 >> 0x3f)) >> (uVar7 & 0x3f);
        lVar8 = (long)(uVar10 + lVar8 + ((long)uVar10 >> 0x3f)) >> (uVar7 & 0x3f);
      }
      *param_1 = lVar11;
      param_1[1] = lVar8;
    }
  }
  return;
}

