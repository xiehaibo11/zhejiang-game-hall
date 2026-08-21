
/* v8::internal::TurboAssembler::Movi(v8::internal::VRegister const&, unsigned long,
   v8::internal::Shift, int) */

void __thiscall
v8::internal::TurboAssembler::Movi
          (TurboAssembler *this,VRegister *param_1,ulong param_2,int param_4,int param_5)

{
  int iVar1;
  
  if (param_5 != 0 || param_4 != 0) {
    Assembler::movi();
    return;
  }
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 4) {
LAB_0126edfc:
      Movi32bitHelper(this,param_1,param_2);
      return;
    }
    if (iVar1 == 8) {
LAB_0126ee00:
      Movi16bitHelper(this,param_1,param_2);
      return;
    }
    if (iVar1 == 0x10) {
LAB_0126edf0:
      Assembler::movi();
      return;
    }
  }
  else if (*(int *)(param_1 + 4) == 0x40) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 2) goto LAB_0126edfc;
    if (iVar1 == 4) goto LAB_0126ee00;
    if (iVar1 == 8) goto LAB_0126edf0;
  }
  Movi64bitHelper(this,param_1,param_2);
  return;
}

