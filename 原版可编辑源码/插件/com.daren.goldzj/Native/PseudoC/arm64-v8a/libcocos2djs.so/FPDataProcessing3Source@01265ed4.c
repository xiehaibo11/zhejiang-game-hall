
/* v8::internal::Assembler::FPDataProcessing3Source(v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::FPDataProcessing3SourceOp) */

void __thiscall
v8::internal::Assembler::FPDataProcessing3Source
          (Assembler *this,ulong *param_1,int *param_2,int *param_3,int *param_4,uint param_6)

{
  Emit(this,(uint)*param_1 | param_6 | (uint)(*param_1 >> 0x20 == 0x40) << 0x16 | *param_3 << 0x10 |
            *param_2 << 5 | *param_4 << 10);
  return;
}

