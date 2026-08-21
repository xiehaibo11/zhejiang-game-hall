
/* v8::internal::compiler::RawMachineAssembler::Return(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Return
          (RawMachineAssembler *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_58;
  Node *pNStack_50;
  Node *local_48;
  
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this + 0x48),0);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  local_58 = pNVar2;
  pNStack_50 = param_1;
  local_48 = param_2;
  pOVar1 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),2);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,3,&local_58,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

