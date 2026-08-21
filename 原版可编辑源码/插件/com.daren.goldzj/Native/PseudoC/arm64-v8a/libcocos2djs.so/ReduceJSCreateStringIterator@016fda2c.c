
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateStringIterator(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateStringIterator
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  AccessBuilder *pAVar7;
  AccessBuilder *pAVar8;
  long lVar9;
  JSGraph *pJVar10;
  Graph *pGVar11;
  undefined8 uVar12;
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
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  lVar9 = *(long *)(this + 0x20);
  if (*(char *)(lVar9 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_b8 = *(undefined8 *)(lVar9 + 0x28);
  local_c0 = *(Node **)(lVar9 + 0x20);
  pJVar10 = *(JSGraph **)(this + 0x18);
  local_a0 = NativeContextRef::initial_string_iterator_map((NativeContextRef *)&local_c0);
  uVar4 = JSGraph::Constant(pJVar10,(ObjectRef *)local_a0);
  pJVar10 = *(JSGraph **)(this + 0x18);
  uVar12 = *(undefined8 *)(*(long *)pJVar10 + 8);
  local_d8 = (AccessBuilder *)0x0;
  pGVar11 = *(Graph **)pJVar10;
  local_e0 = pJVar10;
  local_d0 = pNVar3;
  local_c8 = uVar12;
  pOVar5 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar10 + 8),1);
  local_a0._0_8_ = pNVar3;
  uVar6 = Graph::NewNode(pGVar11,pOVar5,1,(Node **)local_a0,false);
  pGVar11 = *(Graph **)pJVar10;
  local_d0 = (Node *)uVar6;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar10 + 0x178),0x20001,0);
  local_a0._0_8_ = JSGraph::Constant(pJVar10,20.0);
  local_a0._8_8_ = uVar6;
  local_90 = uVar12;
  pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,3,(Node **)local_a0,false);
  local_d8 = pAVar7;
  local_d0 = (Node *)pAVar7;
  AccessBuilder::ForMap(pAVar7);
  pGVar11 = *(Graph **)pJVar10;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar10 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)pAVar7;
  uStack_b8 = uVar4;
  local_b0 = pAVar7;
  uStack_a8 = uVar12;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_c0,false);
  local_d0 = (Node *)pAVar8;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar8);
  uVar4 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar11 = *(Graph **)pJVar10;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar10 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)pAVar7;
  uStack_b8 = uVar4;
  local_b0 = pAVar8;
  uStack_a8 = uVar12;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_c0,false);
  local_d0 = (Node *)pAVar8;
  AccessBuilder::ForJSObjectElements(pAVar8);
  uVar6 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pJVar10 = local_e0;
  pGVar11 = *(Graph **)local_e0;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)local_a0);
  uVar4 = local_c8;
  uStack_a8 = local_c8;
  local_c0 = (Node *)pAVar7;
  uStack_b8 = uVar6;
  local_b0 = pAVar8;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_c0,false);
  local_d0 = (Node *)pAVar8;
  AccessBuilder::ForJSStringIteratorString(pAVar8);
  pGVar11 = *(Graph **)pJVar10;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar10 + 0x178),(FieldAccess *)local_a0);
  uStack_a8 = uVar4;
  local_c0 = (Node *)pAVar7;
  uStack_b8 = uVar2;
  local_b0 = pAVar8;
  pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_c0,false);
  local_d0 = (Node *)pAVar7;
  AccessBuilder::ForJSStringIteratorIndex(pAVar7);
  uVar2 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
  pGVar11 = *(Graph **)pJVar10;
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar10 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)local_d8;
  uStack_a8 = uVar4;
  uStack_b8 = uVar2;
  local_b0 = pAVar7;
  local_d0 = (Node *)Graph::NewNode(pGVar11,pOVar5,4,&local_c0,false);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

