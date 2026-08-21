
/* v8::internal::compiler::WasmGraphBuilder::PrepareInstanceCacheForLoop(v8::internal::compiler::WasmInstanceCacheNodes*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::PrepareInstanceCacheForLoop
          (WasmGraphBuilder *this,WasmInstanceCacheNodes *param_1,Node *param_2)

{
  Graph *pGVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *local_40;
  Node *pNStack_38;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5,1);
  local_40 = *(Node **)param_1;
  pNStack_38 = param_2;
  uVar3 = Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  *(undefined8 *)param_1 = uVar3;
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5,1);
  local_40 = *(Node **)(param_1 + 8);
  pNStack_38 = param_2;
  uVar3 = Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    pGVar1 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5,1);
    local_40 = *(Node **)(param_1 + 0x10);
    pNStack_38 = param_2;
    uVar3 = Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}

