
/* v8::internal::Instruction::ImmPCOffset() */

long __thiscall v8::internal::Instruction::ImmPCOffset(Instruction *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)this;
  if ((uVar2 & 0x1f000000) == 0x10000000) {
    uVar2 = (int)(uVar2 >> 0x12 & 0x1800 | (uVar2 >> 5) << 0xd) >> 0xb;
    goto LAB_0126bb94;
  }
  if (uVar2 >> 0x19 == 0x2a) {
LAB_0126bb28:
    iVar1 = 0xd;
    lVar3 = 8;
LAB_0126bb88:
    iVar1 = (int)(uVar2 << lVar3) >> iVar1;
  }
  else {
    if ((uVar2 & 0x7c000000) == 0x14000000) {
      lVar3 = 6;
      iVar1 = 6;
      goto LAB_0126bb88;
    }
    if ((uVar2 & 0x7e000000 | 0x2000000) == 0x36000000) {
      if ((uVar2 & 0x7e000000) == 0x34000000) goto LAB_0126bb28;
      if ((uVar2 & 0x7e000000) != 0x36000000) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      iVar1 = 0x12;
      lVar3 = 0xd;
      goto LAB_0126bb88;
    }
    if (((uVar2 & 0xffe0001f) == 0xd4200000) && ((*(uint *)(this + 4) & 0xffe0001f) == 0xd4200000))
    {
      uVar2 = *(uint *)(this + 4) >> 3 & 0x3fffc | (uVar2 >> 5) << 0x12;
      goto LAB_0126bb94;
    }
    iVar1 = (int)(uVar2 << 8) >> 0xd;
  }
  uVar2 = iVar1 << 2;
LAB_0126bb94:
  return (long)(int)uVar2;
}

