
/* v8::base::MagicNumbersForDivision<unsigned long> v8::base::UnsignedDivisionByConstant<unsigned
   long>(unsigned long, unsigned int) */

undefined1  [16] v8::base::UnsignedDivisionByConstant<unsigned_long>(ulong param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar8 = 0xffffffffffffffff >> ((ulong)param_2 & 0x3f);
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = 0x7fffffffffffffff / param_1;
  }
  uVar10 = uVar8 - param_1;
  uVar7 = 0x7fffffffffffffff - uVar5 * param_1;
  uVar11 = 0;
  if (param_1 != 0) {
    uVar11 = uVar10 / param_1;
  }
  uVar8 = uVar8 + (uVar11 * param_1 - uVar10);
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = 0x8000000000000000 / uVar8;
  }
  uVar10 = 0;
  uVar4 = 0;
  uVar9 = 0x8000000000000000 - uVar11 * uVar8;
  while( true ) {
    bVar2 = uVar8 - uVar9 <= uVar9;
    uVar1 = 0;
    if (bVar2) {
      uVar1 = uVar8;
    }
    if (uVar7 + 1 < param_1 - uVar7) {
      uVar7 = uVar7 << 1 | 1;
      uVar3 = (uint)(uVar5 >> 0x3f);
      uVar6 = uVar5 << 1;
    }
    else {
      uVar6 = uVar5 << 1 | 1;
      uVar3 = (uint)(0x7ffffffffffffffe < uVar5);
      uVar7 = (uVar7 << 1 | 1) - param_1;
    }
    uVar4 = uVar4 | uVar3;
    if ((int)uVar10 == 0x40) break;
    uVar11 = (ulong)bVar2 | uVar11 << 1;
    uVar9 = uVar9 * 2 - uVar1;
    if ((~uVar7 + param_1 <= uVar11) && ((uVar9 != 0 || (uVar11 != ~uVar7 + param_1)))) break;
    uVar10 = uVar10 + 1;
    uVar5 = uVar6;
  }
  uVar8 = 0x100000000;
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  auVar12._8_8_ = uVar8 | uVar10;
  auVar12._0_8_ = uVar6 + 1;
  return auVar12;
}

