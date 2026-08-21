
/* v8::internal::TurboAssembler::Cbz(v8::internal::Register const&, v8::internal::Label*) */

void __thiscall
v8::internal::TurboAssembler::Cbz(TurboAssembler *this,Register *param_1,Label *param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  uVar1 = NeedExtraInstructionsOrRegisterBranch(this,param_2,3);
  if ((uVar1 & 1) == 0) {
    Assembler::cbz((Assembler *)this,param_1,param_2);
  }
  else {
    Assembler::cbnz((Assembler *)this,param_1,(Label *)&local_18);
    Assembler::b((Assembler *)this,param_2);
    Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
  }
  Assembler::bind((Label *)this);
  return;
}

