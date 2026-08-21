
/* v8::internal::compiler::JSTypedLowering::ReduceJSHasContextExtension(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSHasContextExtension
          (JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  Node *pNVar3;
  Operator *pOVar4;
  AccessBuilder *this_00;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Graph *pGVar8;
  SimplifiedOperatorBuilder *pSVar9;
  long lVar10;
  undefined1 auVar11 [16];
  Node *local_b8;
  Node *pNStack_b0;
  undefined8 local_a8;
  Node *local_a0;
  undefined8 uStack_98;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(*(long *)param_1 + 0x30);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  auVar11 = NodeProperties::GetContextInput(param_1);
  auVar2._8_8_ = auVar11._8_8_;
  auVar2._0_8_ = pNVar3;
  pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar9 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  uVar7 = *(undefined8 *)(pGVar8 + 8);
  pNVar5 = auVar11._0_8_;
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    AccessBuilder::ForContextSlotKnownPointer((AccessBuilder *)0x1,auVar2._8_8_);
    pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar9,(FieldAccess *)&local_a0);
    local_b8 = pNVar5;
    pNStack_b0 = (Node *)auVar2._0_8_;
    local_a8 = uVar7;
    auVar11 = Graph::NewNode(pGVar8,pOVar4,3,&local_b8,false);
    pNVar3 = auVar11._0_8_;
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar9 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    pNVar5 = pNVar3;
    auVar2 = auVar11;
  }
  AccessBuilder::ForContextSlot((AccessBuilder *)0x0,auVar11._8_8_);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar9,(FieldAccess *)&local_a0);
  local_b8 = auVar11._0_8_;
  pNStack_b0 = pNVar3;
  local_a8 = uVar7;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar8,pOVar4,3,&local_b8,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar9 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForScopeInfoFlags(this_00);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar9,(FieldAccess *)&local_a0);
  local_b8 = (Node *)this_00;
  pNStack_b0 = (Node *)this_00;
  local_a8 = uVar7;
  pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar4,3,&local_b8,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::NumberBitwiseAnd
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  uStack_98 = JSGraph::Constant(*(JSGraph **)(this + 0x10),67108864.0);
  local_a0 = pNVar3;
  pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar4,2,&local_a0,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  uStack_98 = JSGraph::Constant(*(JSGraph **)(this + 0x10),0.0);
  local_a0 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar4,2,&local_a0,false);
  pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::BooleanNot
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_a0 = pNVar5;
  uVar6 = Graph::NewNode(pGVar8,pOVar4,1,&local_a0,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,pNVar3,uVar7);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

