
/* v8::internal::compiler::NodeProperties::RemoveNonValueInputs(v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::RemoveNonValueInputs(Node *param_1)

{
  Node::TrimInputCount(param_1,*(int *)(*(long *)param_1 + 0x14));
  return;
}

