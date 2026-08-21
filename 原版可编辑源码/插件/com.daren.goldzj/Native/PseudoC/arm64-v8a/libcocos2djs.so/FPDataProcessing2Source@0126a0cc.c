
/* v8::internal::Assembler::FPDataProcessing2Source(v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::FPDataProcessing2SourceOp) */

void __thiscall
v8::internal::Assembler::FPDataProcessing2Source
          (Assembler *this,ulong *param_1,int *param_2,int *param_3,uint param_5)

{
  Emit(this,(uint)*param_1 | param_5 | (uint)(*param_1 >> 0x20 == 0x40) << 0x16 | *param_3 << 0x10 |
            *param_2 << 5);
  return;
}

