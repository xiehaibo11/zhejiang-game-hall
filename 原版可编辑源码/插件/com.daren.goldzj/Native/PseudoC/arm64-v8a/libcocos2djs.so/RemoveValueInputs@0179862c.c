
/* v8::internal::compiler::NodeProperties::RemoveValueInputs(v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::RemoveValueInputs(Node *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)param_1 + 0x14);
  while (0 < iVar1) {
    iVar1 = iVar1 + -1;
    Node::RemoveInput(param_1,iVar1);
  }
  return;
}

