
/* v8::internal::Instruction::ImmNEONFP64() const */

undefined1  [16] __thiscall v8::internal::Instruction::ImmNEONFP64(Instruction *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(uint *)this;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((ulong)uVar1 & 0x40000) << 0x2d |
                 (ulong)(uVar1 >> 0xb & 0x20 | uVar1 >> 5 & 0x1f) << 0x30 |
                 ((ulong)(0x100 - (uVar1 >> 0x11 & 1)) & 0x1ff) << 0x36;
  return auVar2;
}

