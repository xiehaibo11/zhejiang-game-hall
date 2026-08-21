
/* v8::internal::compiler::StateValuesCache::IsKeysEqualToNode(v8::internal::compiler::StateValuesCache::StateValuesKey*,
   v8::internal::compiler::Node*) */

undefined8
v8::internal::compiler::StateValuesCache::IsKeysEqualToNode(StateValuesKey *param_1,Node *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  Node *pNVar4;
  undefined4 local_28 [2];
  
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    uVar1 = *(uint *)(*(long *)(param_2 + 0x20) + 8);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x14) >> 0x18 & 0xf;
  }
  if (*(long *)(param_1 + 8) == (long)(int)uVar1) {
    local_28[0] = SparseInputMaskOf(*(Operator **)param_2);
    uVar2 = compiler::operator!=((SparseInputMask *)local_28,(SparseInputMask *)(param_1 + 0x10));
    if ((uVar2 & 1) == 0) {
      if (*(ulong *)(param_1 + 8) != 0) {
        lVar3 = 0;
        uVar2 = 0;
        do {
          pNVar4 = param_2 + 0x20;
          if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar4 = (Node *)(*(long *)(param_2 + 0x20) + 0x10);
          }
          if (*(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8) !=
              *(long *)(pNVar4 + (lVar3 >> 0x1d))) {
            return 0;
          }
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0x100000000;
        } while (uVar2 < *(ulong *)(param_1 + 8));
      }
      return 1;
    }
  }
  return 0;
}

