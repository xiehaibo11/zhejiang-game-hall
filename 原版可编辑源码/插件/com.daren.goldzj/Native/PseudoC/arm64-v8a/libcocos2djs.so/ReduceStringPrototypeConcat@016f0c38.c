
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeConcat(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeConcat
          (JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Graph *pGVar9;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  undefined8 uStack_68;
  
  if (((*(uint *)(*(Operator **)param_1 + 0x14) & 0xfffffffe) == 2) &&
     (lVar2 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar2 + 3) >> 4 & 1) == 0)) {
    uVar3 = NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::GetControlInput(param_1,0);
    pFVar1 = (FeedbackSource *)(lVar2 + 8);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
    local_80 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNStack_78 = (Node *)uVar3;
    local_70 = (Node *)uVar4;
    pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar5,3,&local_80,false);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar6,pNVar6,uVar4);
    }
    else {
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::CheckString
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1)
      ;
      local_80 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pNStack_78 = pNVar6;
      local_70 = (Node *)uVar4;
      pNVar7 = (Node *)Graph::NewNode(pGVar9,pOVar5,3,&local_80,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::StringLength
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_80 = pNVar6;
      pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar5,1,&local_80,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::StringLength
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_80 = pNVar7;
      uVar3 = Graph::NewNode(pGVar9,pOVar5,1,&local_80,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberAdd
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_80 = pNVar8;
      pNStack_78 = (Node *)uVar3;
      pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_80,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::CheckBounds
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1)
      ;
      pNStack_78 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),268435441.0);
      local_80 = pNVar8;
      local_70 = pNVar7;
      uStack_68 = uVar4;
      pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar5,4,&local_80,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::StringConcat
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_80 = pNVar8;
      pNStack_78 = pNVar6;
      local_70 = pNVar7;
      pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar5,3,&local_80,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar6,pNVar8,uVar4);
    }
  }
  else {
    pNVar6 = (Node *)0x0;
  }
  return pNVar6;
}

