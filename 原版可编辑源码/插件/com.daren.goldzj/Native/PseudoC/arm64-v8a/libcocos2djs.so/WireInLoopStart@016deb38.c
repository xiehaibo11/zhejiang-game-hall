
/* v8::internal::compiler::JSCallReducer::WireInLoopStart(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::JSCallReducer::WireInLoopStart
          (JSCallReducer *this,Node *param_1,Node **param_2,Node **param_3)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *local_58;
  Node *local_50;
  Node *local_48;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Loop
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_58 = *param_2;
  local_50 = local_58;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_58,false);
  *param_2 = pNVar3;
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_58 = *param_3;
  local_50 = local_58;
  local_48 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,3,&local_58,false);
  *param_3 = pNVar4;
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Terminate
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_58 = pNVar4;
  local_50 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_58,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)(this + 0x10),
             (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar4);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
  local_58 = param_1;
  local_50 = param_1;
  local_48 = pNVar3;
  Graph::NewNode(pGVar1,pOVar2,3,&local_58,false);
  return;
}

