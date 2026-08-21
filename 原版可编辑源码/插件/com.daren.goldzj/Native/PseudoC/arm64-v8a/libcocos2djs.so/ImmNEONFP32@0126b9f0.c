
/* v8::internal::Instruction::ImmNEONFP32() const */

int __thiscall v8::internal::Instruction::ImmNEONFP32(Instruction *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  return ((uVar1 & 0x40000) << 0xd | (uVar1 >> 0xb & 0x20 | uVar1 >> 5 & 0x1f) << 0x13) +
         (uVar1 >> 0xb & 0x40) * -0x80000 + 0x40000000;
}

