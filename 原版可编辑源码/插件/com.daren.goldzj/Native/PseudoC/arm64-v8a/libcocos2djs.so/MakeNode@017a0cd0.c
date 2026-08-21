
/* v8::internal::compiler::RawMachineAssembler::MakeNode(v8::internal::compiler::Operator const*,
   int, v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::MakeNode
          (RawMachineAssembler *this,Operator *param_1,int param_2,Node **param_3)

{
  Graph::NewNodeUnchecked(*(Graph **)(this + 8),param_1,param_2,param_3,false);
  return;
}

