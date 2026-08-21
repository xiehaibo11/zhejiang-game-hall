
/* v8::internal::RegExpMacroAssemblerARM64::IfRegisterLT(int, int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::IfRegisterLT
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2,Label *param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = GetRegister(this,param_1,0x200000000a,0);
  CompareAndBranchOrBacktrack(this,auVar1._0_8_,auVar1._8_8_ & 0xffffffff,param_2,0xb,param_3);
  return;
}

