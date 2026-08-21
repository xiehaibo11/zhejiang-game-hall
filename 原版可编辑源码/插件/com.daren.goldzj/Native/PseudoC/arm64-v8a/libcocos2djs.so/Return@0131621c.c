
/* v8::internal::compiler::WasmGraphBuilder::Return(v8::internal::Vector<v8::internal::compiler::Node*>)
    */

Node * v8::internal::compiler::WasmGraphBuilder::Return(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  Graph *pGVar2;
  CommonOperatorBuilder *this;
  long lVar3;
  Node *pNVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  Node *local_a8;
  Node **local_a0;
  Node **local_98;
  long *local_90;
  Node *local_88 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = param_3 + 3;
  local_90 = &local_48;
  local_a0 = local_88;
  if (8 < uVar1) {
    local_98 = local_88;
    base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_a0,(ulong)uVar1);
  }
  local_98 = local_a0 + uVar1;
  pNVar4 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0);
  *local_a0 = pNVar4;
  if (param_3 != 0) {
    memcpy(local_a0 + 1,param_2,(ulong)param_3 << 3);
  }
  local_a0[param_3 + 1] = (Node *)**(undefined8 **)(param_1 + 0x20);
  local_a0[param_3 + 2] = (Node *)**(undefined8 **)(param_1 + 0x18);
  pGVar2 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Return
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],param_3);
  pNVar4 = (Node *)Graph::NewNode(pGVar2,pOVar5,uVar1,local_a0,false);
  pGVar2 = (Graph *)**(undefined8 **)(param_1 + 8);
  this = (CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1];
  if (*(long *)(pGVar2 + 0x10) == 0) {
    pOVar5 = (Operator *)CommonOperatorBuilder::End(this,1);
    local_a8 = pNVar4;
    uVar6 = Graph::NewNode(pGVar2,pOVar5,1,&local_a8,false);
    *(undefined8 *)(pGVar2 + 0x10) = uVar6;
  }
  else {
    NodeProperties::MergeControlToEnd(pGVar2,this,pNVar4);
  }
  if (local_a0 != local_88) {
    free(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

