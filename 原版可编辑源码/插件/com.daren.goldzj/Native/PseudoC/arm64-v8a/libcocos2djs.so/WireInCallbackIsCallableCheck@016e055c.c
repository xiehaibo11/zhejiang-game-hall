
/* v8::internal::compiler::JSCallReducer::WireInCallbackIsCallableCheck(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**, v8::internal::compiler::Node**)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::WireInCallbackIsCallableCheck
          (JSCallReducer *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,
          Node **param_5,Node **param_6,Node **param_7)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  Graph *pGVar4;
  Node *local_90;
  Node *pNStack_88;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  Node *pNStack_68;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsCallable
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_90 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,1,&local_90,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
  pNStack_88 = *param_5;
  local_90 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_90,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_90 = pNVar2;
  pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar1,1,&local_90,false);
  *param_6 = pNVar3;
  pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],0xb6,2);
  local_90 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),24.0);
  pNStack_68 = *param_6;
  pNStack_88 = param_1;
  local_80 = param_2;
  pNStack_78 = param_3;
  local_70 = param_4;
  pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar1,6,&local_90,false);
  *param_6 = pNVar3;
  *param_7 = pNVar3;
  pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_90 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,1,&local_90,false);
  *param_5 = pNVar2;
  return;
}

