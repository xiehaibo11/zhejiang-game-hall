
/* v8::internal::compiler::RawMachineAssembler::CallN(v8::internal::compiler::CallDescriptor*, int,
   v8::internal::compiler::Node* const*) */

Node * __thiscall
v8::internal::compiler::RawMachineAssembler::CallN
          (RawMachineAssembler *this,CallDescriptor *param_1,int param_2,Node **param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  
  pOVar1 = (Operator *)CommonOperatorBuilder::Call((CommonOperatorBuilder *)(this + 0x48),param_1);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,param_2,param_3,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  return pNVar2;
}

