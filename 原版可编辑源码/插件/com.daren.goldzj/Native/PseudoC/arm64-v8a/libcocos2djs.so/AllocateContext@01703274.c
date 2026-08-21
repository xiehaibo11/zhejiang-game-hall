
/* v8::internal::compiler::AllocationBuilder::AllocateContext(int, v8::internal::compiler::MapRef)
    */

void v8::internal::compiler::AllocationBuilder::AllocateContext
               (long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  Operator *pOVar2;
  long lVar3;
  AccessBuilder *pAVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  Node *local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  Node *local_80;
  long lStack_78;
  long local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar6 = *(Graph **)*param_1;
  local_b0 = param_3;
  uStack_a8 = param_4;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::BeginRegion
                     ((CommonOperatorBuilder *)((undefined8 *)*param_1)[1],1);
  local_80 = (Node *)param_1[2];
  lVar3 = Graph::NewNode(pGVar6,pOVar2,1,&local_80,false);
  param_1[2] = lVar3;
  pGVar6 = *(Graph **)*param_1;
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],0x1000001,0);
  local_80 = (Node *)JSGraph::Constant((JSGraph *)*param_1,(double)(param_2 * 4 + 8));
  lStack_78 = param_1[2];
  local_70 = param_1[3];
  pAVar4 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar2,3,&local_80,false);
  param_1[1] = (long)pAVar4;
  param_1[2] = (long)pAVar4;
  AccessBuilder::ForMap(pAVar4);
  uVar5 = JSGraph::Constant((JSGraph *)*param_1,(ObjectRef *)&local_b0);
  pGVar6 = *(Graph **)*param_1;
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],
                      (FieldAccess *)&local_80);
  local_a0 = (Node *)param_1[1];
  local_90 = param_1[2];
  lStack_88 = param_1[3];
  uStack_98 = uVar5;
  pAVar4 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar2,4,&local_a0,false);
  param_1[2] = (long)pAVar4;
  AccessBuilder::ForFixedArrayLength(pAVar4);
  uVar5 = JSGraph::Constant((JSGraph *)*param_1,(double)param_2);
  pGVar6 = *(Graph **)*param_1;
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],
                      (FieldAccess *)&local_80);
  local_a0 = (Node *)param_1[1];
  local_90 = param_1[2];
  lStack_88 = param_1[3];
  uStack_98 = uVar5;
  lVar3 = Graph::NewNode(pGVar6,pOVar2,4,&local_a0,false);
  param_1[2] = lVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

