
/* v8::internal::compiler::JSTypedLowering::ReduceJSLoadContext(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSLoadContext(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  long lVar2;
  long lVar3;
  Node *this_00;
  Operator *pOVar4;
  Node *this_01;
  Node *pNVar5;
  ulong extraout_x1;
  long *plVar6;
  Node *pNVar7;
  Node *pNVar8;
  Graph *this_02;
  Use *pUVar9;
  SimplifiedOperatorBuilder *pSVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  Node *local_b8;
  Node *pNStack_b0;
  Node *local_a8;
  FieldAccess aFStack_a0 [56];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = ContextAccessOf(*(Operator **)param_1);
  this_00 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  auVar12 = NodeProperties::GetContextInput(param_1);
  plVar6 = *(long **)(this + 0x10);
  this_02 = (Graph *)*plVar6;
  pNVar7 = *(Node **)(this_02 + 8);
  pNVar8 = auVar12._0_8_;
  if (*(short *)(lVar3 + 2) != 0) {
    uVar11 = 1;
    while( true ) {
      pSVar10 = (SimplifiedOperatorBuilder *)plVar6[0x2f];
      AccessBuilder::ForContextSlotKnownPointer((AccessBuilder *)0x1,auVar12._8_8_);
      pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,aFStack_a0);
      local_b8 = auVar12._0_8_;
      pNStack_b0 = this_00;
      local_a8 = pNVar7;
      auVar12 = Graph::NewNode(this_02,pOVar4,3,&local_b8,false);
      this_00 = auVar12._0_8_;
      pNVar8 = this_00;
      if (*(ushort *)(lVar3 + 2) <= uVar11) break;
      plVar6 = *(long **)(this + 0x10);
      uVar11 = uVar11 + 1;
      this_02 = (Graph *)*plVar6;
    }
  }
  pNVar1 = param_1 + 0x20;
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar5;
  if (this_01 != pNVar8) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar9 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar9 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar9);
    }
    *(Node **)pNVar5 = pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,pUVar9);
    }
  }
  pNVar8 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar5 = *(Node **)(pNVar8 + 8);
  if (pNVar5 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar9 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar9 = (Use *)(param_1 + -0x30);
    }
    if (pNVar5 != (Node *)0x0) {
      Node::RemoveUse(pNVar5,pUVar9);
    }
    *(Node **)(pNVar8 + 8) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar9);
    }
  }
  Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),pNVar7);
  pSVar10 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
  AccessBuilder::ForContextSlot((AccessBuilder *)(ulong)*(uint *)(lVar3 + 4),extraout_x1);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,aFStack_a0);
  NodeProperties::ChangeOp(param_1,pOVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

