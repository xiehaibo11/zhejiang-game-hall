
/* v8::internal::compiler::NodeProperties::GetOuterContext(v8::internal::compiler::Node*, unsigned
   long*) */

void v8::internal::compiler::NodeProperties::GetOuterContext(Node *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  Node *pNVar3;
  long *plVar4;
  
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  plVar1 = *(long **)(pNVar3 + (long)*(int *)(*(long *)param_1 + 0x14) * 8);
  if (*param_2 != 0) {
    uVar2 = *param_2 - 1;
    do {
      if ((*(ushort *)(*plVar1 + 0x10) & 0xfffc) != 0x2f8) {
        return;
      }
      plVar4 = plVar1 + 4;
      if ((~*(uint *)((long)plVar1 + 0x14) & 0xf000000) == 0) {
        plVar4 = (long *)(*plVar4 + 0x10);
      }
      plVar1 = (long *)plVar4[*(int *)(*plVar1 + 0x14)];
      *param_2 = uVar2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
  return;
}

