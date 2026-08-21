
/* v8::base::MagicNumbersForDivision<unsigned int> v8::base::SignedDivisionByConstant<unsigned
   int>(unsigned int) */

undefined1  [16] v8::base::SignedDivisionByConstant<unsigned_int>(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar5 = -param_1;
  if (-1 < (int)param_1) {
    uVar5 = param_1;
  }
  uVar1 = param_1 >> 0x1f | 0x80000000;
  uVar9 = 0;
  if (uVar5 != 0) {
    uVar9 = uVar1 / uVar5;
  }
  uVar1 = uVar1 + ~(uVar1 - uVar9 * uVar5);
  uVar9 = 0;
  if (uVar5 != 0) {
    uVar9 = 0x80000000 / uVar5;
  }
  uVar10 = 0;
  if (uVar1 != 0) {
    uVar10 = 0x80000000 / uVar1;
  }
  iVar6 = 0;
  iVar8 = -0x80000000 - uVar10 * uVar1;
  iVar7 = -0x80000000 - uVar9 * uVar5;
  while( true ) {
    uVar3 = iVar8 * 2;
    uVar4 = iVar7 * 2;
    uVar2 = 0;
    if (uVar1 <= uVar3) {
      uVar2 = uVar1;
    }
    iVar8 = uVar3 - uVar2;
    uVar2 = 0;
    if (uVar5 <= uVar4) {
      uVar2 = uVar5;
    }
    iVar7 = uVar4 - uVar2;
    uVar10 = (uint)(uVar1 <= uVar3) | uVar10 << 1;
    uVar9 = (uint)(uVar5 <= uVar4) | uVar9 << 1;
    if ((uVar5 - iVar7 <= uVar10) && ((uVar10 != uVar5 - iVar7 || (iVar8 != 0)))) break;
    iVar6 = iVar6 + 1;
  }
  uVar5 = ~uVar9;
  if (-1 < (int)param_1) {
    uVar5 = uVar9 + 1;
  }
  auVar11._4_4_ = iVar6;
  auVar11._0_4_ = uVar5;
  auVar11._8_8_ = 0;
  return auVar11;
}

