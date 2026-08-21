
/* v8::internal::Assembler::mrs(v8::internal::Register const&, v8::internal::SystemRegister) */

void __thiscall v8::internal::Assembler::mrs(Assembler *this,uint *param_1,int param_3)

{
  Emit(this,*param_1 | param_3 << 5 | 0xd5300000);
  return;
}

