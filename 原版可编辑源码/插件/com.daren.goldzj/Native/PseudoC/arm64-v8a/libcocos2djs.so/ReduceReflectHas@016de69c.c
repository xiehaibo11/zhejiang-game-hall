
/* v8::internal::compiler::JSCallReducer::ReduceReflectHas(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceReflectHas(JSCallReducer *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Operator *pOVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  ulong uVar14;
  Node *pNVar15;
  Graph *pGVar16;
  Node *local_a8;
  Node *pNStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  Node *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar3 = (uint *)CallParametersOf(*(Operator **)param_1);
  iVar1 = (*puVar3 & 0x7ffffff) - 2;
  if (iVar1 < 1) {
    pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
    if (iVar1 != 1) {
      uVar5 = NodeProperties::GetValueInput(param_1,3);
      goto LAB_016de730;
    }
  }
  uVar5 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
LAB_016de730:
  uVar6 = NodeProperties::GetContextInput(param_1);
  uVar7 = NodeProperties::GetFrameStateInput(param_1);
  uVar8 = NodeProperties::GetEffectInput(param_1,0);
  uVar9 = NodeProperties::GetControlInput(param_1,0);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            SimplifiedOperatorBuilder::ObjectIsReceiver
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_a8 = pNVar4;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar10,1,&local_a8,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            CommonOperatorBuilder::Branch
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
  local_a8 = pNVar11;
  pNStack_a0 = (Node *)uVar9;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar10,2,&local_a8,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            CommonOperatorBuilder::IfFalse
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_a8 = pNVar11;
  uVar9 = Graph::NewNode(pGVar16,pOVar10,1,&local_a8,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            JSOperatorBuilder::CallRuntime
                      ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],0xb6,2);
  pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),25.0);
  pNStack_a0 = (Node *)JSGraph::HeapConstant
                                 (*(JSGraph **)(this + 0x10),
                                  *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0x948);
  local_a8 = pNVar12;
  local_98 = uVar6;
  uStack_90 = uVar7;
  local_88 = uVar8;
  local_80 = uVar9;
  pNVar12 = (Node *)Graph::NewNode(pGVar16,pOVar10,6,&local_a8,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            CommonOperatorBuilder::IfTrue
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_a8 = pNVar11;
  uVar9 = Graph::NewNode(pGVar16,pOVar10,1,&local_a8,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  local_78 = (Node *)0x0;
  local_70 = 0xffffffff;
  pOVar10 = (Operator *)
            JSOperatorBuilder::HasProperty
                      ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],
                       (FeedbackSource *)&local_78);
  local_a8 = pNVar4;
  pNStack_a0 = (Node *)uVar5;
  local_98 = uVar6;
  uStack_90 = uVar7;
  local_88 = uVar8;
  local_80 = uVar9;
  pNVar13 = (Node *)Graph::NewNode(pGVar16,pOVar10,6,&local_a8,false);
  local_78 = (Node *)0x0;
  uVar14 = NodeProperties::IsExceptionalCall(param_1,&local_78);
  pNVar4 = pNVar13;
  pNVar11 = pNVar12;
  if ((uVar14 & 1) != 0) {
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfException
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a8 = pNVar13;
    pNStack_a0 = pNVar13;
    pNVar15 = (Node *)Graph::NewNode(pGVar16,pOVar10,2,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfSuccess
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a8 = pNVar13;
    pNVar4 = (Node *)Graph::NewNode(pGVar16,pOVar10,1,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfException
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a8 = pNVar12;
    pNStack_a0 = pNVar12;
    uVar5 = Graph::NewNode(pGVar16,pOVar10,2,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfSuccess
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a8 = pNVar12;
    pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar10,1,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_a8 = pNVar15;
    pNStack_a0 = (Node *)uVar5;
    uVar6 = Graph::NewNode(pGVar16,pOVar10,2,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_a8 = pNVar15;
    pNStack_a0 = (Node *)uVar5;
    local_98 = uVar6;
    uVar7 = Graph::NewNode(pGVar16,pOVar10,3,&local_a8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_a8 = pNVar15;
    pNStack_a0 = (Node *)uVar5;
    local_98 = uVar6;
    uVar5 = Graph::NewNode(pGVar16,pOVar10,3,&local_a8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_78,uVar5,uVar7,uVar6);
  }
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar10 = (Operator *)
            CommonOperatorBuilder::Throw
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_a8 = pNVar12;
  pNStack_a0 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar10,2,&local_a8,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)(this + 0x10),
             (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar11);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar13,pNVar13,pNVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pNVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

