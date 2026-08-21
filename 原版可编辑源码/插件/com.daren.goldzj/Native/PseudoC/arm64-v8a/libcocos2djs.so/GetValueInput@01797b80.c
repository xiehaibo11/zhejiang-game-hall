
/* v8::internal::compiler::NodeProperties::GetValueInput(v8::internal::compiler::Node*, int) */

undefined8 v8::internal::compiler::NodeProperties::GetValueInput(Node *param_1,int param_2)

{
  Node *pNVar1;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  return *(undefined8 *)(pNVar1 + (long)param_2 * 8);
}

