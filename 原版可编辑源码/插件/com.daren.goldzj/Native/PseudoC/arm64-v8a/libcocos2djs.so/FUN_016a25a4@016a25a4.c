
void FUN_016a25a4(Node *param_1)

{
  Use *pUVar1;
  long lVar2;
  ulong uVar3;
  Node *pNVar4;
  Node *this;
  Use *pUVar5;
  Use *pUVar6;
  
  if (*(Use **)(param_1 + 0x18) != (Use *)0x0) {
    pUVar5 = *(Use **)(param_1 + 0x18);
    do {
      pUVar6 = *(Use **)pUVar5;
      lVar2 = 0x10;
      if ((*(uint *)(pUVar5 + 0x10) & 1) != 0) {
        lVar2 = 0x20;
      }
      pUVar1 = pUVar5 + lVar2 + (ulong)(*(uint *)(pUVar5 + 0x10) >> 1) * 0x20 + 0x18;
      uVar3 = v8::internal::compiler::NodeProperties::IsEffectEdge(pUVar5,pUVar1);
      if ((uVar3 & 1) == 0) {
        pNVar4 = param_1 + 0x20;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar4 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
        }
        pNVar4 = *(Node **)pNVar4;
        this = *(Node **)pUVar1;
        if (this != pNVar4) goto joined_r0x016a2668;
      }
      else {
        pNVar4 = (Node *)v8::internal::compiler::NodeProperties::GetEffectInput(param_1,0);
        this = *(Node **)pUVar1;
        if (this != pNVar4) {
joined_r0x016a2668:
          if (this != (Node *)0x0) {
            v8::internal::compiler::Node::RemoveUse(this,pUVar5);
          }
          *(Node **)pUVar1 = pNVar4;
          if (pNVar4 != (Node *)0x0) {
            v8::internal::compiler::Node::AppendUse(pNVar4,pUVar5);
          }
        }
      }
      pUVar5 = pUVar6;
    } while (pUVar6 != (Use *)0x0);
  }
  v8::internal::compiler::Node::Kill(param_1);
  return;
}

