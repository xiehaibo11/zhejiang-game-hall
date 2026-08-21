
/* v8::internal::MacroAssembler::DecrementCounter(v8::internal::StatsCounter*, int,
   v8::internal::Register, v8::internal::Register) */

void v8::internal::MacroAssembler::DecrementCounter
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  IncrementCounter(param_1,param_2,-param_3,param_4,param_5,param_6,param_7);
  return;
}

