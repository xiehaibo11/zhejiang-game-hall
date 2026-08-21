
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSGetIterator(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSGetIterator
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Node *pNVar12;
  Node *pNVar13;
  ProcessedFeedback *this_00;
  undefined4 uVar14;
  Node *pNVar15;
  Use *pUVar16;
  Graph *pGVar17;
  undefined8 *puVar18;
  FeedbackSource *pFVar19;
  Node *local_f0;
  Node *local_e8;
  Node *local_e0;
  Node *local_d8;
  Node *pNStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Node *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Node *local_a0;
  Node *local_98;
  Node *pNStack_90;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  Node *pNStack_70;
  
  lVar1 = GetIteratorParametersOf(*(Operator **)param_1);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetContextInput(param_1);
  uVar4 = NodeProperties::GetFrameStateInput(param_1);
  uVar5 = NodeProperties::GetEffectInput(param_1,0);
  uVar6 = NodeProperties::GetControlInput(param_1,0);
  local_a0 = (Node *)0x0;
  uVar7 = NodeProperties::IsExceptionalCall(param_1,&local_a0);
  local_e8 = (Node *)0x0;
  local_e0 = (Node *)0x0;
  local_f0 = (Node *)0x0;
  if ((uVar7 & 1) != 0) {
    puVar18 = *(undefined8 **)(this + 0x10);
    pNVar15 = (Node *)puVar18[0x2c];
    if (pNVar15 == (Node *)0x0) {
      pGVar17 = (Graph *)*puVar18;
      pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar18[1]);
      local_98 = (Node *)0x0;
      pNVar15 = (Node *)Graph::NewNode(pGVar17,pOVar8,0,&local_98,false);
      puVar18[0x2c] = pNVar15;
      puVar18 = *(undefined8 **)(this + 0x10);
    }
    pGVar17 = (Graph *)*puVar18;
    pOVar8 = (Operator *)CommonOperatorBuilder::Merge((CommonOperatorBuilder *)puVar18[1],1);
    local_98 = pNVar15;
    local_f0 = (Node *)Graph::NewNode(pGVar17,pOVar8,1,&local_98,false);
    pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1);
    local_98 = pNVar15;
    pNStack_90 = local_f0;
    local_e0 = (Node *)Graph::NewNode(pGVar17,pOVar8,2,&local_98,false);
    pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,1);
    local_98 = pNVar15;
    pNStack_90 = local_f0;
    local_e8 = (Node *)Graph::NewNode(pGVar17,pOVar8,2,&local_98,false);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),local_a0,local_e8,local_e0,local_f0);
    pNVar13 = local_a0;
    pNVar15 = local_f0 + 0x20;
    pNVar12 = pNVar15;
    if ((*(uint *)(local_f0 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar12 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    pNVar9 = *(Node **)pNVar12;
    if (pNVar9 != local_a0) {
      if ((*(uint *)(local_f0 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar16 = (Use *)(*(long *)pNVar15 + -0x18);
      }
      else {
        pUVar16 = (Use *)(local_f0 + -0x18);
      }
      if (pNVar9 != (Node *)0x0) {
        Node::RemoveUse(pNVar9,pUVar16);
      }
      *(Node **)pNVar12 = pNVar13;
      if (pNVar13 != (Node *)0x0) {
        Node::AppendUse(pNVar13,pUVar16);
      }
    }
    pNVar13 = local_a0;
    pNVar15 = local_e0 + 0x20;
    pNVar12 = pNVar15;
    if ((*(uint *)(local_e0 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar12 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    pNVar9 = *(Node **)pNVar12;
    if (pNVar9 != local_a0) {
      if ((*(uint *)(local_e0 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar16 = (Use *)(*(long *)pNVar15 + -0x18);
      }
      else {
        pUVar16 = (Use *)(local_e0 + -0x18);
      }
      if (pNVar9 != (Node *)0x0) {
        Node::RemoveUse(pNVar9,pUVar16);
      }
      *(Node **)pNVar12 = pNVar13;
      if (pNVar13 != (Node *)0x0) {
        Node::AppendUse(pNVar13,pUVar16);
      }
    }
    pNVar13 = local_a0;
    pNVar15 = local_e8 + 0x20;
    pNVar12 = pNVar15;
    if ((*(uint *)(local_e8 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar12 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    pNVar9 = *(Node **)pNVar12;
    if (pNVar9 != local_a0) {
      if ((*(uint *)(local_e8 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar16 = (Use *)(*(long *)pNVar15 + -0x18);
      }
      else {
        pUVar16 = (Use *)(local_e8 + -0x18);
      }
      if (pNVar9 != (Node *)0x0) {
        Node::RemoveUse(pNVar9,pUVar16);
      }
      *(Node **)pNVar12 = pNVar13;
      if (pNVar13 != (Node *)0x0) {
        Node::AppendUse(pNVar13,pUVar16);
      }
    }
  }
  pOVar8 = (Operator *)
           JSOperatorBuilder::LoadNamed
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                      *(long *)(*(long *)(this + 0x10) + 0x168) + 0xc18,lVar1);
  uVar10 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(long)*(int *)(lVar1 + 0x18));
  pFVar19 = (FeedbackSource *)(lVar1 + 0x10);
  uVar11 = JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)pFVar19);
  local_b8 = pNVar2;
  uStack_b0 = uVar10;
  local_a8 = uVar11;
  local_88 = (Node *)CreateStubBuiltinContinuationFrameState
                               (*(undefined8 *)(this + 0x10),0x14d,pNVar3,&local_b8,3,uVar4,1);
  local_98 = pNVar2;
  pNStack_90 = pNVar3;
  uStack_80 = uVar5;
  local_78 = uVar6;
  pNVar12 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar8,5,&local_98,false)
  ;
  pNVar15 = pNVar12;
  if ((uVar7 & 1) != 0) {
    pNVar15 = (Node *)AppendExceptionHandling(this,pNVar12,pNVar12,local_f0,local_e8,local_e0);
  }
  local_d8 = pNVar2;
  pNStack_d0 = pNVar12;
  local_c8 = uVar10;
  uStack_c0 = uVar11;
  pNVar13 = (Node *)CreateStubBuiltinContinuationFrameState
                              (*(undefined8 *)(this + 0x10),0x302,pNVar3,&local_d8,4,uVar4,0);
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Checkpoint
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_98 = pNVar13;
  pNStack_90 = pNVar12;
  local_88 = pNVar15;
  uVar5 = Graph::NewNode(pGVar17,pOVar8,3,&local_98,false);
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)(this + 0x18),pFVar19);
  if (*(int *)this_00 == 0) {
    uVar14 = 1;
  }
  else {
    lVar1 = ProcessedFeedback::AsCall(this_00);
    uVar14 = *(undefined4 *)(lVar1 + 0x24);
  }
  local_98 = (Node *)CONCAT44(local_98._4_4_,0x7fc00000);
  pOVar8 = (Operator *)
           JSOperatorBuilder::Call
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),2,&local_98,pFVar19,1,
                      uVar14,0);
  local_98 = pNVar12;
  pNStack_90 = pNVar2;
  local_88 = pNVar3;
  uStack_80 = uVar4;
  local_78 = uVar5;
  pNStack_70 = pNVar15;
  pNVar15 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar8,6,&local_98,false)
  ;
  pNVar2 = pNVar15;
  if ((uVar7 & 1) != 0) {
    pNVar2 = (Node *)AppendExceptionHandling(this,pNVar15,pNVar15,local_f0,local_e8,local_e0);
  }
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsReceiver
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_98 = pNVar15;
  pNVar12 = (Node *)Graph::NewNode(pGVar17,pOVar8,1,&local_98,false);
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,2);
  local_98 = pNVar12;
  pNStack_90 = pNVar2;
  pNVar12 = (Node *)Graph::NewNode(pGVar17,pOVar8,2,&local_98,false);
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_98 = pNVar12;
  uVar5 = Graph::NewNode(pGVar17,pOVar8,1,&local_98,false);
  pOVar8 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0xb4,0);
  local_98 = pNVar3;
  pNStack_90 = (Node *)uVar4;
  local_88 = pNVar15;
  uStack_80 = uVar5;
  pNVar3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar8,4,&local_98,false);
  pNVar2 = pNVar3;
  if ((uVar7 & 1) != 0) {
    pNVar2 = (Node *)AppendExceptionHandling(this,pNVar3,pNVar3,local_f0,local_e8,local_e0);
  }
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Throw((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1])
  ;
  local_98 = pNVar3;
  pNStack_90 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar17,pOVar8,2,&local_98,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)(this + 0x10),
             (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar2);
  pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_98 = pNVar12;
  uVar4 = Graph::NewNode(pGVar17,pOVar8,1,&local_98,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar15,pNVar15,uVar4);
  return uVar4;
}

