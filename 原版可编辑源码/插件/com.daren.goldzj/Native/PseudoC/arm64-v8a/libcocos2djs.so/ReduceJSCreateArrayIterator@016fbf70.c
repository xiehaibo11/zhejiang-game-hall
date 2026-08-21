
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateArrayIterator(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateArrayIterator
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  AccessBuilder *pAVar8;
  AccessBuilder *pAVar9;
  long lVar10;
  JSGraph *pJVar11;
  Graph *pGVar12;
  undefined8 local_110;
  undefined8 uStack_108;
  ObjectRef local_f8 [16];
  JSGraph *local_e8;
  AccessBuilder *local_e0;
  Node *local_d8;
  undefined8 local_d0;
  AccessBuilder *local_c8;
  undefined8 local_c0;
  AccessBuilder *local_b8;
  undefined8 local_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  piVar2 = (int *)CreateArrayIteratorParametersOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetValueInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar5 = NodeProperties::GetControlInput(param_1,0);
  pJVar11 = *(JSGraph **)(this + 0x18);
  local_e0 = (AccessBuilder *)0x0;
  pGVar12 = *(Graph **)pJVar11;
  local_e8 = pJVar11;
  local_d8 = pNVar4;
  local_d0 = uVar5;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar11 + 8),1);
  local_a8 = pNVar4;
  uVar7 = Graph::NewNode(pGVar12,pOVar6,1,&local_a8,false);
  pGVar12 = *(Graph **)pJVar11;
  local_d8 = (Node *)uVar7;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),0x20001,0);
  local_a8 = (Node *)JSGraph::Constant(pJVar11,24.0);
  uStack_a0 = uVar7;
  local_98 = uVar5;
  pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,3,&local_a8,false);
  local_e0 = pAVar8;
  local_d8 = (Node *)pAVar8;
  AccessBuilder::ForMap(pAVar8);
  lVar10 = *(long *)(this + 0x20);
  if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_108 = *(undefined8 *)(lVar10 + 0x28);
  local_110 = *(undefined8 *)(lVar10 + 0x20);
  local_f8 = (ObjectRef  [16])
             NativeContextRef::initial_array_iterator_map((NativeContextRef *)&local_110);
  uVar7 = JSGraph::Constant(pJVar11,local_f8);
  pGVar12 = *(Graph **)pJVar11;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a8);
  local_c8 = pAVar8;
  local_c0 = uVar7;
  local_b8 = pAVar8;
  local_b0 = uVar5;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  local_d8 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar9);
  uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)pJVar11;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a8);
  local_c8 = pAVar8;
  local_c0 = uVar7;
  local_b8 = pAVar9;
  local_b0 = uVar5;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  local_d8 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectElements(pAVar9);
  uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)pJVar11;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a8);
  local_c8 = pAVar8;
  local_c0 = uVar7;
  local_b8 = pAVar9;
  local_b0 = uVar5;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  local_d8 = (Node *)pAVar9;
  AccessBuilder::ForJSArrayIteratorIteratedObject(pAVar9);
  pGVar12 = *(Graph **)pJVar11;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a8);
  uVar5 = local_d0;
  pAVar8 = local_e0;
  local_c8 = local_e0;
  local_b0 = local_d0;
  local_c0 = uVar3;
  local_b8 = pAVar9;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  local_d8 = (Node *)pAVar9;
  AccessBuilder::ForJSArrayIteratorNextIndex(pAVar9);
  uVar3 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
  pJVar11 = local_e8;
  pGVar12 = *(Graph **)local_e8;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_e8 + 0x178),(FieldAccess *)&local_a8);
  local_c8 = pAVar8;
  local_b0 = uVar5;
  local_c0 = uVar3;
  local_b8 = pAVar9;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  local_d8 = (Node *)pAVar9;
  AccessBuilder::ForJSArrayIteratorKind(pAVar9);
  uVar3 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)(long)*piVar2);
  pGVar12 = *(Graph **)pJVar11;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a8);
  local_c8 = pAVar8;
  local_b0 = uVar5;
  local_c0 = uVar3;
  local_b8 = pAVar9;
  local_d8 = (Node *)Graph::NewNode(pGVar12,pOVar6,4,(Node **)&local_c8,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e8,param_1);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

