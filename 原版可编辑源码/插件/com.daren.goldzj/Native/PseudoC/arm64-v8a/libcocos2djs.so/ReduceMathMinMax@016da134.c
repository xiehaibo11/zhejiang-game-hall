
/* v8::internal::compiler::JSCallReducer::ReduceMathMinMax(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceMathMinMax
          (JSCallReducer *this,Node *param_1,Operator *param_2,Node *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  int iVar6;
  Graph *pGVar7;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      plVar2 = *(long **)(this + 8);
      pNVar5 = (Node *)0x0;
    }
    else {
      pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      uVar3 = NodeProperties::GetControlInput(param_1,0);
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                          lVar1 + 8);
      local_78 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pNStack_70 = pNVar5;
      local_68 = uVar3;
      param_3 = (Node *)Graph::NewNode(pGVar7,pOVar4,3,&local_78,false);
      pNVar5 = param_3;
      if (3 < *(int *)(*(long *)param_1 + 0x14)) {
        iVar6 = 3;
        do {
          pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar4 = (Operator *)
                   SimplifiedOperatorBuilder::SpeculativeToNumber
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                              lVar1 + 8);
          local_78 = (Node *)NodeProperties::GetValueInput(param_1,iVar6);
          pNStack_70 = pNVar5;
          local_68 = uVar3;
          pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,3,&local_78,false);
          local_78 = param_3;
          pNStack_70 = pNVar5;
          param_3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),param_2,2,
                                           &local_78,false);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(long *)param_1 + 0x14));
      }
      plVar2 = *(long **)(this + 8);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_3,pNVar5,0);
  }
  else {
    param_3 = (Node *)0x0;
  }
  return param_3;
}

