
/* v8::internal::compiler::WasmGraphBuilder::ThrowsException(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

bool __thiscall
v8::internal::compiler::WasmGraphBuilder::ThrowsException
          (WasmGraphBuilder *this,Node *param_1,Node **param_2,Node **param_3)

{
  bool bVar1;
  Graph *pGVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Node *local_50;
  Node *pNStack_48;
  
  bVar1 = (*(byte *)(*(long *)param_1 + 0x12) >> 5 & 1) == 0;
  if (bVar1) {
    pGVar2 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfSuccess
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1]);
    local_50 = param_1;
    pNVar4 = (Node *)Graph::NewNode(pGVar2,pOVar3,1,&local_50,false);
    *param_2 = pNVar4;
    pGVar2 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfException
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1]);
    local_50 = param_1;
    pNStack_48 = param_1;
    pNVar4 = (Node *)Graph::NewNode(pGVar2,pOVar3,2,&local_50,false);
    *param_3 = pNVar4;
  }
  return bVar1;
}

