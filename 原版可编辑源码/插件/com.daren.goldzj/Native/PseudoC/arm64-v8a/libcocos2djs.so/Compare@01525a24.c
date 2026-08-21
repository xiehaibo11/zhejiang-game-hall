
/* v8::internal::Bignum::Compare(v8::internal::Bignum const&, v8::internal::Bignum const&) */

Bignum * v8::internal::Bignum::Compare(Bignum *param_1,Bignum *param_2)

{
  Bignum *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0x214);
  iVar4 = *(int *)(param_2 + 0x214);
  uVar8 = (ulong)iVar4;
  iVar2 = iVar3 + *(int *)(param_1 + 0x210);
  iVar9 = (int)(uVar8 + (long)*(int *)(param_2 + 0x210));
  if (iVar2 < iVar9) {
    return (Bignum *)&DAT_ffffffff;
  }
  if (iVar2 <= iVar9) {
    pBVar1 = param_1 + 0x200;
    iVar9 = iVar3;
    if (iVar4 <= iVar3) {
      iVar9 = iVar4;
    }
    lVar5 = (long)iVar2;
    do {
      if (lVar5 <= iVar9) {
        return (Bignum *)0x0;
      }
      uVar10 = 0;
      if ((iVar3 < lVar5) && (lVar5 <= iVar2)) {
        uVar10 = *(uint *)(*(long *)pBVar1 + ~(long)iVar3 * 4 + lVar5 * 4);
      }
      uVar7 = 0;
      if (((long)uVar8 < lVar5) && (lVar5 <= (long)(uVar8 + (long)*(int *)(param_2 + 0x210)))) {
        uVar7 = *(uint *)(*(long *)(param_2 + 0x200) + ~uVar8 * 4 + lVar5 * 4);
      }
      uVar6 = (uint)param_1;
      if (uVar10 >= uVar7 && uVar10 != uVar7) {
        uVar6 = 1;
      }
      if (uVar10 < uVar7) {
        uVar6 = 0xffffffff;
      }
      param_1 = (Bignum *)(ulong)uVar6;
      lVar5 = lVar5 + -1;
    } while (uVar10 == uVar7);
    return param_1;
  }
  return (Bignum *)0x1;
}

