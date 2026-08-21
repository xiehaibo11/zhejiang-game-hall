
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeCharAt(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeCharAt
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Graph *pGVar7;
  Node *local_80;
  undefined8 uStack_78;
  Node *local_70;
  undefined8 uStack_68;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar3 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    uVar4 = NodeProperties::GetEffectInput(param_1,0);
    uVar5 = NodeProperties::GetControlInput(param_1,0);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)(lVar1 + 8));
    local_80 = pNVar2;
    uStack_78 = uVar4;
    local_70 = (Node *)uVar5;
    pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar6,3,&local_80,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StringLength
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80 = pNVar2;
    uVar4 = Graph::NewNode(pGVar7,pOVar6,1,&local_80,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::CheckBounds
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)(lVar1 + 8));
    local_80 = pNVar3;
    uStack_78 = uVar4;
    local_70 = pNVar2;
    uStack_68 = uVar5;
    pNVar3 = (Node *)Graph::NewNode(pGVar7,pOVar6,4,&local_80,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::PoisonIndex
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80 = pNVar3;
    uVar4 = Graph::NewNode(pGVar7,pOVar6,1,&local_80,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StringCharCodeAt
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80 = pNVar2;
    uStack_78 = uVar4;
    local_70 = pNVar3;
    uStack_68 = uVar5;
    pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar6,4,&local_80,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StringFromSingleCharCode
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80 = pNVar2;
    uVar4 = Graph::NewNode(pGVar7,pOVar6,1,&local_80,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,pNVar2,uVar5);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

