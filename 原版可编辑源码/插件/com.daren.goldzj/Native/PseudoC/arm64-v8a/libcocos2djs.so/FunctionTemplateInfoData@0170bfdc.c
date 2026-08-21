
/* v8::internal::compiler::FunctionTemplateInfoData::FunctionTemplateInfoData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::FunctionTemplateInfo>)
    */

void __thiscall
v8::internal::compiler::FunctionTemplateInfoData::FunctionTemplateInfoData
          (FunctionTemplateInfoData *this,long *param_1,undefined8 param_3,long *param_4)

{
  FunctionTemplateInfoData FVar1;
  long lVar2;
  CallOptimization aCStack_50 [8];
  FunctionTemplateInfoData local_48;
  
  HeapObjectData::HeapObjectData();
  *(undefined2 *)(this + 0x18) = 0;
  this[0x1a] = (FunctionTemplateInfoData)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = param_1[2];
  *(undefined8 *)(this + 0x30) = 0;
  *(FunctionTemplateInfoData **)(this + 0x28) = this + 0x30;
  *(long *)(this + 0x38) = lVar2;
  *(undefined8 *)(this + 0x40) = 0;
  FVar1 = (FunctionTemplateInfoData)0x0;
  if ((*(uint *)(*param_4 + 0x1f) & 1) != 0) {
    FVar1 = (FunctionTemplateInfoData)(*(uint *)(*param_4 + 0x1f) == *(uint *)(*param_1 + 0xa0));
  }
  this[0x18] = FVar1;
  this[0x19] = (FunctionTemplateInfoData)(*(byte *)(*param_4 + 0x2b) >> 6 & 1);
  CallOptimization::CallOptimization(aCStack_50,*param_1,param_4);
  this[0x1a] = local_48;
  return;
}

