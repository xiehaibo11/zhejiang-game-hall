
/* v8::internal::TurboAssembler::B(v8::internal::Label*, v8::internal::Condition) */

void __thiscall v8::internal::TurboAssembler::B(TurboAssembler *this,Label *param_1,uint param_3)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  uVar1 = NeedExtraInstructionsOrRegisterBranch(this,param_1,1);
  if ((uVar1 & 1) == 0) {
    Assembler::b((Assembler *)this,param_1,param_3);
  }
  else {
    Assembler::b((Assembler *)this,&local_18,param_3 ^ 1);
    Assembler::b((Assembler *)this,param_1);
    Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
  }
  Assembler::bind((Label *)this);
  return;
}

