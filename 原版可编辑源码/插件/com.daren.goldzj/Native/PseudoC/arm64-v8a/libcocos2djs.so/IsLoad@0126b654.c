
/* v8::internal::Instruction::IsLoad() const */

uint __thiscall v8::internal::Instruction::IsLoad(Instruction *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 & 0xa000000) == 0x8000000) {
    if ((uVar1 & 0x3a000000) == 0x28000000) {
      return uVar1 >> 0x16 & 1;
    }
    uVar1 = uVar1 & 0xc4c00000;
    if ((int)uVar1 < 0xc00000) {
      if ((int)uVar1 < -0x3fc00000) {
        if (uVar1 == 0x80400000) {
          return 1;
        }
        if (uVar1 == 0x80800000) {
          return 1;
        }
        if (uVar1 == 0x84400000) {
          return 1;
        }
      }
      else if ((int)uVar1 < 0x400000) {
        if (uVar1 == 0xc0400000) {
          return 1;
        }
        if (uVar1 == 0xc4400000) {
          return 1;
        }
      }
      else {
        if (uVar1 == 0x400000) {
          return 1;
        }
        if (uVar1 == 0x800000) {
          return 1;
        }
      }
    }
    else if ((int)uVar1 < 0x40400000) {
      if (uVar1 == 0xc00000) {
        return 1;
      }
      if (uVar1 == 0x4400000) {
        return 1;
      }
      if (uVar1 == 0x4c00000) {
        return 1;
      }
    }
    else if ((int)uVar1 < 0x40c00000) {
      if (uVar1 == 0x40400000) {
        return 1;
      }
      if (uVar1 == 0x40800000) {
        return 1;
      }
    }
    else {
      if (uVar1 == 0x40c00000) {
        return 1;
      }
      if (uVar1 == 0x44400000) {
        return 1;
      }
    }
  }
  return 0;
}

