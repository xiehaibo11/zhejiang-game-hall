
/* v8::internal::Instruction::ImmFP32() */

int __thiscall v8::internal::Instruction::ImmFP32(Instruction *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this >> 0xd;
  return ((uVar1 & 0x80) << 0x18 | (uVar1 & 0x3f) << 0x13) + (uVar1 & 0x40) * -0x80000 + 0x40000000;
}

