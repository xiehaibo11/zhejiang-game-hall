
/* v8::internal::compiler::NodeProperties::IsSame(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

ulong v8::internal::compiler::NodeProperties::IsSame(Node *param_1,Node *param_2)

{
  ulong uVar1;
  Node *pNVar2;
  
  while( true ) {
    if (*(short *)(*(long *)param_1 + 0x10) != 0xde) {
      while (*(short *)(*(long *)param_2 + 0x10) == 0xde) {
        pNVar2 = param_2 + 0x20;
        if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
          pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
        }
        param_2 = *(Node **)pNVar2;
      }
      return (ulong)(param_1 == param_2);
    }
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) break;
    param_1 = *(Node **)(param_1 + 0x20);
  }
  uVar1 = FUN_01798c50(*(long *)(param_1 + 0x20) + 0x10);
  return uVar1;
}

