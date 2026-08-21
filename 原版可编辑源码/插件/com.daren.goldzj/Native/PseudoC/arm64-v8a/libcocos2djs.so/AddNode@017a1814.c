
/* v8::internal::compiler::RawMachineAssembler::AddNode(v8::internal::compiler::Operator const*,
   int, v8::internal::compiler::Node* const*) */

Node * __thiscall
v8::internal::compiler::RawMachineAssembler::AddNode
          (RawMachineAssembler *this,Operator *param_1,int param_2,Node **param_3)

{
  Node *pNVar1;
  
  pNVar1 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),param_1,param_2,param_3,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar1);
  return pNVar1;
}

