
/* v8::internal::Assembler::ld3r(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::MemOperand const&) */

void __thiscall
v8::internal::Assembler::ld3r
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,
          MemOperand *param_4)

{
  LoadStoreStructSingleAllLanes(this,param_1,param_4,0xd40e000);
  return;
}

