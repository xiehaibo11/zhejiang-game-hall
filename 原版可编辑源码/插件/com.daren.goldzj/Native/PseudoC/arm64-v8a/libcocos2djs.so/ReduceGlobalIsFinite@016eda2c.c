
/* v8::internal::compiler::JSCallReducer::ReduceGlobalIsFinite(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceGlobalIsFinite(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long *plVar6;
  Graph *pGVar7;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      uVar2 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      plVar6 = *(long **)(this + 8);
      lVar1 = *plVar6;
      pNVar5 = (Node *)0x0;
    }
    else {
      uVar2 = NodeProperties::GetEffectInput(param_1,0);
      uVar3 = NodeProperties::GetControlInput(param_1,0);
      pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                          lVar1 + 8);
      local_68 = pNVar5;
      uStack_60 = uVar2;
      local_58 = uVar3;
      pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,3,&local_68,false);
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::NumberIsFinite
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar5;
      uVar2 = Graph::NewNode(pGVar7,pOVar4,1,&local_68,false);
      plVar6 = *(long **)(this + 8);
      lVar1 = *plVar6;
    }
    (**(code **)(lVar1 + 0x20))(plVar6,param_1,uVar2,pNVar5,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

