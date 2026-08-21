
/* v8::internal::compiler::JSCallReducer::RewirePostCallbackExceptionEdges(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::JSCallReducer::RewirePostCallbackExceptionEdges
          (JSCallReducer *this,Node *param_1,Node *param_2,Node *param_3,Node **param_4,
          Node **param_5)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfException
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  pNStack_60 = *param_4;
  local_68 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_68,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfSuccess
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_68 = *param_4;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_68,false);
  *param_4 = pNVar4;
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfException
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  pNStack_60 = *param_5;
  local_68 = param_3;
  uVar5 = Graph::NewNode(pGVar1,pOVar2,2,&local_68,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfSuccess
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_68 = *param_5;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_68,false);
  *param_5 = pNVar4;
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Merge
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_68 = pNVar3;
  pNStack_60 = (Node *)uVar5;
  uVar6 = Graph::NewNode(pGVar1,pOVar2,2,&local_68,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_68 = pNVar3;
  pNStack_60 = (Node *)uVar5;
  local_58 = uVar6;
  uVar7 = Graph::NewNode(pGVar1,pOVar2,3,&local_68,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
  local_68 = pNVar3;
  pNStack_60 = (Node *)uVar5;
  local_58 = uVar6;
  uVar5 = Graph::NewNode(pGVar1,pOVar2,3,&local_68,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_2,uVar5,uVar7,uVar6);
  return;
}

