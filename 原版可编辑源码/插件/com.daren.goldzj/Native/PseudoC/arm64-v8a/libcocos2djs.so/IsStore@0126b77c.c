
/* v8::internal::Instruction::IsStore() const */

bool __thiscall v8::internal::Instruction::IsStore(Instruction *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)this;
  if ((uVar2 & 0xa000000) != 0x8000000) {
    return false;
  }
  if ((uVar2 & 0x3a000000) == 0x28000000) {
    return (uVar2 & 0x400000) == 0;
  }
  uVar1 = uVar2 & 0xc4c00000;
  bVar3 = true;
  if ((int)uVar2 < 0) {
    if ((int)uVar1 < -0x40000000) {
      if (uVar1 == 0x80000000) {
        return bVar3;
      }
      if (uVar1 == 0x84000000) {
        return bVar3;
      }
    }
    else {
      if (uVar1 == 0xc0000000) {
        return bVar3;
      }
      if (uVar1 == 0xc4000000) {
        return bVar3;
      }
    }
  }
  else if ((int)uVar1 < 0x4800000) {
    if (uVar1 == 0) {
      return bVar3;
    }
    if (uVar1 == 0x4000000) {
      return bVar3;
    }
  }
  else if (((uVar1 == 0x4800000) || (uVar1 == 0x40000000)) || (uVar1 == 0x44000000)) {
    return bVar3;
  }
  return false;
}

