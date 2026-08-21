
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateCollectionIterator(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateCollectionIterator
          (JSCreateLowering *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  AccessBuilder *pAVar3;
  int *piVar4;
  Node *pNVar5;
  undefined8 uVar6;
  AccessBuilder *pAVar7;
  Operator *pOVar8;
  AccessBuilder *pAVar9;
  long lVar10;
  JSGraph *pJVar11;
  Graph *pGVar12;
  SimplifiedOperatorBuilder *this_00;
  undefined8 local_100;
  undefined8 uStack_f8;
  ObjectRef local_f0 [16];
  JSGraph *local_e0;
  AccessBuilder *local_d8;
  Node *local_d0;
  AccessBuilder *local_c8;
  Node *local_c0;
  Node *local_b8;
  AccessBuilder *local_b0;
  AccessBuilder *local_a8;
  Node *local_a0;
  undefined8 uStack_98;
  AccessBuilder *local_90;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  piVar4 = (int *)CreateCollectionIteratorParametersOf(*(Operator **)param_1);
  pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar6 = NodeProperties::GetEffectInput(param_1,0);
  pAVar7 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
  pGVar12 = (Graph *)**(undefined8 **)(this + 0x18);
  this_00 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  AccessBuilder::ForJSCollectionTable(pAVar7);
  pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_00,(FieldAccess *)&local_a0);
  local_c0 = pNVar5;
  local_b8 = (Node *)uVar6;
  local_b0 = pAVar7;
  pNVar5 = (Node *)Graph::NewNode(pGVar12,pOVar8,3,&local_c0,false);
  pJVar11 = *(JSGraph **)(this + 0x18);
  local_d8 = (AccessBuilder *)0x0;
  pGVar12 = *(Graph **)pJVar11;
  local_e0 = pJVar11;
  local_d0 = pNVar5;
  local_c8 = pAVar7;
  pOVar8 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar11 + 8),1);
  local_a0 = pNVar5;
  uVar6 = Graph::NewNode(pGVar12,pOVar8,1,&local_a0,false);
  pGVar12 = *(Graph **)pJVar11;
  local_d0 = (Node *)uVar6;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),0x20001,0);
  local_a0 = (Node *)JSGraph::Constant(pJVar11,20.0);
  uStack_98 = uVar6;
  local_90 = pAVar7;
  local_d8 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,3,&local_a0,false);
  local_d0 = (Node *)local_d8;
  AccessBuilder::ForMap(local_d8);
  lVar10 = *(long *)(this + 0x20);
  if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_f8 = *(undefined8 *)(lVar10 + 0x28);
  local_100 = *(undefined8 *)(lVar10 + 0x20);
  iVar1 = piVar4[1];
  if (*piVar4 == 0) {
    if (iVar1 == 2) {
      local_f0 = (ObjectRef  [16])
                 NativeContextRef::map_key_value_iterator_map((NativeContextRef *)&local_100);
    }
    else if (iVar1 == 1) {
      local_f0 = (ObjectRef  [16])
                 NativeContextRef::map_value_iterator_map((NativeContextRef *)&local_100);
    }
    else {
      if (iVar1 != 0) goto LAB_016fd714;
      local_f0 = (ObjectRef  [16])
                 NativeContextRef::map_key_iterator_map((NativeContextRef *)&local_100);
    }
  }
  else {
    if (*piVar4 != 1) {
LAB_016fd714:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (iVar1 == 1) {
      local_f0 = (ObjectRef  [16])
                 NativeContextRef::set_value_iterator_map((NativeContextRef *)&local_100);
    }
    else {
      if (iVar1 != 2) goto LAB_016fd714;
      local_f0 = (ObjectRef  [16])
                 NativeContextRef::set_key_value_iterator_map((NativeContextRef *)&local_100);
    }
  }
  pJVar11 = local_e0;
  uVar6 = JSGraph::Constant(local_e0,local_f0);
  pGVar12 = *(Graph **)pJVar11;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a0);
  pAVar3 = local_c8;
  pAVar7 = local_d8;
  local_c0 = (Node *)local_d8;
  local_b0 = (AccessBuilder *)local_d0;
  local_a8 = local_c8;
  local_b8 = (Node *)uVar6;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar9);
  uVar6 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)pJVar11;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)pAVar7;
  local_a8 = pAVar3;
  local_b8 = (Node *)uVar6;
  local_b0 = pAVar9;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectElements(pAVar9);
  uVar6 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)pJVar11;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)pAVar7;
  local_a8 = pAVar3;
  local_b8 = (Node *)uVar6;
  local_b0 = pAVar9;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,4,&local_c0,false);
  local_d0 = (Node *)pAVar9;
  AccessBuilder::ForJSCollectionIteratorTable(pAVar9);
  pGVar12 = *(Graph **)pJVar11;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar11 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)pAVar7;
  local_a8 = pAVar3;
  local_b8 = pNVar5;
  local_b0 = pAVar9;
  pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar8,4,&local_c0,false);
  local_d0 = (Node *)pAVar7;
  AccessBuilder::ForJSCollectionIteratorIndex(pAVar7);
  uVar6 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)local_e0;
  pOVar8 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_a0);
  local_c0 = (Node *)local_d8;
  local_a8 = local_c8;
  local_b8 = (Node *)uVar6;
  local_b0 = pAVar7;
  local_d0 = (Node *)Graph::NewNode(pGVar12,pOVar8,4,&local_c0,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

