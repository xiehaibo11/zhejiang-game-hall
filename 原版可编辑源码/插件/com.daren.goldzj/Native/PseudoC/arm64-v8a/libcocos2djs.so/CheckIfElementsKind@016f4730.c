
/* v8::internal::compiler::JSCallReducer::CheckIfElementsKind(v8::internal::compiler::Node*,
   v8::internal::ElementsKind, v8::internal::compiler::Node*, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::JSCallReducer::CheckIfElementsKind
          (JSCallReducer *this,Node *param_1,byte param_3,undefined8 param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  double dVar7;
  Node *local_70;
  undefined8 uStack_68;
  
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  if (param_3 == 1) {
    dVar7 = 0.0;
  }
  else if (param_3 == 3) {
    dVar7 = 2.0;
  }
  else if (param_3 == 5) {
    dVar7 = 4.0;
  }
  else {
    dVar7 = (double)param_3;
  }
  uStack_68 = JSGraph::Constant(*(JSGraph **)(this + 0x10),dVar7);
  local_70 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar1,2,&local_70,false);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
  local_70 = pNVar2;
  uStack_68 = param_4;
  pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar1,2,&local_70,false);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_70 = pNVar2;
  pNVar3 = (Node *)Graph::NewNode(pGVar6,pOVar1,1,&local_70,false);
  if ((param_3 < 6) && ((param_3 & 1) != 0)) {
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_70 = pNVar2;
    uVar4 = Graph::NewNode(pGVar6,pOVar1,1,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             SimplifiedOperatorBuilder::NumberEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    if (param_3 == 0) {
      dVar7 = 1.0;
    }
    else if (param_3 == 2) {
      dVar7 = 3.0;
    }
    else if (param_3 == 4) {
      dVar7 = 5.0;
    }
    else {
      dVar7 = (double)param_3;
    }
    uStack_68 = JSGraph::Constant(*(JSGraph **)(this + 0x10),dVar7);
    local_70 = param_1;
    pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar1,2,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
    local_70 = pNVar2;
    uStack_68 = uVar4;
    pNVar2 = (Node *)Graph::NewNode(pGVar6,pOVar1,2,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_70 = pNVar2;
    uVar5 = Graph::NewNode(pGVar6,pOVar1,1,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_70 = pNVar2;
    uVar4 = Graph::NewNode(pGVar6,pOVar1,1,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_70 = pNVar3;
    uStack_68 = uVar5;
    uVar5 = Graph::NewNode(pGVar6,pOVar1,2,&local_70,false);
    *param_5 = uVar5;
  }
  else {
    *param_5 = pNVar3;
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_70 = pNVar2;
    uVar4 = Graph::NewNode(pGVar6,pOVar1,1,&local_70,false);
  }
  *param_6 = uVar4;
  return;
}

