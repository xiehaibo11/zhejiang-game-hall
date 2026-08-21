
void FUN_012e8f08(long param_1,Node *param_2,Node *param_3)

{
  Use *pUVar1;
  long lVar2;
  Use *pUVar3;
  ulong uVar4;
  Node *pNVar5;
  Use *pUVar6;
  
  pUVar6 = *(Use **)(param_1 + 0x18);
joined_r0x012e8f24:
  do {
    pUVar3 = pUVar6;
    if (pUVar3 == (Use *)0x0) {
      return;
    }
    pUVar6 = *(Use **)pUVar3;
    lVar2 = 0x10;
    if ((*(uint *)(pUVar3 + 0x10) & 1) != 0) {
      lVar2 = 0x20;
    }
    pUVar1 = pUVar3 + lVar2 + (ulong)(*(uint *)(pUVar3 + 0x10) >> 1) * 0x20 + 0x18;
    uVar4 = v8::internal::compiler::NodeProperties::IsControlEdge(pUVar3,pUVar1);
    if ((uVar4 & 1) == 0) goto LAB_012e8f9c;
    pNVar5 = *(Node **)pUVar1;
  } while (pNVar5 == param_3);
  if (pNVar5 != (Node *)0x0) {
    v8::internal::compiler::Node::RemoveUse(pNVar5,pUVar3);
  }
  *(Node **)pUVar1 = param_3;
  pNVar5 = param_3;
  goto joined_r0x012e8fc8;
LAB_012e8f9c:
  uVar4 = v8::internal::compiler::NodeProperties::IsEffectEdge(pUVar3,pUVar1);
  if (((uVar4 & 1) != 0) && (pNVar5 = *(Node **)pUVar1, pNVar5 != param_2)) {
    if (pNVar5 != (Node *)0x0) {
      v8::internal::compiler::Node::RemoveUse(pNVar5,pUVar3);
    }
    *(Node **)pUVar1 = param_2;
    pNVar5 = param_2;
joined_r0x012e8fc8:
    if (pNVar5 != (Node *)0x0) {
      v8::internal::compiler::Node::AppendUse(pNVar5,pUVar3);
    }
  }
  goto joined_r0x012e8f24;
}

