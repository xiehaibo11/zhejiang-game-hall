
/* v8::internal::compiler::RawMachineAssembler::RelocatableIntPtrConstant(long,
   v8::internal::RelocInfo::Mode) */

Node * v8::internal::compiler::RawMachineAssembler::RelocatableIntPtrConstant(long param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  
  pOVar1 = (Operator *)
           CommonOperatorBuilder::RelocatableInt64Constant
                     ((CommonOperatorBuilder *)(param_1 + 0x48));
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(param_1 + 8),pOVar1,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(param_1 + 0x10),*(BasicBlock **)(param_1 + 0x98),pNVar2);
  return pNVar2;
}

