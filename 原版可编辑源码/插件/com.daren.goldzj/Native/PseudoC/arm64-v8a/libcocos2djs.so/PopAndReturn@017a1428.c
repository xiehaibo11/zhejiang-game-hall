
/* v8::internal::compiler::RawMachineAssembler::PopAndReturn(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::PopAndReturn
          (RawMachineAssembler *this,Node *param_1,Node *param_2,Node *param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_38;
  Node *pNStack_30;
  Node *local_28;
  
  local_38 = param_1;
  pNStack_30 = param_2;
  local_28 = param_3;
  pOVar1 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),2);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,3,&local_38,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

