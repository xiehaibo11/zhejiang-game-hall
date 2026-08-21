
/* v8::internal::compiler::RawMachineAssembler::PopAndReturn(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::PopAndReturn
          (RawMachineAssembler *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,
          Node *param_5)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_48;
  Node *pNStack_40;
  Node *local_38;
  Node *pNStack_30;
  Node *local_28;
  
  local_48 = param_1;
  pNStack_40 = param_2;
  local_38 = param_3;
  pNStack_30 = param_4;
  local_28 = param_5;
  pOVar1 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),4);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,5,&local_48,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

