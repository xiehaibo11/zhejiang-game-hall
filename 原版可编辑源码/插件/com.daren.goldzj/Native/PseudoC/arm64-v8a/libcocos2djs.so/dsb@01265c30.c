
/* v8::internal::Assembler::dsb(v8::internal::BarrierDomain, v8::internal::BarrierType) */

void __thiscall v8::internal::Assembler::dsb(Assembler *this,int param_2,int param_3)

{
  Emit(this,param_2 << 10 | param_3 << 8 | 0xd503309f);
  return;
}

