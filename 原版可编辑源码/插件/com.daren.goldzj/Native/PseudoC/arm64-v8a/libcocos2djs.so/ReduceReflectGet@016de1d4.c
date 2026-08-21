
/* v8::internal::compiler::JSCallReducer::ReduceReflectGet(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceReflectGet(JSCallReducer *this,Node *param_1)

{
  uint *puVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  CallDescriptor *pCVar12;
  ulong uVar13;
  Node *pNVar14;
  Node *pNVar15;
  Graph *pGVar16;
  Node *local_b0 [2];
  int *local_a0;
  Node *local_98;
  Node *pNStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = (uint *)CallParametersOf(*(Operator **)param_1);
  if ((*puVar1 & 0x7ffffff) == 4) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,2);
    uVar3 = NodeProperties::GetValueInput(param_1,3);
    uVar4 = NodeProperties::GetContextInput(param_1);
    uVar5 = NodeProperties::GetFrameStateInput(param_1);
    uVar6 = NodeProperties::GetEffectInput(param_1,0);
    uVar7 = NodeProperties::GetControlInput(param_1,0);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsReceiver
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_98 = pNVar2;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,&local_98,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_98 = pNVar9;
    pNStack_90 = (Node *)uVar7;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_98,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_98 = pNVar9;
    uVar7 = Graph::NewNode(pGVar16,pOVar8,1,&local_98,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],0xb6,2);
    pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),25.0);
    pNStack_90 = (Node *)JSGraph::HeapConstant
                                   (*(JSGraph **)(this + 0x10),
                                    *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0x940);
    local_98 = pNVar10;
    local_88 = uVar4;
    uStack_80 = uVar5;
    local_78 = uVar6;
    uStack_70 = uVar7;
    pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar8,6,&local_98,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_98 = pNVar9;
    uVar7 = Graph::NewNode(pGVar16,pOVar8,1,&local_98,false);
    Builtins::CallableFor
              ((Builtins *)local_b0,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x284);
    local_98 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
    pNStack_90 = (Node *)local_a0;
    pCVar12 = (CallDescriptor *)
              Linkage::GetStubCallDescriptor
                        (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_98,
                         local_a0[2] - *local_a0,1,0,0);
    pNVar9 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_b0[0]);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pCVar12);
    local_98 = pNVar9;
    pNStack_90 = pNVar2;
    local_88 = uVar3;
    uStack_80 = uVar4;
    local_78 = uVar5;
    uStack_70 = uVar6;
    local_68 = uVar7;
    pNVar2 = (Node *)Graph::NewNode(pGVar16,pOVar8,7,&local_98,false);
    local_b0[0] = (Node *)0x0;
    uVar13 = NodeProperties::IsExceptionalCall(param_1,local_b0);
    pNVar9 = pNVar2;
    pNVar10 = pNVar11;
    if ((uVar13 & 1) != 0) {
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfException
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_98 = pNVar2;
      pNStack_90 = pNVar2;
      pNVar14 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfSuccess
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_98 = pNVar2;
      pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfException
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_98 = pNVar11;
      pNStack_90 = pNVar11;
      pNVar15 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfSuccess
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_98 = pNVar11;
      pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Merge
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
      local_98 = pNVar14;
      pNStack_90 = pNVar15;
      uVar3 = Graph::NewNode(pGVar16,pOVar8,2,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
      local_98 = pNVar14;
      pNStack_90 = pNVar15;
      local_88 = uVar3;
      uVar4 = Graph::NewNode(pGVar16,pOVar8,3,&local_98,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
      local_98 = pNVar14;
      pNStack_90 = pNVar15;
      local_88 = uVar3;
      uVar5 = Graph::NewNode(pGVar16,pOVar8,3,&local_98,false);
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_b0[0],uVar5,uVar4,uVar3);
    }
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Throw
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_98 = pNVar11;
    pNStack_90 = pNVar10;
    pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_98,false);
    NodeProperties::MergeControlToEnd
              ((Graph *)**(undefined8 **)(this + 0x10),
               (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar10);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar2,pNVar2,pNVar9);
  }
  else {
    pNVar2 = (Node *)0x0;
  }
  return pNVar2;
}

