
/* v8::internal::compiler::JSCallReducer::ReduceBigIntAsUintN(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceBigIntAsUintN(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Graph *pGVar7;
  double dVar8;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (((*(char *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0x10) == '\x05') &&
      (lVar1 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar1 + 3) >> 4 & 1) == 0)) &&
     (3 < *(int *)(*(long *)param_1 + 0x14))) {
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    uVar3 = NodeProperties::GetControlInput(param_1,0);
    plVar4 = (long *)NodeProperties::GetValueInput(param_1,2);
    local_68 = (Node *)NodeProperties::GetValueInput(param_1,3);
    if ((*(short *)(*plVar4 + 0x10) == 0x1c) &&
       (dVar8 = *(double *)(*plVar4 + 0x30), (double)(long)dVar8 == dVar8)) {
      if (dVar8 < 0.0) {
        return 0;
      }
      if (64.0 < dVar8) {
        return 0;
      }
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::CheckBigInt
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                          (FeedbackSource *)(lVar1 + 8));
      uStack_60 = uVar2;
      local_58 = uVar3;
      pNVar6 = (Node *)Graph::NewNode(pGVar7,pOVar5,3,&local_68,false);
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::BigIntAsUintN
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                          (int)dVar8);
      local_68 = pNVar6;
      uVar2 = Graph::NewNode(pGVar7,pOVar5,1,&local_68,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,pNVar6,0);
      return uVar2;
    }
  }
  return 0;
}

