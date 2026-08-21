
/* v8::internal::RegExpMacroAssemblerARM64::PopRegister(int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::PopRegister(RegExpMacroAssemblerARM64 *this,int param_1)

{
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0x200000000a;
  local_28 = 0;
  local_60 = 0x4000000017;
  local_48 = 4;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_4c = 2;
  local_40 = 0xffffffff00000002;
  uStack_38 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_30,&local_60,0x80400000);
  StoreRegister(this,param_1,0x200000000a,0);
  return;
}

