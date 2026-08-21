
/* v8::internal::RegExpMacroAssemblerARM64::PopCurrentPosition() */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::PopCurrentPosition(RegExpMacroAssemblerARM64 *this)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0x2000000015;
  local_18 = 0;
  local_50 = 0x4000000017;
  local_38 = 4;
  local_48 = 0;
  local_44 = 0xffffffff;
  local_3c = 2;
  local_30 = 0xffffffff00000002;
  uStack_28 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_20,&local_50,0x80400000);
  return;
}

