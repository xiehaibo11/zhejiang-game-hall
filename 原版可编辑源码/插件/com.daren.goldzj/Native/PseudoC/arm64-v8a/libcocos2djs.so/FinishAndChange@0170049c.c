
/* v8::internal::compiler::AllocationBuilder::FinishAndChange(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::AllocationBuilder::FinishAndChange(AllocationBuilder *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Use *pUVar5;
  Node *pNVar6;
  
  pNVar1 = param_1 + 0x20;
  *(undefined8 *)(*(long *)(this + 8) + 8) = *(undefined8 *)(param_1 + 8);
  pNVar4 = *(Node **)(this + 8);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)pNVar6;
  if (pNVar2 != pNVar4) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x18);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar5);
    }
    *(Node **)pNVar6 = pNVar4;
    if (pNVar4 != (Node *)0x0) {
      Node::AppendUse(pNVar4,pUVar5);
    }
  }
  pNVar4 = *(Node **)(this + 0x10);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar6 + 8);
  if (pNVar2 != pNVar4) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x30);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar5);
    }
    *(Node **)(pNVar6 + 8) = pNVar4;
    if (pNVar4 != (Node *)0x0) {
      Node::AppendUse(pNVar4,pUVar5);
    }
  }
  Node::TrimInputCount(param_1,2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(*(long *)this + 8));
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

