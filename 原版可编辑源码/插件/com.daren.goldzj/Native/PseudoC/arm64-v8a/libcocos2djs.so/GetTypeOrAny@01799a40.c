
/* v8::internal::compiler::NodeProperties::GetTypeOrAny(v8::internal::compiler::Node*) */

long v8::internal::compiler::NodeProperties::GetTypeOrAny(Node *param_1)

{
  long lVar1;
  
  lVar1 = 0xffffffff;
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  return lVar1;
}

