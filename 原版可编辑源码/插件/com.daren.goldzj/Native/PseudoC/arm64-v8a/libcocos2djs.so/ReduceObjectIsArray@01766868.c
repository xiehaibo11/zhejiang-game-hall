
/* v8::internal::compiler::JSTypedLowering::ReduceObjectIsArray(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceObjectIsArray(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  AccessBuilder *this_00;
  AccessBuilder *this_01;
  long *plVar10;
  long lVar11;
  Graph *pGVar12;
  SimplifiedOperatorBuilder *pSVar13;
  Node *local_138;
  undefined8 local_130;
  undefined8 local_128;
  Node *local_120;
  Node *local_118;
  Node *local_110;
  Node *local_108;
  Node *local_100;
  undefined8 local_f8;
  Node *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  Node *local_d8;
  undefined8 local_d0;
  long local_c8;
  Node *local_c0;
  Node *pNStack_b8;
  AccessBuilder *local_b0;
  Node *local_a8;
  AccessBuilder *pAStack_a0;
  undefined8 local_98;
  Node *pNStack_90;
  undefined8 local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar11 = *(long *)(pNVar2 + 8);
  local_c8 = lVar11;
  uVar3 = NodeProperties::GetContextInput(param_1);
  uVar4 = NodeProperties::GetFrameStateInput(param_1);
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar6 = NodeProperties::GetControlInput(param_1,0);
  if ((lVar11 == 0x4000001) || (uVar7 = Type::SlowIs((Type *)&local_c8,0x4000001), (uVar7 & 1) != 0)
     ) {
    uVar3 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    uVar7 = Type::Maybe((Type *)&local_c8,0x4180001);
    if ((uVar7 & 1) != 0) {
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::ObjectIsSmi
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_a8 = pNVar2;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Branch
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
      local_a8 = pNVar9;
      pAStack_a0 = (AccessBuilder *)uVar6;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,2,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      local_138 = (Node *)Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      local_118 = pNVar5;
      local_f0 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfFalse
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      this_00 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar13 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForMap(this_00);
      pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar13,(FieldAccess *)&local_a8);
      local_c0 = pNVar2;
      pNStack_b8 = pNVar5;
      local_b0 = this_00;
      this_01 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,3,&local_c0,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar13 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForMapInstanceType(this_01);
      pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar13,(FieldAccess *)&local_a8);
      local_c0 = (Node *)this_01;
      pNStack_b8 = (Node *)this_01;
      local_b0 = this_00;
      pNVar5 = (Node *)Graph::NewNode(pGVar12,pOVar8,3,&local_c0,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pAStack_a0 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(this + 0x10),1059.0);
      local_a8 = pNVar5;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,2,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Branch
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
      local_a8 = pNVar9;
      pAStack_a0 = this_00;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,2,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      local_130 = Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      local_110 = pNVar5;
      local_e8 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfFalse
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      uVar6 = Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pAStack_a0 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(this + 0x10),169.0);
      local_a8 = pNVar5;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,2,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Branch
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
      local_a8 = pNVar9;
      pAStack_a0 = (AccessBuilder *)uVar6;
      pNVar9 = (Node *)Graph::NewNode(pGVar12,pOVar8,2,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfFalse
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      local_128 = Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      local_108 = pNVar5;
      local_e0 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_a8 = pNVar9;
      uVar6 = Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               JSOperatorBuilder::CallRuntime
                         ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],4);
      local_a8 = pNVar2;
      pAStack_a0 = (AccessBuilder *)uVar3;
      local_98 = uVar4;
      pNStack_90 = pNVar5;
      local_88 = uVar6;
      pNVar2 = (Node *)Graph::NewNode(pGVar12,pOVar8,5,&local_a8,false);
      *(undefined8 *)(pNVar2 + 8) = 0x201;
      local_c0 = (Node *)0x0;
      uVar7 = NodeProperties::IsExceptionalCall(param_1,&local_c0);
      local_120 = pNVar2;
      if ((uVar7 & 1) != 0) {
        NodeProperties::ReplaceControlInput(local_c0,pNVar2,0);
        NodeProperties::ReplaceEffectInput(local_c0,pNVar2,0);
        pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::IfSuccess
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_a8 = pNVar2;
        local_120 = (Node *)Graph::NewNode(pGVar12,pOVar8,1,&local_a8,false);
        (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_c0);
      }
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      local_100 = pNVar2;
      local_d8 = pNVar2;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Merge
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],4);
      uVar4 = Graph::NewNode(pGVar12,pOVar8,4,&local_138,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      local_f8 = uVar4;
      local_d0 = uVar4;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],4);
      uVar6 = Graph::NewNode(pGVar12,pOVar8,5,&local_118,false);
      pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,4);
      uVar3 = Graph::NewNode(pGVar12,pOVar8,5,&local_f0,false);
      plVar10 = *(long **)(this + 8);
      lVar11 = *plVar10;
      goto LAB_01766938;
    }
    uVar3 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
  }
  plVar10 = *(long **)(this + 8);
  lVar11 = *plVar10;
  uVar6 = 0;
  uVar4 = 0;
LAB_01766938:
  (**(code **)(lVar11 + 0x20))(plVar10,param_1,uVar3,uVar6,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

