
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoadGlobal(v8::internal::compiler::NameRef,
   unsigned int, v8::internal::TypeofMode) */

void v8::internal::compiler::BytecodeGraphBuilder::BuildLoadGlobal
               (BytecodeGraphBuilder *param_1,undefined8 param_2,undefined8 param_3,
               undefined4 param_4,undefined4 param_5)

{
  Operator *pOVar1;
  JSOperatorBuilder *pJVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  FeedbackSource local_40 [16];
  undefined8 local_18;
  
  local_50 = param_2;
  uStack_48 = param_3;
  FeedbackSource::FeedbackSource
            (local_40,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_4);
  pJVar2 = *(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170);
  local_18 = NameRef::object((NameRef *)&local_50);
  pOVar1 = (Operator *)JSOperatorBuilder::LoadGlobal(pJVar2,&local_18,local_40,param_5);
  MakeNode(param_1,pOVar1,0,(Node **)0x0,false);
  return;
}

