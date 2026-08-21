
/* v8::internal::compiler::JSCallReducer::ReduceStringFromCodePoint(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringFromCodePoint(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Graph *pGVar6;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if (((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) && (*(int *)(*(long *)param_1 + 0x14) == 3)) {
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    uVar3 = NodeProperties::GetControlInput(param_1,0);
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::CheckBounds
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)(lVar1 + 8));
    uStack_68 = JSGraph::Constant(*(JSGraph **)(this + 0x10),1114112.0);
    local_70 = pNVar4;
    local_60 = uVar2;
    uStack_58 = uVar3;
    pNVar4 = (Node *)Graph::NewNode(pGVar6,pOVar5,4,&local_70,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StringFromSingleCodePoint
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_70 = pNVar4;
    uVar2 = Graph::NewNode(pGVar6,pOVar5,1,&local_70,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,pNVar4,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

