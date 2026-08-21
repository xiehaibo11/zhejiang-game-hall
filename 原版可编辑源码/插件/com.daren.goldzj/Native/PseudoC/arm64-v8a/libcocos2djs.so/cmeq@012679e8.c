
/* v8::internal::Assembler::cmeq(v8::internal::VRegister const&, v8::internal::VRegister const&,
   int) */

void v8::internal::Assembler::cmeq(VRegister *param_1,VRegister *param_2,int param_3)

{
  undefined4 in_w3;
  
  NEON2RegMisc(param_1,param_2,param_3,0xe209800,in_w3);
  return;
}

