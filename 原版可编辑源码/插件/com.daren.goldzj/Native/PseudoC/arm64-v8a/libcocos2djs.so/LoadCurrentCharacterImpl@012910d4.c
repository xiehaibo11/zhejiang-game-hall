
/* v8::internal::RegExpMacroAssemblerARM64::LoadCurrentCharacterImpl(int, v8::internal::Label*,
   bool, int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::LoadCurrentCharacterImpl
          (RegExpMacroAssemblerARM64 *this,int param_1,Label *param_2,bool param_3,int param_4,
          int param_5)

{
  int iVar1;
  long lVar2;
  
  if (param_3) {
    if (param_1 < 0) {
      lVar2 = *(long *)this;
      iVar1 = param_1;
    }
    else {
      lVar2 = *(long *)this;
      iVar1 = param_1 + param_5 + -1;
    }
    (**(code **)(lVar2 + 0xc0))(this,iVar1);
  }
  LoadCurrentCharacterUnchecked(this,param_1,param_4);
  return;
}

