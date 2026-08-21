
/* v8::internal::TurboAssembler::Call(v8::internal::Register) */

void v8::internal::TurboAssembler::Call(Assembler *param_1,undefined8 param_2,undefined4 param_3)

{
  BlockScope aBStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = param_2;
  local_28 = param_3;
  ConstantPool::BlockScope::BlockScope(aBStack_38,param_1,0);
  Assembler::CheckVeneerPool(param_1,false,true,0);
  Assembler::StartBlockVeneerPool(param_1);
  Assembler::blr(param_1,(Register *)&local_30);
  Assembler::EndBlockVeneerPool(param_1);
  ConstantPool::BlockScope::~BlockScope(aBStack_38);
  return;
}

