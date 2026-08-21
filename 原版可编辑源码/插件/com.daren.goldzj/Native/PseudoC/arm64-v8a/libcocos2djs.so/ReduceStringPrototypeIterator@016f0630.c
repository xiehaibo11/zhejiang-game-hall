
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeIterator(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeIterator
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Graph *pGVar6;
  Node *local_58;
  undefined8 uStack_50;
  Node *local_48;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    uVar3 = NodeProperties::GetControlInput(param_1,0);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)(lVar1 + 8));
    local_58 = (Node *)NodeProperties::GetValueInput(param_1,1);
    uStack_50 = uVar2;
    local_48 = (Node *)uVar3;
    pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar4,3,&local_58,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             JSOperatorBuilder::CreateStringIterator
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
    uStack_50 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    local_58 = pNVar5;
    local_48 = pNVar5;
    uVar2 = Graph::NewNode(pGVar6,pOVar4,3,&local_58,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

