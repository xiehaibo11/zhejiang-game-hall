
/* v8::internal::TurboAssembler::Tbz(v8::internal::Register const&, unsigned int,
   v8::internal::Label*) */

void __thiscall
v8::internal::TurboAssembler::Tbz
          (TurboAssembler *this,Register *param_1,uint param_2,Label *param_3)

{
  ulong uVar1;
  undefined8 local_38;
  
  local_38 = 0;
  uVar1 = NeedExtraInstructionsOrRegisterBranch(this,param_3,4);
  if ((uVar1 & 1) == 0) {
    Assembler::tbz((Assembler *)this,param_1,param_2,param_3);
  }
  else {
    Assembler::tbnz((Assembler *)this,param_1,param_2,(Label *)&local_38);
    Assembler::b((Assembler *)this,param_3);
    Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
  }
  Assembler::bind((Label *)this);
  return;
}

