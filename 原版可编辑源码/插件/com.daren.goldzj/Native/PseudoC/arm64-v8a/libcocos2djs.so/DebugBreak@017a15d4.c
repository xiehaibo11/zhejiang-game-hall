
/* v8::internal::compiler::RawMachineAssembler::DebugBreak() */

void __thiscall v8::internal::compiler::RawMachineAssembler::DebugBreak(RawMachineAssembler *this)

{
  Operator *pOVar1;
  Node *pNVar2;
  
  pOVar1 = (Operator *)MachineOperatorBuilder::DebugBreak((MachineOperatorBuilder *)(this + 0x20));
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  return;
}

