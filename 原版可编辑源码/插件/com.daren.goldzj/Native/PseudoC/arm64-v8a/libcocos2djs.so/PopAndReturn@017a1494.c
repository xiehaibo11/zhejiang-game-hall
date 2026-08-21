
/* v8::internal::compiler::RawMachineAssembler::PopAndReturn(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::PopAndReturn
          (RawMachineAssembler *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_40;
  Node *pNStack_38;
  Node *local_30;
  Node *pNStack_28;
  
  local_40 = param_1;
  pNStack_38 = param_2;
  local_30 = param_3;
  pNStack_28 = param_4;
  pOVar1 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),3);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,4,&local_40,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

