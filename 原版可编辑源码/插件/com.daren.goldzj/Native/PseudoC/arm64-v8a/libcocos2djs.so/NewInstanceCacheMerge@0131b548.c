
/* v8::internal::compiler::WasmGraphBuilder::NewInstanceCacheMerge(v8::internal::compiler::WasmInstanceCacheNodes*,
   v8::internal::compiler::WasmInstanceCacheNodes*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::NewInstanceCacheMerge
          (WasmGraphBuilder *this,WasmInstanceCacheNodes *param_1,WasmInstanceCacheNodes *param_2,
          Node *param_3)

{
  Graph *pGVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *local_58;
  Node *pNStack_50;
  Node *local_48;
  
  local_58 = *(Node **)param_1;
  pNStack_50 = *(Node **)param_2;
  if (local_58 != pNStack_50) {
    pGVar1 = (Graph *)**(undefined8 **)(this + 8);
    local_48 = param_3;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5,2);
    uVar3 = Graph::NewNode(pGVar1,pOVar2,3,&local_58,false);
    *(undefined8 *)param_1 = uVar3;
  }
  local_58 = *(Node **)(param_1 + 8);
  pNStack_50 = *(Node **)(param_2 + 8);
  if (local_58 != pNStack_50) {
    pGVar1 = (Graph *)**(undefined8 **)(this + 8);
    local_48 = param_3;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],4,2);
    uVar3 = Graph::NewNode(pGVar1,pOVar2,3,&local_58,false);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    local_58 = *(Node **)(param_1 + 0x10);
    pNStack_50 = *(Node **)(param_2 + 0x10);
    if (local_58 != pNStack_50) {
      pGVar1 = (Graph *)**(undefined8 **)(this + 8);
      local_48 = param_3;
      pOVar2 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],4,2);
      uVar3 = Graph::NewNode(pGVar1,pOVar2,3,&local_58,false);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
  }
  return;
}

