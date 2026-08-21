
/* v8::internal::TurboAssembler::CanonicalizeNaN(v8::internal::VRegister const&,
   v8::internal::VRegister const&) */

void __thiscall
v8::internal::TurboAssembler::CanonicalizeNaN
          (TurboAssembler *this,VRegister *param_1,VRegister *param_2)

{
  AssertFPCRState(this,0xffffffff,2);
  Assembler::fsub((Assembler *)this,param_1,param_2,&DAT_019f4134);
  return;
}

