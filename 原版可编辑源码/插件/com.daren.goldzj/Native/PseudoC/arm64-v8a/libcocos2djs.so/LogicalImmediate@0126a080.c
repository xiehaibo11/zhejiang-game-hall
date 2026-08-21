
/* v8::internal::Assembler::LogicalImmediate(v8::internal::Register const&, v8::internal::Register
   const&, unsigned int, unsigned int, unsigned int, v8::internal::LogicalOp) */

void __thiscall
v8::internal::Assembler::LogicalImmediate
          (Assembler *this,ulong *param_1,int *param_2,int param_3,int param_4,int param_5,
          uint param_7)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (param_7 != 0x60000000) {
    uVar1 = uVar1 & 0x1f;
  }
  Emit(this,param_3 << 0x16 | param_4 << 10 | param_7 | param_5 << 0x10 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | uVar1 | *param_2 << 5 | 0x12000000);
  return;
}

