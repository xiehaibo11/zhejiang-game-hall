
/* v8::internal::Bignum::PlusCompare(v8::internal::Bignum const&, v8::internal::Bignum const&,
   v8::internal::Bignum const&) */

int v8::internal::Bignum::PlusCompare(Bignum *param_1,Bignum *param_2,Bignum *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Bignum *pBVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar12 = *(int *)(param_1 + 0x210);
  iVar4 = *(int *)(param_1 + 0x214);
  do {
    iVar13 = iVar4;
    pBVar7 = param_2;
    param_2 = param_1;
    iVar1 = iVar13 + iVar12;
    iVar12 = *(int *)(pBVar7 + 0x210);
    iVar4 = *(int *)(pBVar7 + 0x214);
    iVar2 = iVar4 + iVar12;
    param_1 = pBVar7;
  } while (iVar1 < iVar2);
  iVar5 = *(int *)(param_3 + 0x214);
  iVar12 = iVar5 + *(int *)(param_3 + 0x210);
  if (iVar12 <= iVar1 + 1) {
    if (iVar12 < iVar1) {
      return 1;
    }
    if ((iVar13 < iVar2) || (iVar12 <= iVar1)) {
      iVar3 = iVar13;
      if (iVar4 <= iVar13) {
        iVar3 = iVar4;
      }
      if (iVar5 <= iVar3) {
        iVar3 = iVar5;
      }
      iVar14 = 0;
      lVar8 = (long)iVar12;
      do {
        if (lVar8 <= iVar3) {
          return -(uint)(iVar14 != 0);
        }
        iVar9 = 0;
        if ((iVar13 < lVar8) && (lVar8 <= iVar1)) {
          iVar9 = *(int *)(*(long *)(param_2 + 0x200) + (long)iVar13 * -4 + -4 + lVar8 * 4);
        }
        iVar10 = 0;
        if ((iVar4 < lVar8) && (lVar8 <= iVar2)) {
          iVar10 = *(int *)(*(long *)(pBVar7 + 0x200) + (long)iVar4 * -4 + -4 + lVar8 * 4);
        }
        iVar11 = 0;
        if ((iVar5 < lVar8) && (lVar8 <= iVar12)) {
          iVar11 = *(int *)(*(long *)(param_3 + 0x200) + ~(long)iVar5 * 4 + lVar8 * 4);
        }
        uVar6 = (iVar11 + iVar14) - (iVar10 + iVar9);
        if ((uint)(iVar11 + iVar14) < (uint)(iVar10 + iVar9)) {
          return 1;
        }
        lVar8 = lVar8 + -1;
        iVar14 = uVar6 * 0x10000000;
      } while (uVar6 < 2);
    }
  }
  return -1;
}

