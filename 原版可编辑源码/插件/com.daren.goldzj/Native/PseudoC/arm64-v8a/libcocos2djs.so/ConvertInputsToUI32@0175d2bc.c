
/* v8::internal::compiler::JSBinopReduction::ConvertInputsToUI32(v8::internal::compiler::Signedness,
   v8::internal::compiler::Signedness) */

void __thiscall
v8::internal::compiler::JSBinopReduction::ConvertInputsToUI32
          (JSBinopReduction *this,undefined4 param_2,undefined4 param_3)

{
  Node *pNVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  
  pNVar5 = *(Node **)(this + 8);
  uVar2 = NodeProperties::GetValueInput(pNVar5,0);
  pNVar3 = (Node *)ConvertToUI32(this,uVar2,param_2);
  pNVar1 = pNVar5 + 0x20;
  pNVar6 = pNVar1;
  if ((*(uint *)(pNVar5 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)pNVar6;
  if (pNVar4 != pNVar3) {
    if ((*(uint *)(pNVar5 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = *(Node **)pNVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(pNVar5 + -0x18));
    }
    *(Node **)pNVar6 = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,(Use *)(pNVar5 + -0x18));
    }
  }
  pNVar5 = *(Node **)(this + 8);
  uVar2 = NodeProperties::GetValueInput(pNVar5,1);
  pNVar3 = (Node *)ConvertToUI32(this,uVar2,param_3);
  pNVar1 = pNVar5 + 0x20;
  pNVar6 = pNVar1;
  if ((*(uint *)(pNVar5 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar6 + 8);
  if (pNVar4 != pNVar3) {
    if ((*(uint *)(pNVar5 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = *(Node **)pNVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(pNVar5 + -0x30));
    }
    *(Node **)(pNVar6 + 8) = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,(Use *)(pNVar5 + -0x30));
      return;
    }
  }
  return;
}

