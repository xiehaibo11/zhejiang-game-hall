
/* v8::internal::Assembler::IsImmLogical(unsigned long, unsigned int, unsigned int*, unsigned int*,
   unsigned int*) */

undefined8
v8::internal::Assembler::IsImmLogical
          (ulong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  
  uVar5 = param_1;
  if ((param_1 & 1) != 0) {
    uVar5 = ~param_1;
  }
  uVar1 = uVar5 & 0xffffffff | uVar5 << 0x20;
  if (param_2 != 0x20) {
    uVar1 = uVar5;
  }
  uVar5 = LargestPowerOf2Divisor(uVar1);
  uVar6 = LargestPowerOf2Divisor(uVar5 + uVar1);
  uVar7 = LargestPowerOf2Divisor((uVar5 + uVar1) - uVar6);
  if (uVar7 == 0) {
    if (uVar5 == 0) {
      return 0;
    }
    uVar9 = 0x40;
    iVar2 = CountLeadingZeros(uVar5,0x40);
    uVar7 = 0;
    uVar10 = 1;
  }
  else {
    iVar2 = CountLeadingZeros(uVar5,0x40);
    iVar3 = CountLeadingZeros(uVar7,0x40);
    uVar9 = iVar2 - iVar3;
    uVar10 = 0;
    uVar7 = -1L << ((ulong)uVar9 & 0x3f);
  }
  if ((int)uVar9 < 1) {
    return 0;
  }
  uVar12 = CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                    CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                             CONCAT11(POPCOUNT((char)(uVar9 >> 8)),POPCOUNT((char)uVar9))));
  uVar11 = NEON_uaddlv((ulong)uVar12,1);
  if (1 < CONCAT22((short)(uVar12 >> 0x10),uVar11)) {
    return 0;
  }
  if (((uVar7 & uVar6 - uVar5) == 0) &&
     (iVar3 = CountLeadingZeros((ulong)uVar9,0x40),
     uVar1 == *(long *)(&DAT_019f3620 + (long)iVar3 * 8) * (uVar6 - uVar5))) {
    if (uVar6 == 0) {
      iVar4 = -1;
      iVar3 = iVar2 + 1;
    }
    else {
      iVar4 = CountLeadingZeros(uVar6,0x40);
      iVar3 = iVar2 - iVar4;
    }
    if ((param_1 & 1) == 0) {
      uVar8 = iVar2 + 1;
      uVar12 = uVar9 - 1;
    }
    else {
      iVar3 = uVar9 - iVar3;
      uVar12 = iVar4 + 1;
      uVar8 = uVar9 - 1;
    }
    *param_3 = uVar10;
    *param_4 = (iVar3 - 1U | uVar9 * -2) & 0x3f;
    *param_5 = uVar12 & uVar8;
    return 1;
  }
  return 0;
}

