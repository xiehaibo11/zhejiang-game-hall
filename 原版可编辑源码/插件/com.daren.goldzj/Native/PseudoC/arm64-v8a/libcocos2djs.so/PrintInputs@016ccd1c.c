
/* v8::internal::compiler::GraphC1Visualizer::PrintInputs(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintInputs(GraphC1Visualizer *this,Node *param_1)

{
  uint uVar1;
  Node *local_28;
  
  local_28 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    local_28 = (Node *)(*(long *)local_28 + 0x10);
  }
  PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
            (this,(const_iterator *)&local_28,*(int *)(*(long *)param_1 + 0x14)," ");
  uVar1 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
            (this,(const_iterator *)&local_28,uVar1 & 1," Ctx:");
  uVar1 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
            (this,(const_iterator *)&local_28,uVar1 & 1," FS:");
  PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
            (this,(const_iterator *)&local_28,*(int *)(*(long *)param_1 + 0x18)," Eff:");
  PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
            (this,(const_iterator *)&local_28,*(int *)(*(long *)param_1 + 0x1c)," Ctrl:");
  return;
}

