
/* v8::internal::compiler::RawMachineAssembler::AbortCSAAssert(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::AbortCSAAssert(RawMachineAssembler *this,Node *param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_28;
  
  pOVar1 = (Operator *)
           MachineOperatorBuilder::AbortCSAAssert((MachineOperatorBuilder *)(this + 0x20));
  local_28 = param_1;
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,1,&local_28,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  return;
}

