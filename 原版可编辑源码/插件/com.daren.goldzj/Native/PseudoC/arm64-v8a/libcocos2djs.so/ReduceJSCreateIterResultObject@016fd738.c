
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateIterResultObject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateIterResultObject
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  AccessBuilder *pAVar8;
  AccessBuilder *pAVar9;
  long lVar10;
  undefined8 uVar11;
  JSGraph *pJVar12;
  Graph *pGVar13;
  JSGraph *local_e0;
  AccessBuilder *local_d8;
  Node *local_d0;
  undefined8 local_c8;
  Node *local_c0;
  undefined8 uStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  lVar10 = *(long *)(this + 0x20);
  if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_b8 = *(undefined8 *)(lVar10 + 0x28);
  local_c0 = *(Node **)(lVar10 + 0x20);
  pJVar12 = *(JSGraph **)(this + 0x18);
  local_a0 = NativeContextRef::iterator_result_map((NativeContextRef *)&local_c0);
  uVar5 = JSGraph::Constant(pJVar12,(ObjectRef *)local_a0);
  pJVar12 = *(JSGraph **)(this + 0x18);
  uVar11 = *(undefined8 *)(*(long *)pJVar12 + 8);
  local_d8 = (AccessBuilder *)0x0;
  pGVar13 = *(Graph **)pJVar12;
  local_e0 = pJVar12;
  local_d0 = pNVar4;
  local_c8 = uVar11;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar12 + 8),1);
  local_a0._0_8_ = pNVar4;
  uVar7 = Graph::NewNode(pGVar13,pOVar6,1,(Node **)local_a0,false);
  pGVar13 = *(Graph **)pJVar12;
  local_d0 = (Node *)uVar7;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),0xffffffff,0);
  local_a0._0_8_ = JSGraph::Constant(pJVar12,20.0);
  local_a0._8_8_ = uVar7;
  local_90 = uVar11;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar6,3,(Node **)local_a0,false);
  local_d8 = pAVar8;
  local_d0 = (Node *)pAVar8;
  AccessBuilder::ForMap(pAVar8);
  pGVar13 = *(Graph **)pJVar12;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)pAVar8;
  uStack_b8 = uVar5;
  local_b0 = pAVar8;
  uStack_a8 = uVar11;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar6,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar9);
  uVar5 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar13 = *(Graph **)pJVar12;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)pAVar8;
  uStack_b8 = uVar5;
  local_b0 = pAVar9;
  uStack_a8 = uVar11;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar6,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectElements(pAVar9);
  uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pJVar12 = local_e0;
  pGVar13 = *(Graph **)local_e0;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)local_a0);
  uVar5 = local_c8;
  uStack_a8 = local_c8;
  local_c0 = (Node *)pAVar8;
  uStack_b8 = uVar7;
  local_b0 = pAVar9;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar6,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSIteratorResultValue(pAVar9);
  pGVar13 = *(Graph **)pJVar12;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a0);
  uStack_a8 = uVar5;
  local_c0 = (Node *)pAVar8;
  uStack_b8 = uVar2;
  local_b0 = pAVar9;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar6,4,&local_c0,false);
  local_d0 = (Node *)pAVar8;
  AccessBuilder::ForJSIteratorResultDone(pAVar8);
  pGVar13 = *(Graph **)pJVar12;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)local_d8;
  uStack_a8 = uVar5;
  uStack_b8 = uVar3;
  local_b0 = pAVar8;
  local_d0 = (Node *)Graph::NewNode(pGVar13,pOVar6,4,&local_c0,false);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

