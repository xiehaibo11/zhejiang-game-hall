
/* v8::internal::compiler::RawMachineAssembler::TailCallN(v8::internal::compiler::CallDescriptor*,
   int, v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::TailCallN
          (RawMachineAssembler *this,CallDescriptor *param_1,int param_2,Node **param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TailCall((CommonOperatorBuilder *)(this + 0x48),param_1);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,param_2,param_3,false);
  Schedule::AddTailCall(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

