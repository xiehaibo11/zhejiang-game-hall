
/* v8::internal::Assembler::ConditionalSelect(v8::internal::Register const&, v8::internal::Register
   const&, v8::internal::Register const&, v8::internal::Condition,
   v8::internal::ConditionalSelectOp) */

void __thiscall
v8::internal::Assembler::ConditionalSelect
          (Assembler *this,ulong *param_1,int *param_2,int *param_3,int param_5,uint param_6)

{
  Emit(this,param_6 | param_5 << 0xc | (uint)*param_1 | (uint)(*param_1 >> 0x20 == 0x40) << 0x1f |
            *param_3 << 0x10 | *param_2 << 5);
  return;
}

