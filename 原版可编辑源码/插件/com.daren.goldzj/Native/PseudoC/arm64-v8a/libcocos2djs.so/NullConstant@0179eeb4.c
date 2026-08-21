
/* v8::internal::compiler::RawMachineAssembler::NullConstant() */

Node * __thiscall
v8::internal::compiler::RawMachineAssembler::NullConstant(RawMachineAssembler *this)

{
  Operator *pOVar1;
  Node *pNVar2;
  long local_8;
  
  local_8 = *(long *)this + 0xb0;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(this + 0x48),(Handle *)&local_8);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  return pNVar2;
}

