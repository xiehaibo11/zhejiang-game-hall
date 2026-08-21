
/* v8::internal::Assembler::fccmp(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::StatusFlags, v8::internal::Condition) */

void __thiscall
v8::internal::Assembler::fccmp(Assembler *this,ulong *param_1,int *param_2,uint param_4,int param_5)

{
  Emit(this,param_4 >> 0x1c | param_5 << 0xc | (int)*param_1 << 5 | *param_2 << 0x10 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x16 | 0x1e200400);
  return;
}

