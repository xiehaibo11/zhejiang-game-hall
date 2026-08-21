
/* v8::internal::compiler::RawMachineAssembler::PopAndReturn(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::PopAndReturn
          (RawMachineAssembler *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_30;
  Node *pNStack_28;
  
  local_30 = param_1;
  pNStack_28 = param_2;
  pOVar1 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),1);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,2,&local_30,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

