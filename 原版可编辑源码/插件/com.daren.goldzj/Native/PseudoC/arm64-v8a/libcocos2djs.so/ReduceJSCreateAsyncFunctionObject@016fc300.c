
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateAsyncFunctionObject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateAsyncFunctionObject
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  Operator *pOVar10;
  Node *pNVar11;
  AccessBuilder *pAVar12;
  AccessBuilder *pAVar13;
  long lVar14;
  Graph *pGVar15;
  JSGraph *pJVar16;
  undefined8 local_140;
  undefined8 uStack_138;
  ObjectRef local_128 [16];
  JSGraph *local_118;
  AccessBuilder *local_110;
  Node *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  Node *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Node *local_c8;
  Node *local_c0;
  AccessBuilder *local_b8;
  undefined8 local_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar2 = RegisterCountOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetValueInput(param_1,0);
  uVar4 = NodeProperties::GetValueInput(param_1,1);
  uVar5 = NodeProperties::GetValueInput(param_1,2);
  uVar6 = NodeProperties::GetContextInput(param_1);
  uVar7 = NodeProperties::GetEffectInput(param_1,0);
  uVar8 = NodeProperties::GetControlInput(param_1,0);
  local_e8 = *(undefined8 **)(this + 0x18);
  local_e0 = (Node *)0x0;
  local_d8 = uVar7;
  local_d0 = uVar8;
  ObjectRef::ObjectRef((ObjectRef *)&local_f8,*(undefined8 *)(this + 0x20),local_e8[0x2d] + 0xe0,0);
  uVar9 = ObjectRef::IsMap((ObjectRef *)&local_f8);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  AllocationBuilder::AllocateArray(&local_e8,uVar2,local_f8,uStack_f0,0);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    do {
      AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_a8,uVar9,5);
      uVar7 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
      pGVar15 = (Graph *)*local_e8;
      pOVar10 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          ((SimplifiedOperatorBuilder *)local_e8[0x2f],(FieldAccess *)&local_a8);
      local_c8 = local_e0;
      local_b8 = (AccessBuilder *)local_d8;
      local_b0 = local_d0;
      local_c0 = (Node *)uVar7;
      local_d8 = Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  pGVar15 = (Graph *)*local_e8;
  pOVar10 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_e8[1]);
  local_a8 = local_e0;
  uStack_a0 = local_d8;
  pNVar11 = (Node *)Graph::NewNode(pGVar15,pOVar10,2,&local_a8,false);
  pJVar16 = *(JSGraph **)(this + 0x18);
  local_110 = (AccessBuilder *)0x0;
  pGVar15 = *(Graph **)pJVar16;
  local_118 = pJVar16;
  local_108 = pNVar11;
  local_100 = uVar8;
  pOVar10 = (Operator *)
            CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar16 + 8),1);
  local_a8 = pNVar11;
  uVar7 = Graph::NewNode(pGVar15,pOVar10,1,&local_a8,false);
  pGVar15 = *(Graph **)pJVar16;
  local_108 = (Node *)uVar7;
  pOVar10 = (Operator *)
            SimplifiedOperatorBuilder::Allocate
                      (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),0xffffffff,0);
  local_a8 = (Node *)JSGraph::Constant(pJVar16,44.0);
  uStack_a0 = uVar7;
  local_98 = uVar8;
  pAVar12 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,3,&local_a8,false);
  local_110 = pAVar12;
  local_108 = (Node *)pAVar12;
  AccessBuilder::ForMap(pAVar12);
  lVar14 = *(long *)(this + 0x20);
  if (*(char *)(lVar14 + 0x18) == '\x01') {
    uStack_138 = *(undefined8 *)(lVar14 + 0x28);
    local_140 = *(undefined8 *)(lVar14 + 0x20);
    local_128 = (ObjectRef  [16])
                NativeContextRef::async_function_object_map((NativeContextRef *)&local_140);
    uVar7 = JSGraph::Constant(pJVar16,local_128);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_c0 = (Node *)uVar7;
    local_b8 = pAVar12;
    local_b0 = uVar8;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar13);
    uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_c0 = (Node *)uVar7;
    local_b8 = pAVar13;
    local_b0 = uVar8;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSObjectElements(pAVar13);
    uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_c0 = (Node *)uVar7;
    local_b8 = pAVar13;
    local_b0 = uVar8;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectContext(pAVar13);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    uVar7 = local_100;
    pAVar12 = local_110;
    local_c8 = (Node *)local_110;
    local_b0 = local_100;
    local_c0 = (Node *)uVar6;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectFunction(pAVar13);
    pJVar16 = local_118;
    pGVar15 = *(Graph **)local_118;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),(FieldAccess *)&local_a8
                        );
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar7;
    local_c0 = (Node *)uVar3;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectReceiver(pAVar13);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar7;
    local_c0 = (Node *)uVar4;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectInputOrDebugPos(pAVar13);
    uVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar7;
    local_c0 = (Node *)uVar3;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectResumeMode(pAVar13);
    uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    uVar3 = local_100;
    pAVar12 = local_110;
    local_c8 = (Node *)local_110;
    local_b0 = local_100;
    local_c0 = (Node *)uVar4;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectContinuation(pAVar13);
    uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x18),-2.0);
    pJVar16 = local_118;
    pGVar15 = *(Graph **)local_118;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),(FieldAccess *)&local_a8
                        );
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar3;
    local_c0 = (Node *)uVar4;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSGeneratorObjectParametersAndRegisters(pAVar13);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar3;
    local_c0 = pNVar11;
    local_b8 = pAVar13;
    pAVar13 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    local_108 = (Node *)pAVar13;
    AccessBuilder::ForJSAsyncFunctionObjectPromise(pAVar13);
    pGVar15 = *(Graph **)pJVar16;
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar16 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = (Node *)pAVar12;
    local_b0 = uVar3;
    local_c0 = (Node *)uVar5;
    local_b8 = pAVar13;
    local_108 = (Node *)Graph::NewNode(pGVar15,pOVar10,4,&local_c8,false);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_118,param_1);
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

