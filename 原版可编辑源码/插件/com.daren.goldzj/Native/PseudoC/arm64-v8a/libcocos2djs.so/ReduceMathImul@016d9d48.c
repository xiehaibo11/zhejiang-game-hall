
/* v8::internal::compiler::JSCallReducer::ReduceMathImul(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceMathImul(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  long *plVar7;
  Graph *pGVar8;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      uVar2 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      plVar7 = *(long **)(this + 8);
      lVar1 = *plVar7;
      pNVar6 = (Node *)0x0;
    }
    else {
      pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
      if (*(int *)(*(long *)param_1 + 0x14) < 4) {
        pNVar6 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,3);
      }
      uVar2 = NodeProperties::GetEffectInput(param_1,0);
      uVar4 = NodeProperties::GetControlInput(param_1,0);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                          lVar1 + 8);
      local_68 = pNVar3;
      pNStack_60 = (Node *)uVar2;
      local_58 = uVar4;
      pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                          lVar1 + 8);
      local_68 = pNVar6;
      pNStack_60 = pNVar3;
      local_58 = uVar4;
      pNVar6 = (Node *)Graph::NewNode(pGVar8,pOVar5,3,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberToUint32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar5,1,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberToUint32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar6;
      uVar2 = Graph::NewNode(pGVar8,pOVar5,1,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberImul
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar3;
      pNStack_60 = (Node *)uVar2;
      uVar2 = Graph::NewNode(pGVar8,pOVar5,2,&local_68,false);
      plVar7 = *(long **)(this + 8);
      lVar1 = *plVar7;
    }
    (**(code **)(lVar1 + 0x20))(plVar7,param_1,uVar2,pNVar6,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

