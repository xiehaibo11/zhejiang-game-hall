
/* v8::internal::compiler::JSTypedLowering::ReduceJSStoreContext(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSStoreContext(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  Node *this_00;
  Node *pNVar4;
  Operator *pOVar5;
  Node *this_01;
  Node *pNVar6;
  Node *pNVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  Graph *this_02;
  Node *pNVar8;
  Use *pUVar9;
  SimplifiedOperatorBuilder *pSVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  Node *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  FieldAccess aFStack_a0 [56];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = ContextAccessOf(*(Operator **)param_1);
  this_00 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetContextInput(param_1);
  uVar12 = *(undefined8 *)(**(long **)(this + 0x10) + 8);
  auVar13 = NodeProperties::GetValueInput(param_1,0);
  auVar2._8_8_ = auVar13._8_8_;
  auVar2._0_8_ = pNVar4;
  auVar14._8_8_ = auVar13._8_8_;
  auVar14._0_8_ = this_00;
  pNVar8 = auVar13._0_8_;
  if (*(short *)(lVar3 + 2) != 0) {
    uVar11 = 0;
    this_00 = pNVar4;
    do {
      this_02 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForContextSlotKnownPointer((AccessBuilder *)0x1,auVar14._8_8_);
      pOVar5 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,aFStack_a0);
      local_b8 = this_00;
      uStack_b0 = auVar14._0_8_;
      local_a8 = uVar12;
      auVar14 = Graph::NewNode(this_02,pOVar5,3,&local_b8,false);
      this_00 = auVar14._0_8_;
      uVar11 = uVar11 + 1;
      auVar2 = auVar14;
    } while (uVar11 < *(ushort *)(lVar3 + 2));
  }
  uVar11 = auVar2._8_8_;
  pNVar6 = auVar2._0_8_;
  pNVar4 = param_1 + 0x20;
  pNVar7 = pNVar4;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar7 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  this_01 = *(Node **)pNVar7;
  if (this_01 != pNVar6) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar9 = (Use *)(*(long *)pNVar4 + -0x18);
    }
    else {
      pUVar9 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar9);
      uVar11 = extraout_x1;
    }
    *(Node **)pNVar7 = pNVar6;
    if (pNVar6 != (Node *)0x0) {
      Node::AppendUse(pNVar6,pUVar9);
      uVar11 = extraout_x1_00;
    }
  }
  pNVar7 = pNVar4;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar7 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar6 = *(Node **)(pNVar7 + 8);
  if (pNVar6 != pNVar8) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar9 = (Use *)(*(long *)pNVar4 + -0x30);
    }
    else {
      pUVar9 = (Use *)(param_1 + -0x30);
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,pUVar9);
      uVar11 = extraout_x1_01;
    }
    *(Node **)(pNVar7 + 8) = pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,pUVar9);
      uVar11 = extraout_x1_02;
    }
  }
  pNVar8 = pNVar4;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar7 = *(Node **)(pNVar8 + 0x10);
  if (pNVar7 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar9 = (Use *)(*(long *)pNVar4 + -0x48);
    }
    else {
      pUVar9 = (Use *)(param_1 + -0x48);
    }
    if (pNVar7 != (Node *)0x0) {
      Node::RemoveUse(pNVar7,pUVar9);
      uVar11 = extraout_x1_03;
    }
    *(Node **)(pNVar8 + 0x10) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar9);
      uVar11 = extraout_x1_04;
    }
  }
  pSVar10 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
  AccessBuilder::ForContextSlot((AccessBuilder *)(ulong)*(uint *)(lVar3 + 4),uVar11);
  pOVar5 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar10,aFStack_a0);
  NodeProperties::ChangeOp(param_1,pOVar5);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

