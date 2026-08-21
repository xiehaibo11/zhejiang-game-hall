
/* v8::internal::TurboAssembler::AssertPositiveOrZero(v8::internal::Register) */

void v8::internal::TurboAssembler::AssertPositiveOrZero
               (TurboAssembler *param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  ulong local_30;
  undefined4 local_28;
  undefined8 local_8;
  
  if (param_1[0xc0] != (TurboAssembler)0x0) {
    uVar1 = 0x3f;
    if (param_2 >> 0x20 != 0x40) {
      uVar1 = 0x1f;
    }
    local_8 = 0;
    local_30 = param_2;
    local_28 = param_3;
    Tbz(param_1,(Register *)&local_30,uVar1,(Label *)&local_8);
    Abort(param_1,0x2a);
    Assembler::bind((Label *)param_1);
  }
  return;
}

