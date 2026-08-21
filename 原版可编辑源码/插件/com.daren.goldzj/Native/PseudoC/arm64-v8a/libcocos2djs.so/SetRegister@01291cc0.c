
/* v8::internal::RegExpMacroAssemblerARM64::SetRegister(int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::SetRegister
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2)

{
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0x200000001f;
  local_28 = 0;
  if (param_2 != 0) {
    local_30 = 0x200000000a;
    local_28 = 0;
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&local_30,(long)param_2);
  }
  StoreRegister(this,param_1,local_30,local_28);
  return;
}

