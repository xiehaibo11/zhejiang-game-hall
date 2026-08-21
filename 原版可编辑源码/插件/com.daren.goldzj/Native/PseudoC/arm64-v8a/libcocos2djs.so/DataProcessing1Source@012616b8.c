
/* v8::internal::Assembler::DataProcessing1Source(v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::DataProcessing1SourceOp) */

void __thiscall
v8::internal::Assembler::DataProcessing1Source
          (Assembler *this,uint *param_1,ulong *param_2,uint param_4)

{
  Emit(this,param_4 | (int)*param_2 << 5 | *param_1 | (uint)(*param_2 >> 0x20 == 0x40) << 0x1f);
  return;
}

