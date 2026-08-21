
/* v8::base::MagicNumbersForDivision<unsigned long> v8::base::SignedDivisionByConstant<unsigned
   long>(unsigned long) */

undefined1  [16] v8::base::SignedDivisionByConstant<unsigned_long>(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar3 = -param_1;
  if (-1 < (long)param_1) {
    uVar3 = param_1;
  }
  uVar4 = param_1 >> 0x3f | 0x8000000000000000;
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar4 / uVar3;
  }
  uVar4 = uVar4 + ~(uVar4 - uVar9 * uVar3);
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = 0x8000000000000000 / uVar3;
  }
  uVar10 = 0;
  if (uVar4 != 0) {
    uVar10 = 0x8000000000000000 / uVar4;
  }
  iVar2 = 0;
  lVar7 = -0x8000000000000000 - uVar10 * uVar4;
  lVar5 = -0x8000000000000000 - uVar9 * uVar3;
  while( true ) {
    uVar8 = lVar7 * 2;
    uVar6 = lVar5 * 2;
    uVar1 = 0;
    if (uVar4 <= uVar8) {
      uVar1 = uVar4;
    }
    lVar7 = uVar8 - uVar1;
    uVar1 = 0;
    if (uVar3 <= uVar6) {
      uVar1 = uVar3;
    }
    lVar5 = uVar6 - uVar1;
    uVar10 = (ulong)(uVar4 <= uVar8) | uVar10 << 1;
    uVar9 = (ulong)(uVar3 <= uVar6) | uVar9 << 1;
    if ((uVar3 - lVar5 <= uVar10) && ((lVar7 != 0 || (uVar10 != uVar3 - lVar5)))) break;
    iVar2 = iVar2 + 1;
  }
  uVar3 = ~uVar9;
  if (-1 < (long)param_1) {
    uVar3 = uVar9 + 1;
  }
  auVar11._8_4_ = iVar2;
  auVar11._0_8_ = uVar3;
  auVar11._12_4_ = 0;
  return auVar11;
}

