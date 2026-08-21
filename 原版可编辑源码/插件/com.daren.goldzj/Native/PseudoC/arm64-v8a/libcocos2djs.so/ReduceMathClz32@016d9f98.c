
/* v8::internal::compiler::JSCallReducer::ReduceMathClz32(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceMathClz32(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  Graph *pGVar8;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      uVar2 = JSGraph::Constant(*(JSGraph **)(this + 0x10),32.0);
      plVar7 = *(long **)(this + 8);
      lVar1 = *plVar7;
      pNVar6 = (Node *)0x0;
    }
    else {
      pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,2);
      uVar2 = NodeProperties::GetEffectInput(param_1,0);
      uVar3 = NodeProperties::GetControlInput(param_1,0);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                          lVar1 + 8);
      local_68 = pNVar6;
      uStack_60 = uVar2;
      local_58 = uVar3;
      pNVar6 = (Node *)Graph::NewNode(pGVar8,pOVar4,3,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::NumberToUint32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar6;
      pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar4,1,&local_68,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::NumberClz32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_68 = pNVar5;
      uVar2 = Graph::NewNode(pGVar8,pOVar4,1,&local_68,false);
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

