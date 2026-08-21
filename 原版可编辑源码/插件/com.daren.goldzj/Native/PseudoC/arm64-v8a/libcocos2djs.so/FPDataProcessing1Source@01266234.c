
/* v8::internal::Assembler::FPDataProcessing1Source(v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::FPDataProcessing1SourceOp) */

void __thiscall
v8::internal::Assembler::FPDataProcessing1Source
          (Assembler *this,uint *param_1,ulong *param_2,uint param_4)

{
  Emit(this,param_4 | (int)*param_2 << 5 | *param_1 | (uint)(*param_2 >> 0x20 == 0x40) << 0x16);
  return;
}

