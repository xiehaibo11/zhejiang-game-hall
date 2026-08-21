
/* v8::internal::TurboAssembler::CallBuiltinByIndex(v8::internal::Register) */

void v8::internal::TurboAssembler::CallBuiltinByIndex
               (Assembler *param_1,undefined8 param_2,undefined4 param_3)

{
  BlockScope aBStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  
  LoadEntryFromBuiltinIndex(param_1,param_2,param_3);
  local_40 = param_2;
  local_38 = param_3;
  ConstantPool::BlockScope::BlockScope(aBStack_48,param_1,0);
  Assembler::CheckVeneerPool(param_1,false,true,0);
  Assembler::StartBlockVeneerPool(param_1);
  Assembler::blr(param_1,(Register *)&local_40);
  Assembler::EndBlockVeneerPool(param_1);
  ConstantPool::BlockScope::~BlockScope(aBStack_48);
  return;
}

