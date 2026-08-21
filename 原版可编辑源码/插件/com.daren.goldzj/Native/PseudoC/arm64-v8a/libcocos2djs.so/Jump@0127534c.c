
/* v8::internal::TurboAssembler::Jump(v8::internal::Register, v8::internal::Condition) */

void v8::internal::TurboAssembler::Jump
               (Assembler *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_8;
  
  if (param_4 != 0xf) {
    local_8 = 0;
    local_30 = param_2;
    local_28 = param_3;
    if (param_4 != 0xe) {
      B((TurboAssembler *)param_1,&local_8,param_4 ^ 1);
    }
    Assembler::br(param_1,(Register *)&local_30);
    Assembler::bind((Label *)param_1);
  }
  return;
}

