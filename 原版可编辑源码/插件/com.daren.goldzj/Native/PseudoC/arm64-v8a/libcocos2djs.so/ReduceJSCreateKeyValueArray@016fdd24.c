
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateKeyValueArray(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateKeyValueArray
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  AccessBuilder *this_00;
  AccessBuilder *pAVar10;
  long lVar11;
  JSGraph *pJVar12;
  Graph *pGVar13;
  JSGraph *local_120;
  AccessBuilder *local_118;
  Node *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  Node *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Node *local_d0;
  Node *pNStack_c8;
  AccessBuilder *local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  uVar4 = NodeProperties::GetEffectInput(param_1,0);
  lVar11 = *(long *)(this + 0x20);
  if (*(char *)(lVar11 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  pNStack_c8 = *(Node **)(lVar11 + 0x28);
  local_d0 = *(Node **)(lVar11 + 0x20);
  pJVar12 = *(JSGraph **)(this + 0x18);
  local_a8 = NativeContextRef::js_array_packed_elements_map((NativeContextRef *)&local_d0);
  uVar5 = JSGraph::Constant(pJVar12,(ObjectRef *)local_a8);
  uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x18),2.0);
  local_f0 = *(long **)(this + 0x18);
  local_d8 = *(undefined8 *)(*local_f0 + 8);
  local_e8 = (Node *)0x0;
  local_e0 = uVar4;
  ObjectRef::ObjectRef((ObjectRef *)&local_100,*(undefined8 *)(this + 0x20),local_f0[0x2d] + 0xe0,0)
  ;
  uVar7 = ObjectRef::IsMap((ObjectRef *)&local_100);
  if ((uVar7 & 1) != 0) {
    AllocationBuilder::AllocateArray(&local_f0,2,local_100,uStack_f8,0);
    AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_d0,2,1);
    uVar4 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
    pGVar13 = (Graph *)*local_f0;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreElement
                       ((SimplifiedOperatorBuilder *)local_f0[0x2f],(ElementAccess *)&local_d0);
    local_a8._0_8_ = local_e8;
    uStack_90 = local_e0;
    local_88 = local_d8;
    local_a8._8_8_ = uVar4;
    local_98 = uVar2;
    local_e0 = Graph::NewNode(pGVar13,pOVar8,5,(Node **)local_a8,false);
    AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_d0,2,1);
    uVar2 = JSGraph::OneConstant(*(JSGraph **)(this + 0x18));
    pGVar13 = (Graph *)*local_f0;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreElement
                       ((SimplifiedOperatorBuilder *)local_f0[0x2f],(ElementAccess *)&local_d0);
    local_a8._0_8_ = local_e8;
    uStack_90 = local_e0;
    local_88 = local_d8;
    local_a8._8_8_ = uVar2;
    local_98 = uVar3;
    local_e0 = Graph::NewNode(pGVar13,pOVar8,5,(Node **)local_a8,false);
    pGVar13 = (Graph *)*local_f0;
    pOVar8 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_f0[1]);
    local_a8._0_8_ = local_e8;
    local_a8._8_8_ = local_e0;
    pNVar9 = (Node *)Graph::NewNode(pGVar13,pOVar8,2,(Node **)local_a8,false);
    pJVar12 = *(JSGraph **)(this + 0x18);
    uVar3 = *(undefined8 *)(*(long *)pJVar12 + 8);
    local_118 = (AccessBuilder *)0x0;
    pGVar13 = *(Graph **)pJVar12;
    local_120 = pJVar12;
    local_110 = pNVar9;
    local_108 = uVar3;
    pOVar8 = (Operator *)
             CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar12 + 8),1);
    local_a8._0_8_ = pNVar9;
    uVar2 = Graph::NewNode(pGVar13,pOVar8,1,(Node **)local_a8,false);
    pGVar13 = *(Graph **)pJVar12;
    local_110 = (Node *)uVar2;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::Allocate
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),0xffffffff,0);
    local_a8._0_8_ = JSGraph::Constant(pJVar12,16.0);
    local_a8._8_8_ = uVar2;
    local_98 = uVar3;
    this_00 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar8,3,(Node **)local_a8,false);
    local_118 = this_00;
    local_110 = (Node *)this_00;
    AccessBuilder::ForMap(this_00);
    pGVar13 = *(Graph **)pJVar12;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a8);
    local_d0 = (Node *)this_00;
    pNStack_c8 = (Node *)uVar5;
    local_c0 = this_00;
    uStack_b8 = uVar3;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
    local_110 = (Node *)pAVar10;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar10);
    uVar2 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    pGVar13 = *(Graph **)pJVar12;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a8);
    local_d0 = (Node *)this_00;
    pNStack_c8 = (Node *)uVar2;
    local_c0 = pAVar10;
    uStack_b8 = uVar3;
    pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
    local_110 = (Node *)pAVar10;
    AccessBuilder::ForJSObjectElements(pAVar10);
    pJVar12 = local_120;
    pGVar13 = *(Graph **)local_120;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_120 + 0x178),(FieldAccess *)local_a8);
    uVar2 = local_108;
    uStack_b8 = local_108;
    local_d0 = (Node *)this_00;
    pNStack_c8 = pNVar9;
    local_c0 = pAVar10;
    uVar3 = Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
    local_110 = (Node *)uVar3;
    AccessBuilder::ForJSArrayLength((AccessBuilder *)local_a8,2);
    pGVar13 = *(Graph **)pJVar12;
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)local_a8);
    uStack_b8 = uVar2;
    local_d0 = (Node *)this_00;
    pNStack_c8 = (Node *)uVar6;
    local_c0 = (AccessBuilder *)uVar3;
    local_110 = (Node *)Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_120,param_1);
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

