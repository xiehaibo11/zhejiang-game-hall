
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateGeneratorObject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateGeneratorObject
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  AccessBuilder *pAVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  Operator *pOVar13;
  undefined8 uVar14;
  Node *pNVar15;
  AccessBuilder *this_00;
  AccessBuilder *pAVar16;
  uint uVar17;
  int *piVar18;
  Graph *pGVar19;
  uint uVar20;
  JSGraph *pJVar21;
  JSGraph *local_150;
  Node *local_148;
  AccessBuilder *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  Node *local_118;
  AccessBuilder *local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  int *local_d0;
  Node *local_c8;
  AccessBuilder *pAStack_c0;
  AccessBuilder *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar5 = NodeProperties::GetValueInput(param_1,0);
  uVar6 = NodeProperties::GetValueInput(param_1,1);
  uVar7 = NodeProperties::GetContextInput(param_1);
  piVar18 = *(int **)(lVar5 + 8);
  local_d0 = piVar18;
  pAVar8 = (AccessBuilder *)NodeProperties::GetEffectInput(param_1,0);
  uVar9 = NodeProperties::GetControlInput(param_1,0);
  auVar2._8_8_ = local_e0._8_8_;
  auVar2._0_8_ = local_e0._0_8_;
  if ((((ulong)piVar18 & 1) == 0) && (local_e0 = auVar2, *piVar18 == 0)) {
    lVar10 = Type::AsHeapConstant((Type *)&local_d0);
    local_e0 = ObjectRef::AsJSFunction((ObjectRef *)(lVar10 + 8));
    uVar11 = JSFunctionRef::has_initial_map((JSFunctionRef *)local_e0);
    if ((uVar11 & 1) != 0) {
      uVar12 = CompilationDependencies::DependOnInitialMapInstanceSizePrediction
                         (*(CompilationDependencies **)(this + 0x10),(JSFunctionRef *)local_e0);
      local_f0 = JSFunctionRef::initial_map((JSFunctionRef *)local_e0);
      local_100 = JSFunctionRef::shared((JSFunctionRef *)local_e0);
      iVar3 = SharedFunctionInfoRef::internal_formal_parameter_count
                        ((SharedFunctionInfoRef *)local_100);
      local_a8 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_100);
      iVar4 = BytecodeArrayRef::register_count((BytecodeArrayRef *)local_a8);
      local_120 = *(undefined8 **)(this + 0x18);
      local_118 = (Node *)0x0;
      local_110 = pAVar8;
      local_108 = uVar9;
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_130,*(undefined8 *)(this + 0x20),local_120[0x2d] + 0xe0,0);
      uVar11 = ObjectRef::IsMap((ObjectRef *)&local_130);
      if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      uVar20 = iVar4 + iVar3;
      AllocationBuilder::AllocateArray(&local_120,uVar20,local_130,uStack_128,0);
      if (0 < (int)uVar20) {
        uVar11 = 0;
        do {
          AccessBuilder::ForFixedArraySlot((AccessBuilder *)local_a8,uVar11,5);
          pAVar8 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
          pGVar19 = (Graph *)*local_120;
          pOVar13 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              ((SimplifiedOperatorBuilder *)local_120[0x2f],(FieldAccess *)local_a8)
          ;
          local_c8 = local_118;
          local_b8 = local_110;
          uStack_b0 = local_108;
          pAStack_c0 = pAVar8;
          local_110 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
          uVar11 = uVar11 + 1;
        } while (uVar20 != uVar11);
      }
      pGVar19 = (Graph *)*local_120;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_120[1]);
      local_a8._0_8_ = local_118;
      local_a8._8_8_ = local_110;
      pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,2,(Node **)local_a8,false);
      pJVar21 = *(JSGraph **)(this + 0x18);
      local_148 = (Node *)0x0;
      pGVar19 = *(Graph **)pJVar21;
      local_150 = pJVar21;
      local_140 = pAVar8;
      local_138 = uVar9;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar21 + 8),1);
      local_a8._0_8_ = pAVar8;
      uVar14 = Graph::NewNode(pGVar19,pOVar13,1,(Node **)local_a8,false);
      pGVar19 = *(Graph **)pJVar21;
      local_140 = (AccessBuilder *)uVar14;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::Allocate
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),0xffffffff,0);
      local_a8._0_8_ = JSGraph::Constant(pJVar21,(double)(int)uVar12);
      local_a8._8_8_ = uVar14;
      local_98 = uVar9;
      pNVar15 = (Node *)Graph::NewNode(pGVar19,pOVar13,3,(Node **)local_a8,false);
      local_148 = pNVar15;
      local_140 = (AccessBuilder *)pNVar15;
      this_00 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
      AccessBuilder::ForMap(this_00);
      uVar14 = JSGraph::Constant(pJVar21,(ObjectRef *)local_f0);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      local_c8 = pNVar15;
      pAStack_c0 = (AccessBuilder *)uVar14;
      local_b8 = (AccessBuilder *)pNVar15;
      uStack_b0 = uVar9;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar16);
      uVar14 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      local_c8 = pNVar15;
      pAStack_c0 = (AccessBuilder *)uVar14;
      local_b8 = pAVar16;
      uStack_b0 = uVar9;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSObjectElements(pAVar16);
      uVar14 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pJVar21 = local_150;
      pGVar19 = *(Graph **)local_150;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(local_150 + 0x178),
                           (FieldAccess *)local_a8);
      uVar9 = local_138;
      uStack_b0 = local_138;
      local_c8 = pNVar15;
      pAStack_c0 = (AccessBuilder *)uVar14;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectContext(pAVar16);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      pNVar15 = local_148;
      local_c8 = local_148;
      uStack_b0 = uVar9;
      pAStack_c0 = (AccessBuilder *)uVar7;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectFunction(pAVar16);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      local_c8 = pNVar15;
      uStack_b0 = uVar9;
      pAStack_c0 = (AccessBuilder *)lVar5;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectReceiver(pAVar16);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      local_c8 = pNVar15;
      uStack_b0 = uVar9;
      pAStack_c0 = (AccessBuilder *)uVar6;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectInputOrDebugPos(pAVar16);
      pJVar21 = local_150;
      pGVar19 = *(Graph **)local_150;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(local_150 + 0x178),
                           (FieldAccess *)local_a8);
      uVar6 = local_138;
      local_c8 = pNVar15;
      uStack_b0 = local_138;
      pAStack_c0 = this_00;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectResumeMode(pAVar16);
      uVar7 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      pNVar15 = local_148;
      local_c8 = local_148;
      uStack_b0 = uVar6;
      pAStack_c0 = (AccessBuilder *)uVar7;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectContinuation(pAVar16);
      uVar7 = JSGraph::Constant(*(JSGraph **)(this + 0x18),-2.0);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      local_c8 = pNVar15;
      uStack_b0 = uVar6;
      pAStack_c0 = (AccessBuilder *)uVar7;
      local_b8 = pAVar16;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      local_140 = pAVar16;
      AccessBuilder::ForJSGeneratorObjectParametersAndRegisters(pAVar16);
      pGVar19 = *(Graph **)pJVar21;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar21 + 0x178),(FieldAccess *)local_a8)
      ;
      uVar7 = 4;
      local_c8 = pNVar15;
      uStack_b0 = uVar6;
      pAStack_c0 = pAVar8;
      local_b8 = pAVar16;
      local_140 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      pAVar8 = (AccessBuilder *)MapRef::instance_type((MapRef *)local_f0);
      if (((uint)pAVar8 & 0xffff) == 0x419) {
        AccessBuilder::ForJSAsyncGeneratorObjectQueue(pAVar8);
        pGVar19 = *(Graph **)local_150;
        pOVar13 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(local_150 + 0x178),
                             (FieldAccess *)local_a8);
        local_c8 = local_148;
        local_b8 = local_140;
        uStack_b0 = local_138;
        pAStack_c0 = this_00;
        local_140 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
        AccessBuilder::ForJSAsyncGeneratorObjectIsAwaiting(local_140);
        pAVar8 = (AccessBuilder *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
        pGVar19 = *(Graph **)local_150;
        pOVar13 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(local_150 + 0x178),
                             (FieldAccess *)local_a8);
        uVar7 = 4;
        local_c8 = local_148;
        local_b8 = local_140;
        uStack_b0 = local_138;
        pAStack_c0 = pAVar8;
        local_140 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
      }
      uVar20 = (uint)((ulong)uVar12 >> 0x20);
      if (0 < (int)uVar20) {
        uVar17 = 0;
        do {
          AccessBuilder::ForJSObjectInObjectProperty
                    ((AccessBuilder *)local_f0,(MapRef *)(ulong)uVar17,(int)uVar7);
          pGVar19 = *(Graph **)local_150;
          pOVar13 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(local_150 + 0x178),
                               (FieldAccess *)local_a8);
          uVar7 = 4;
          local_c8 = local_148;
          local_b8 = local_140;
          uStack_b0 = local_138;
          pAStack_c0 = this_00;
          local_140 = (AccessBuilder *)Graph::NewNode(pGVar19,pOVar13,4,&local_c8,false);
          uVar17 = uVar17 + 1;
        } while (uVar20 != uVar17);
      }
      AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_150,param_1);
      goto LAB_016ffc7c;
    }
  }
  param_1 = (Node *)0x0;
LAB_016ffc7c:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

