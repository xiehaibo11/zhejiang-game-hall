
/* v8::base::MagicNumbersForDivision<unsigned int> v8::base::UnsignedDivisionByConstant<unsigned
   int>(unsigned int, unsigned int) */

undefined1  [16] v8::base::UnsignedDivisionByConstant<unsigned_int>(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  uVar2 = 0xffffffff >> (ulong)(param_2 & 0x1f);
  uVar9 = 0;
  if (param_1 != 0) {
    uVar9 = 0x7fffffff / param_1;
  }
  uVar12 = uVar2 - param_1;
  uVar11 = 0x7fffffff - uVar9 * param_1;
  uVar10 = 0;
  if (param_1 != 0) {
    uVar10 = uVar12 / param_1;
  }
  uVar2 = uVar2 + (uVar10 * param_1 - uVar12);
  uVar12 = 0;
  if (uVar2 != 0) {
    uVar12 = 0x80000000 / uVar2;
  }
  uVar7 = 0;
  uVar6 = 0;
  iVar8 = 0x20;
  uVar10 = 0x80000000 - uVar12 * uVar2;
  while( true ) {
    uVar5 = uVar11 + 1;
    uVar3 = param_1 - uVar11;
    bVar4 = uVar2 - uVar10 <= uVar10;
    uVar1 = 0;
    if (bVar4) {
      uVar1 = uVar2;
    }
    uVar11 = uVar11 << 1 | 1;
    if (uVar5 < uVar3) {
      uVar5 = uVar9 >> 0x1f;
      uVar9 = uVar9 << 1;
    }
    else {
      uVar11 = uVar11 - param_1;
      uVar5 = (uint)(0x7ffffffe < uVar9);
      uVar9 = uVar9 << 1 | 1;
    }
    uVar6 = uVar6 | uVar5;
    if (iVar8 == 0) break;
    uVar12 = (uint)bVar4 | uVar12 << 1;
    uVar10 = uVar10 * 2 - uVar1;
    if ((~uVar11 + param_1 <= uVar12) && ((uVar10 != 0 || (uVar12 != ~uVar11 + param_1)))) break;
    uVar7 = uVar7 + 0x100000000;
    iVar8 = iVar8 + -1;
  }
  auVar13._0_8_ = uVar7 | uVar9 + 1;
  auVar13._8_4_ = uVar6;
  auVar13._12_4_ = 0;
  return auVar13;
}

