
/* v8::internal::MacroAssembler::JumpIfObjectType(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::InstanceType, v8::internal::Label*,
   v8::internal::Condition) */

void v8::internal::MacroAssembler::JumpIfObjectType
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10)

{
  CompareObjectType(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  TurboAssembler::B(param_1,param_9,param_10);
  return;
}

