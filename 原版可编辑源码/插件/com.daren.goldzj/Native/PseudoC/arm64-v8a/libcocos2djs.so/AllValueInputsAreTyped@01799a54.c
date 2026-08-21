
/* v8::internal::compiler::NodeProperties::AllValueInputsAreTyped(v8::internal::compiler::Node*) */

undefined8 v8::internal::compiler::NodeProperties::AllValueInputsAreTyped(Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  
  if (0 < (int)*(uint *)(*(long *)param_1 + 0x14)) {
    lVar1 = 0;
    do {
      pNVar2 = param_1 + 0x20;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar2 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      if (*(long *)(*(long *)(pNVar2 + lVar1) + 8) == 0) {
        return 0;
      }
      lVar1 = lVar1 + 8;
    } while ((ulong)*(uint *)(*(long *)param_1 + 0x14) * 8 - lVar1 != 0);
  }
  return 1;
}

