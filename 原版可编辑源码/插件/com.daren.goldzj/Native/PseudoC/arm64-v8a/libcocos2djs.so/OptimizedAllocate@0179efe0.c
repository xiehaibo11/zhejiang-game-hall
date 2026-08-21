
/* v8::internal::compiler::RawMachineAssembler::OptimizedAllocate(v8::internal::compiler::Node*,
   v8::internal::AllocationType, v8::internal::AllowLargeObjects) */

Node * v8::internal::compiler::RawMachineAssembler::OptimizedAllocate(long param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *local_28;
  
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::AllocateRaw
                     ((SimplifiedOperatorBuilder *)(param_1 + 0x58),0xffffffff);
  local_28 = param_2;
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(param_1 + 8),pOVar1,1,&local_28,false);
  Schedule::AddNode(*(Schedule **)(param_1 + 0x10),*(BasicBlock **)(param_1 + 0x98),pNVar2);
  return pNVar2;
}

