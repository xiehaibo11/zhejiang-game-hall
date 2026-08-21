
/* v8::internal::compiler::JSBinopReduction::ConvertInputsToNumber() */

void __thiscall
v8::internal::compiler::JSBinopReduction::ConvertInputsToNumber(JSBinopReduction *this)

{
  Node *pNVar1;
  Node *pNVar2;
  ulong uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Graph *pGVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *local_38;
  
  pNVar7 = *(Node **)(this + 8);
  pNVar1 = (Node *)NodeProperties::GetValueInput(pNVar7,0);
  pNVar2 = (Node *)JSTypedLowering::ReduceJSToNumberInput(*(JSTypedLowering **)this,pNVar1);
  if (((pNVar2 == (Node *)0x0) &&
      (local_38 = *(Node **)(pNVar1 + 8), pNVar2 = pNVar1, local_38 != (Node *)0x1c5f)) &&
     (uVar3 = Type::SlowIs((Type *)&local_38,0x1c5f), (uVar3 & 1) == 0)) {
    pGVar6 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
    local_38 = pNVar1;
    pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar5,1,&local_38,false);
  }
  pNVar1 = pNVar7 + 0x20;
  pNVar8 = pNVar1;
  if ((*(uint *)(pNVar7 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)pNVar8;
  if (pNVar4 != pNVar2) {
    if ((*(uint *)(pNVar7 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = *(Node **)pNVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(pNVar7 + -0x18));
    }
    *(Node **)pNVar8 = pNVar2;
    if (pNVar2 != (Node *)0x0) {
      Node::AppendUse(pNVar2,(Use *)(pNVar7 + -0x18));
    }
  }
  pNVar7 = *(Node **)(this + 8);
  pNVar1 = (Node *)NodeProperties::GetValueInput(pNVar7,1);
  pNVar2 = (Node *)JSTypedLowering::ReduceJSToNumberInput(*(JSTypedLowering **)this,pNVar1);
  if (((pNVar2 == (Node *)0x0) &&
      (local_38 = *(Node **)(pNVar1 + 8), pNVar2 = pNVar1, local_38 != (Node *)0x1c5f)) &&
     (uVar3 = Type::SlowIs((Type *)&local_38,0x1c5f), (uVar3 & 1) == 0)) {
    pGVar6 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
    local_38 = pNVar1;
    pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar5,1,&local_38,false);
  }
  pNVar1 = pNVar7 + 0x20;
  pNVar8 = pNVar1;
  if ((*(uint *)(pNVar7 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar8 + 8);
  if (pNVar4 != pNVar2) {
    if ((*(uint *)(pNVar7 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = *(Node **)pNVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(pNVar7 + -0x30));
    }
    *(Node **)(pNVar8 + 8) = pNVar2;
    if (pNVar2 != (Node *)0x0) {
      Node::AppendUse(pNVar2,(Use *)(pNVar7 + -0x30));
    }
  }
  return;
}

