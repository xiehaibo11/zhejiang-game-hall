
/* v8::internal::TurboAssembler::JumpCodeObject(v8::internal::Register) */

void v8::internal::TurboAssembler::JumpCodeObject
               (Assembler *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_40;
  undefined4 local_38;
  
  (**(code **)(*(long *)param_1 + 0x38))();
  local_40 = param_2;
  local_38 = param_3;
  Assembler::br(param_1,(Register *)&local_40);
  Assembler::bind((Label *)param_1);
  return;
}

