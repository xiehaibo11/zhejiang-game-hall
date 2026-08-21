
/* v8::internal::Instruction::ImmLogical() */

ulong __thiscall v8::internal::Instruction::ImmLogical(Instruction *this)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)this;
  uVar8 = (ulong)(uVar1 >> 10) & 0x3f;
  uVar3 = 0x20;
  if ((int)uVar1 < 0) {
    uVar3 = 0x40;
  }
  uVar6 = (ulong)(uVar1 >> 0x10) & 0x3f;
  uVar7 = (uint)uVar8;
  uVar5 = (uint)uVar6;
  if ((uVar1 >> 0x16 & 1) == 0) {
    if ((~uVar1 & 0xf800) != 0) {
      if ((uVar1 >> 0xf & 1) == 0) {
        uVar8 = 0x20;
      }
      else if ((uVar1 >> 0xe & 1) == 0) {
        uVar8 = 0x10;
      }
      else if ((uVar1 >> 0xd & 1) == 0) {
        uVar8 = 8;
      }
      else if ((uVar1 >> 0xc & 1) == 0) {
        uVar8 = 4;
      }
      else {
        if ((uVar1 >> 0xb & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar8 = 2;
      }
      uVar4 = (uint)uVar8;
      uVar1 = uVar4 - 1;
      uVar7 = uVar1 & uVar7;
      if (uVar7 != uVar1) {
        uVar1 = uVar1 & uVar5;
        uVar6 = ~(-1L << ((ulong)(uVar7 + 1) & 0x3f));
        if (uVar1 != 0) {
          uVar6 = (uVar6 & (-1L << uVar1 ^ 0xffffffffffffffffU)) << ((ulong)(uVar4 - uVar1) & 0x3f)
                  | uVar6 >> uVar1;
        }
        uVar6 = uVar6 & (-1L << uVar8 ^ 0xffffffffffffffffU);
        while (uVar4 < uVar3) {
          uVar2 = uVar8 & 0x3f;
          uVar4 = (int)uVar8 << 1;
          uVar8 = (ulong)uVar4;
          uVar6 = uVar6 << uVar2 | uVar6;
        }
        return uVar6;
      }
    }
  }
  else if (uVar7 != 0x3f) {
    uVar8 = ~(-1L << (uVar8 + 1 & 0x3f));
    if (uVar5 == 0) {
      return uVar8;
    }
    return uVar8 << ((ulong)-uVar5 & 0x3f) | uVar8 >> uVar6;
  }
  return 0;
}

