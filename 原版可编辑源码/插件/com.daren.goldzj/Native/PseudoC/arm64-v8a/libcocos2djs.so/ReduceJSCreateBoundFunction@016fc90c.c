
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateBoundFunction(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateBoundFunction
          (JSCreateLowering *this,Node *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *pNVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  AccessBuilder *pAVar12;
  AccessBuilder *pAVar13;
  Graph *pGVar14;
  JSGraph *pJVar15;
  undefined8 local_108;
  undefined8 uStack_100;
  JSGraph *local_f8;
  Node *local_f0;
  Node *local_e8;
  undefined8 local_e0;
  ObjectRef aOStack_d8 [16];
  Node *local_c8;
  Node *pNStack_c0;
  Node *local_b8;
  undefined8 uStack_b0;
  Node *local_a8;
  Node *pNStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar3 = (ulong *)CreateBoundFunctionParametersOf(*(Operator **)param_1);
  uVar1 = *puVar3;
  ObjectRef::ObjectRef(aOStack_d8,*(undefined8 *)(this + 0x20),puVar3[1],0);
  uVar4 = ObjectRef::IsMap(aOStack_d8);
  if ((uVar4 & 1) != 0) {
    uVar5 = NodeProperties::GetValueInput(param_1,0);
    uVar6 = NodeProperties::GetValueInput(param_1,1);
    pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    uVar8 = NodeProperties::GetControlInput(param_1,0);
    pNVar9 = (Node *)JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    if (0 < (int)uVar1) {
      local_f8 = *(JSGraph **)(this + 0x18);
      local_f0 = (Node *)0x0;
      local_e8 = pNVar7;
      local_e0 = uVar8;
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_108,*(undefined8 *)(this + 0x20),
                 *(long *)(local_f8 + 0x168) + 0xe0,0);
      uVar4 = ObjectRef::IsMap((ObjectRef *)&local_108);
      if ((uVar4 & 1) == 0) goto LAB_016fcd60;
      AllocationBuilder::AllocateArray(&local_f8,uVar1 & 0xffffffff,local_108,uStack_100,0);
      uVar4 = 0;
      do {
        AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_a8,uVar4,5);
        uVar10 = NodeProperties::GetValueInput(param_1,(int)uVar4 + 2);
        pGVar14 = *(Graph **)local_f8;
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(local_f8 + 0x178),
                             (FieldAccess *)&local_a8);
        local_c8 = local_f0;
        local_b8 = local_e8;
        uStack_b0 = local_e0;
        pNStack_c0 = (Node *)uVar10;
        local_e8 = (Node *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
        uVar4 = uVar4 + 1;
      } while ((uVar1 & 0xffffffff) != uVar4);
      pGVar14 = *(Graph **)local_f8;
      pOVar11 = (Operator *)
                CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(local_f8 + 8));
      local_a8 = local_f0;
      pNStack_a0 = local_e8;
      pNVar9 = (Node *)Graph::NewNode(pGVar14,pOVar11,2,&local_a8,false);
      pNVar7 = pNVar9;
    }
    pJVar15 = *(JSGraph **)(this + 0x18);
    local_f0 = (Node *)0x0;
    pGVar14 = *(Graph **)pJVar15;
    local_f8 = pJVar15;
    local_e8 = pNVar7;
    local_e0 = uVar8;
    pOVar11 = (Operator *)
              CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar15 + 8),1);
    local_a8 = pNVar7;
    uVar10 = Graph::NewNode(pGVar14,pOVar11,1,&local_a8,false);
    pGVar14 = *(Graph **)pJVar15;
    local_e8 = (Node *)uVar10;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::Allocate
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),
                         "S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_",0);
    local_a8 = (Node *)JSGraph::Constant(pJVar15,24.0);
    pNStack_a0 = (Node *)uVar10;
    local_98 = uVar8;
    pAVar12 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,3,&local_a8,false);
    local_f0 = (Node *)pAVar12;
    local_e8 = (Node *)pAVar12;
    AccessBuilder::ForMap(pAVar12);
    uVar10 = JSGraph::Constant(pJVar15,aOStack_d8);
    pGVar14 = *(Graph **)pJVar15;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    pNStack_c0 = (Node *)uVar10;
    local_b8 = (Node *)pAVar12;
    uStack_b0 = uVar8;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    local_e8 = (Node *)pAVar13;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar13);
    uVar10 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    pGVar14 = *(Graph **)pJVar15;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    pNStack_c0 = (Node *)uVar10;
    local_b8 = (Node *)pAVar13;
    uStack_b0 = uVar8;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    local_e8 = (Node *)pAVar13;
    AccessBuilder::ForJSObjectElements(pAVar13);
    uVar10 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    pJVar15 = local_f8;
    pGVar14 = *(Graph **)local_f8;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(local_f8 + 0x178),(FieldAccess *)&local_a8)
    ;
    uVar8 = local_e0;
    uStack_b0 = local_e0;
    local_c8 = (Node *)pAVar12;
    pNStack_c0 = (Node *)uVar10;
    local_b8 = (Node *)pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    local_e8 = (Node *)pAVar13;
    AccessBuilder::ForJSBoundFunctionBoundTargetFunction(pAVar13);
    pGVar14 = *(Graph **)pJVar15;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),(FieldAccess *)&local_a8);
    uStack_b0 = uVar8;
    local_c8 = (Node *)pAVar12;
    pNStack_c0 = (Node *)uVar5;
    local_b8 = (Node *)pAVar13;
    pAVar12 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    local_e8 = (Node *)pAVar12;
    AccessBuilder::ForJSBoundFunctionBoundThis(pAVar12);
    pGVar14 = *(Graph **)pJVar15;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),(FieldAccess *)&local_a8);
    pNVar7 = local_f0;
    local_c8 = local_f0;
    uStack_b0 = uVar8;
    pNStack_c0 = (Node *)uVar6;
    local_b8 = (Node *)pAVar12;
    pAVar12 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    local_e8 = (Node *)pAVar12;
    AccessBuilder::ForJSBoundFunctionBoundArguments(pAVar12);
    pGVar14 = *(Graph **)pJVar15;
    pOVar11 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar15 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = pNVar7;
    uStack_b0 = uVar8;
    pNStack_c0 = pNVar9;
    local_b8 = (Node *)pAVar12;
    local_e8 = (Node *)Graph::NewNode(pGVar14,pOVar11,4,&local_c8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_f8,param_1);
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_016fcd60:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

