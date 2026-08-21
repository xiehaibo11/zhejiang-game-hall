
/* v8::internal::compiler::JSTypedLowering::ReduceJSToObject(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToObject(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  CallDescriptor *pCVar10;
  Node *this_00;
  Node *this_01;
  Use *pUVar11;
  long lVar12;
  Graph *pGVar13;
  Node *local_b0 [2];
  int *local_a0;
  long local_98;
  Node *local_90;
  Node *pNStack_88;
  Node *local_80;
  undefined8 uStack_78;
  Node *local_70;
  undefined8 uStack_68;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar12 = *(long *)(pNVar1 + 8);
  local_98 = lVar12;
  uVar2 = NodeProperties::GetContextInput(param_1);
  uVar3 = NodeProperties::GetFrameStateInput(param_1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNStack_88 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if ((lVar12 == 0x47f0001) || (uVar5 = Type::SlowIs((Type *)&local_98,0x47f0001), (uVar5 & 1) != 0)
     ) {
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),param_1,pNVar1,pNVar4,pNStack_88);
    param_1 = pNVar1;
  }
  else {
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsReceiver
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_90 = pNVar1;
    pNVar7 = (Node *)Graph::NewNode(pGVar13,pOVar6,1,&local_90,false);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_90 = pNVar7;
    pNVar7 = (Node *)Graph::NewNode(pGVar13,pOVar6,2,&local_90,false);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_90 = pNVar7;
    pNVar8 = (Node *)Graph::NewNode(pGVar13,pOVar6,1,&local_90,false);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_90 = pNVar7;
    uVar9 = Graph::NewNode(pGVar13,pOVar6,1,&local_90,false);
    Builtins::CallableFor((Builtins *)local_b0,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x5a)
    ;
    local_90 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
    pNStack_88 = (Node *)local_a0;
    pCVar10 = (CallDescriptor *)
              Linkage::GetStubCallDescriptor
                        (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_90,
                         local_a0[2] - *local_a0,1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pCVar10);
    local_90 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_b0[0]);
    pNStack_88 = pNVar1;
    local_80 = (Node *)uVar2;
    uStack_78 = uVar3;
    local_70 = pNVar4;
    uStack_68 = uVar9;
    this_00 = (Node *)Graph::NewNode(pGVar13,pOVar6,6,&local_90,false);
    local_b0[0] = (Node *)0x0;
    uVar5 = Type::Maybe((Type *)&local_98,0x181);
    pNVar7 = this_00;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = NodeProperties::IsExceptionalCall(param_1,local_b0), (uVar5 & 1) != 0)) {
      NodeProperties::ReplaceControlInput(local_b0[0],this_00,0);
      NodeProperties::ReplaceEffectInput(local_b0[0],this_00,0);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::IfSuccess
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_90 = this_00;
      pNVar7 = (Node *)Graph::NewNode(pGVar13,pOVar6,1,&local_90,false);
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_b0[0]);
    }
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_90 = pNVar8;
    pNStack_88 = pNVar7;
    pNVar8 = (Node *)Graph::NewNode(pGVar13,pOVar6,2,&local_90,false);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_90 = pNVar4;
    pNStack_88 = this_00;
    local_80 = pNVar8;
    uVar2 = Graph::NewNode(pGVar13,pOVar6,3,&local_90,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,uVar2,pNVar8);
    pNVar4 = param_1 + 0x20;
    pNVar7 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    this_01 = *(Node **)pNVar7;
    if (this_01 != pNVar1) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar4 + -0x18);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x18);
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,pUVar11);
      }
      *(Node **)pNVar7 = pNVar1;
      if (pNVar1 != (Node *)0x0) {
        Node::AppendUse(pNVar1,pUVar11);
      }
    }
    pNVar1 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar1 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar1 + 8);
    if (pNVar7 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar4 + -0x30);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x30);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar11);
      }
      *(Node **)(pNVar1 + 8) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar11);
      }
    }
    pNVar1 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar1 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar1 + 0x10);
    if (pNVar7 != pNVar8) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar4 + -0x48);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x48);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar11);
      }
      *(Node **)(pNVar1 + 0x10) = pNVar8;
      if (pNVar8 != (Node *)0x0) {
        Node::AppendUse(pNVar8,pUVar11);
      }
    }
    Node::TrimInputCount(param_1,3);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,2)
    ;
    NodeProperties::ChangeOp(param_1,pOVar6);
  }
  return param_1;
}

