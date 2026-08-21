
/* v8::internal::TurboAssembler::SmiUntagField(v8::internal::Register, v8::internal::MemOperand
   const&) */

void v8::internal::TurboAssembler::SmiUntagField
               (Assembler *param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_60;
  undefined4 local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_40;
  undefined4 local_38;
  
  uVar1 = 0x200000003f;
  if ((int)param_2 != 0x3f) {
    uVar1 = param_2 & 0xffffffff | 0x2000000000;
  }
  local_38 = 0;
  local_40 = uVar1;
  LoadStoreMacro((TurboAssembler *)param_1,&local_40,param_4,0x80400000);
  local_48 = 0;
  local_58 = 0;
  local_60 = uVar1;
  local_50 = uVar1;
  local_40 = param_2;
  local_38 = param_3;
  Assembler::sbfm(param_1,(Register *)&local_50,(Register *)&local_60,1,0x1f);
  Assembler::sbfm(param_1,(Register *)&local_40,(Register *)&local_40,0,0x1f);
  return;
}

