
/* v8::internal::Instruction::ImmFP64() */

undefined1  [16] __thiscall v8::internal::Instruction::ImmFP64(Instruction *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(uint *)this;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((ulong)uVar1 & 0x100000) << 0x2b |
                 (ulong)(uVar1 >> 0xd & 0x3f) << 0x30 |
                 ((ulong)(0x100 - (uVar1 >> 0x13 & 1)) & 0x1ff) << 0x36;
  return auVar2;
}

