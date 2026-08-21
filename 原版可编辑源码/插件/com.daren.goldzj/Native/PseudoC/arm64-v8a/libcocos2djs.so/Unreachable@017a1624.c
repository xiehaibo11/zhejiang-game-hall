
/* v8::internal::compiler::RawMachineAssembler::Unreachable() */

void __thiscall v8::internal::compiler::RawMachineAssembler::Unreachable(RawMachineAssembler *this)

{
  Operator *pOVar1;
  Node *pNVar2;
  
  pOVar1 = (Operator *)CommonOperatorBuilder::Throw((CommonOperatorBuilder *)(this + 0x48));
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,0,(Node **)0x0,false);
  Schedule::AddThrow(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

