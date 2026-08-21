
/* v8::internal::compiler::AllocationBuilder::AllocateArray(int, v8::internal::compiler::MapRef,
   v8::internal::AllocationType) */

void v8::internal::compiler::AllocationBuilder::AllocateArray
               (long *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  short sVar2;
  Operator *pOVar3;
  long lVar4;
  AccessBuilder *pAVar5;
  undefined8 uVar6;
  uint uVar7;
  Graph *pGVar8;
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
  local_b0 = param_3;
  uStack_a8 = param_4;
  sVar2 = MapRef::instance_type((MapRef *)&local_b0);
  pGVar8 = *(Graph **)*param_1;
  uVar7 = 2;
  if (sVar2 != 0x76) {
    uVar7 = 3;
  }
  pOVar3 = (Operator *)
           CommonOperatorBuilder::BeginRegion
                     ((CommonOperatorBuilder *)((undefined8 *)*param_1)[1],1);
  local_80 = (Node *)param_1[2];
  lVar4 = Graph::NewNode(pGVar8,pOVar3,1,&local_80,false);
  param_1[2] = lVar4;
  pGVar8 = *(Graph **)*param_1;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],0x1000001,param_5)
  ;
  local_80 = (Node *)JSGraph::Constant((JSGraph *)*param_1,(double)((param_2 << (ulong)uVar7) + 8));
  lStack_78 = param_1[2];
  local_70 = param_1[3];
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar8,pOVar3,3,&local_80,false);
  param_1[1] = (long)pAVar5;
  param_1[2] = (long)pAVar5;
  AccessBuilder::ForMap(pAVar5);
  uVar6 = JSGraph::Constant((JSGraph *)*param_1,(ObjectRef *)&local_b0);
  pGVar8 = *(Graph **)*param_1;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],
                      (FieldAccess *)&local_80);
  local_a0 = (Node *)param_1[1];
  local_90 = param_1[2];
  lStack_88 = param_1[3];
  uStack_98 = uVar6;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar8,pOVar3,4,&local_a0,false);
  param_1[2] = (long)pAVar5;
  AccessBuilder::ForFixedArrayLength(pAVar5);
  uVar6 = JSGraph::Constant((JSGraph *)*param_1,(double)param_2);
  pGVar8 = *(Graph **)*param_1;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)((undefined8 *)*param_1)[0x2f],
                      (FieldAccess *)&local_80);
  local_a0 = (Node *)param_1[1];
  local_90 = param_1[2];
  lStack_88 = param_1[3];
  uStack_98 = uVar6;
  lVar4 = Graph::NewNode(pGVar8,pOVar3,4,&local_a0,false);
  param_1[2] = lVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

