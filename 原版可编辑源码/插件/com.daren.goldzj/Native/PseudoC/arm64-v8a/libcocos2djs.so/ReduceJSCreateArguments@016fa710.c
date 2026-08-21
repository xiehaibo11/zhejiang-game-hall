
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateArguments(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateArguments
          (JSCreateLowering *this,Node *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  Node *pNVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  undefined8 uVar15;
  Operator *pOVar16;
  undefined8 uVar17;
  AccessBuilder *pAVar18;
  AccessBuilder *pAVar19;
  Node *pNVar20;
  long *plVar21;
  JSGraph *pJVar22;
  SimplifiedOperatorBuilder *pSVar23;
  long lVar24;
  Graph *pGVar25;
  double dVar26;
  JSGraph *local_118;
  AccessBuilder *local_110;
  Node *local_108;
  Node *local_100;
  bool local_f4 [4];
  ObjectRef aOStack_f0 [16];
  Node *local_e0;
  Node *pNStack_d8;
  AccessBuilder *local_d0;
  Node *local_c8;
  undefined1 local_b8 [16];
  Node *local_a8;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  pcVar5 = (char *)CreateArgumentsTypeOf(*(Operator **)param_1);
  cVar1 = *pcVar5;
  pNVar6 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  pNVar13 = pNVar6 + 0x20;
  pNVar20 = pNVar13;
  if ((~*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0) {
    pNVar20 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  plVar21 = *(long **)(pNVar20 + 0x28);
  pNVar20 = *(Node **)(**(long **)(this + 0x18) + 8);
  lVar7 = FrameStateInfoOf(*(Operator **)pNVar6);
  if ((*(long *)(lVar7 + 0x10) == 0) ||
     (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  ObjectRef::ObjectRef(aOStack_f0,*(undefined8 *)(this + 0x20),lVar7,0);
  uVar8 = ObjectRef::IsSharedFunctionInfo(aOStack_f0);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  if (*(short *)(*plVar21 + 0x10) == 0x29) {
    if (cVar1 == '\x02') {
      uVar4 = SharedFunctionInfoRef::internal_formal_parameter_count
                        ((SharedFunctionInfoRef *)aOStack_f0);
      pNVar10 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pNVar14 = (Node *)NodeProperties::GetFrameStateInput(pNVar6);
      lVar7 = FrameStateInfoOf(*(Operator **)pNVar14);
      pNVar11 = pNVar6;
      if (*(int **)(lVar7 + 0x10) != (int *)0x0) {
        pNVar11 = pNVar14;
        if (**(int **)(lVar7 + 0x10) != 1) {
          pNVar11 = pNVar6;
        }
        pNVar13 = pNVar11 + 0x20;
      }
      if ((~*(uint *)(pNVar11 + 0x14) & 0xf000000) == 0) {
        pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
      }
      if (*(short *)(**(long **)pNVar13 + 0x10) != 0x3c) {
        lVar7 = FrameStateInfoOf(*(Operator **)pNVar11);
        lVar24 = *(long *)(lVar7 + 0x10);
        pNVar13 = (Node *)AllocateRestArguments(this,pNVar10,pNVar20,pNVar11,uVar4);
        lVar7 = *(long *)(this + 0x20);
        if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016fb950;
        pNStack_d8 = *(Node **)(lVar7 + 0x28);
        local_e0 = *(Node **)(lVar7 + 0x20);
        pJVar22 = *(JSGraph **)(this + 0x18);
        if (*(char *)(*(long *)pNVar13 + 0x24) != '\0') {
          pNVar10 = pNVar13;
        }
        local_b8 = NativeContextRef::js_array_packed_elements_map((NativeContextRef *)&local_e0);
        uVar9 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
        pJVar22 = *(JSGraph **)(this + 0x18);
        local_110 = (AccessBuilder *)0x0;
        if (lVar24 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(lVar24 + 4);
        }
        pGVar25 = *(Graph **)pJVar22;
        local_118 = pJVar22;
        local_108 = pNVar10;
        local_100 = pNVar20;
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
        local_b8._0_8_ = pNVar10;
        uVar15 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
        pGVar25 = *(Graph **)pJVar22;
        local_108 = (Node *)uVar15;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::Allocate
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
        local_b8._0_8_ = JSGraph::Constant(pJVar22,16.0);
        local_b8._8_8_ = uVar15;
        local_a8 = pNVar20;
        pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
        local_110 = pAVar18;
        local_108 = (Node *)pAVar18;
        AccessBuilder::ForMap(pAVar18);
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar18;
        local_c8 = pNVar20;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
        uVar9 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar19;
        local_c8 = pNVar20;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForJSObjectElements(pAVar19);
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        pNVar20 = local_100;
        local_c8 = local_100;
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = pNVar13;
        local_d0 = pAVar19;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForJSArrayLength((AccessBuilder *)local_b8,2);
        uVar9 = JSGraph::Constant(*(JSGraph **)(this + 0x18),
                                  (double)(int)(iVar3 + ~uVar4 &
                                               ((int)(iVar3 + ~uVar4) >> 0x1f ^ 0xffffffffU)));
        pGVar25 = *(Graph **)local_118;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                             (FieldAccess *)local_b8);
        local_c8 = pNVar20;
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar19;
        goto LAB_016fb69c;
      }
    }
    else if (cVar1 == '\x01') {
      pNVar10 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pNVar14 = (Node *)NodeProperties::GetFrameStateInput(pNVar6);
      lVar7 = FrameStateInfoOf(*(Operator **)pNVar14);
      pNVar11 = pNVar6;
      if (*(int **)(lVar7 + 0x10) != (int *)0x0) {
        pNVar11 = pNVar14;
        if (**(int **)(lVar7 + 0x10) != 1) {
          pNVar11 = pNVar6;
        }
        pNVar13 = pNVar11 + 0x20;
      }
      if ((~*(uint *)(pNVar11 + 0x14) & 0xf000000) == 0) {
        pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
      }
      if (*(short *)(**(long **)pNVar13 + 0x10) != 0x3c) {
        lVar7 = FrameStateInfoOf(*(Operator **)pNVar11);
        lVar24 = *(long *)(lVar7 + 0x10);
        pNVar13 = (Node *)AllocateArguments(this,pNVar10,pNVar20,pNVar11);
        lVar7 = *(long *)(this + 0x20);
        if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016fb950;
        pNStack_d8 = *(Node **)(lVar7 + 0x28);
        local_e0 = *(Node **)(lVar7 + 0x20);
        pJVar22 = *(JSGraph **)(this + 0x18);
        if (*(char *)(*(long *)pNVar13 + 0x24) != '\0') {
          pNVar10 = pNVar13;
        }
        local_b8 = NativeContextRef::strict_arguments_map((NativeContextRef *)&local_e0);
        uVar9 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
        pJVar22 = *(JSGraph **)(this + 0x18);
        local_110 = (AccessBuilder *)0x0;
        if (lVar24 == 0) {
          dVar26 = -1.0;
        }
        else {
          dVar26 = (double)(*(int *)(lVar24 + 4) + -1);
        }
        pGVar25 = *(Graph **)pJVar22;
        local_118 = pJVar22;
        local_108 = pNVar10;
        local_100 = pNVar20;
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
        local_b8._0_8_ = pNVar10;
        uVar15 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
        pGVar25 = *(Graph **)pJVar22;
        local_108 = (Node *)uVar15;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::Allocate
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
        local_b8._0_8_ = JSGraph::Constant(pJVar22,16.0);
        local_b8._8_8_ = uVar15;
        local_a8 = pNVar20;
        pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
        local_110 = pAVar18;
        local_108 = (Node *)pAVar18;
        AccessBuilder::ForMap(pAVar18);
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar18;
        local_c8 = pNVar20;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
        uVar9 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar19;
        local_c8 = pNVar20;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForJSObjectElements(pAVar19);
        pGVar25 = *(Graph **)pJVar22;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                             (FieldAccess *)local_b8);
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = pNVar13;
        local_d0 = pAVar19;
        local_c8 = pNVar20;
        pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        local_108 = (Node *)pAVar19;
        AccessBuilder::ForArgumentsLength(pAVar19);
        uVar9 = JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar26);
        pGVar25 = *(Graph **)local_118;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                             (FieldAccess *)local_b8);
        local_c8 = local_100;
        local_e0 = (Node *)pAVar18;
        pNStack_d8 = (Node *)uVar9;
        local_d0 = pAVar19;
        local_108 = (Node *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
        AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_118,param_1);
        goto LAB_016fb6d8;
      }
    }
    else if (cVar1 == '\0') {
      uVar9 = NodeProperties::GetValueInput(param_1,0);
      pNVar10 = (Node *)NodeProperties::GetContextInput(param_1);
      pNVar11 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      uVar8 = SharedFunctionInfoRef::has_duplicate_parameters((SharedFunctionInfoRef *)aOStack_f0);
      if ((uVar8 & 1) == 0) {
        pNVar12 = (Node *)NodeProperties::GetFrameStateInput(pNVar6);
        lVar7 = FrameStateInfoOf(*(Operator **)pNVar12);
        pNVar14 = pNVar6;
        if (*(int **)(lVar7 + 0x10) != (int *)0x0) {
          pNVar14 = pNVar12;
          if (**(int **)(lVar7 + 0x10) != 1) {
            pNVar14 = pNVar6;
          }
          pNVar13 = pNVar14 + 0x20;
        }
        if ((~*(uint *)(pNVar14 + 0x14) & 0xf000000) == 0) {
          pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
        }
        if (*(short *)(**(long **)pNVar13 + 0x10) != 0x3c) {
          lVar7 = FrameStateInfoOf(*(Operator **)pNVar14);
          lVar24 = *(long *)(lVar7 + 0x10);
          local_f4[0] = false;
          pNVar13 = (Node *)AllocateAliasedArguments
                                      (this,pNVar11,pNVar20,pNVar14,pNVar10,
                                       (SharedFunctionInfoRef *)aOStack_f0,local_f4);
          lVar7 = *(long *)(this + 0x20);
          if (*(char *)(*(long *)pNVar13 + 0x24) != '\0') {
            pNVar11 = pNVar13;
          }
          if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016fb950;
          pJVar22 = *(JSGraph **)(this + 0x18);
          local_e0 = *(Node **)(lVar7 + 0x20);
          pNStack_d8 = *(Node **)(lVar7 + 0x28);
          if (local_f4[0] == false) {
            local_b8 = NativeContextRef::sloppy_arguments_map((NativeContextRef *)&local_e0);
          }
          else {
            local_b8 = NativeContextRef::fast_aliased_arguments_map((NativeContextRef *)&local_e0);
          }
          uVar15 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
          pJVar22 = *(JSGraph **)(this + 0x18);
          local_110 = (AccessBuilder *)0x0;
          if (lVar24 == 0) {
            dVar26 = -1.0;
          }
          else {
            dVar26 = (double)(*(int *)(lVar24 + 4) + -1);
          }
          pGVar25 = *(Graph **)pJVar22;
          local_118 = pJVar22;
          local_108 = pNVar11;
          local_100 = pNVar20;
          pOVar16 = (Operator *)
                    CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
          local_b8._0_8_ = pNVar11;
          uVar17 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
          pGVar25 = *(Graph **)pJVar22;
          local_108 = (Node *)uVar17;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::Allocate
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
          local_b8._0_8_ = JSGraph::Constant(pJVar22,20.0);
          local_b8._8_8_ = uVar17;
          local_a8 = pNVar20;
          pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
          local_110 = pAVar18;
          local_108 = (Node *)pAVar18;
          AccessBuilder::ForMap(pAVar18);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = (Node *)uVar15;
          local_d0 = pAVar18;
          local_c8 = pNVar20;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
          uVar15 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = (Node *)uVar15;
          local_d0 = pAVar19;
          local_c8 = pNVar20;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForJSObjectElements(pAVar19);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = pNVar13;
          local_d0 = pAVar19;
          local_c8 = pNVar20;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForArgumentsLength(pAVar19);
          uVar15 = JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar26);
          pJVar22 = local_118;
          pGVar25 = *(Graph **)local_118;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                               (FieldAccess *)local_b8);
          pNVar20 = local_100;
          local_c8 = local_100;
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = (Node *)uVar15;
          local_d0 = pAVar19;
          pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar18;
          AccessBuilder::ForArgumentsCallee(pAVar18);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)local_110;
          pNStack_d8 = (Node *)uVar9;
          local_d0 = pAVar18;
          local_c8 = pNVar20;
          goto LAB_016fb69c;
        }
      }
    }
LAB_016fb08c:
    param_1 = (Node *)0x0;
  }
  else {
    if (cVar1 == '\x02') {
      pNVar13 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::ArgumentsFrame
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_b8._0_8_ = (Node *)0x0;
      pNVar6 = (Node *)Graph::NewNode(pGVar25,pOVar16,0,(Node **)local_b8,false);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pSVar23 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
      iVar3 = SharedFunctionInfoRef::internal_formal_parameter_count
                        ((SharedFunctionInfoRef *)aOStack_f0);
      pOVar16 = (Operator *)SimplifiedOperatorBuilder::ArgumentsLength(pSVar23,iVar3,true);
      local_b8._0_8_ = pNVar6;
      uVar9 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::NewArgumentsElements
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],0);
      local_b8._0_8_ = pNVar6;
      local_b8._8_8_ = uVar9;
      local_a8 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
      lVar7 = *(long *)(this + 0x20);
      if (*(char *)(lVar7 + 0x18) != '\x01') {
LAB_016fb950:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      pNStack_d8 = *(Node **)(lVar7 + 0x28);
      local_e0 = *(Node **)(lVar7 + 0x20);
      pJVar22 = *(JSGraph **)(this + 0x18);
      local_b8 = NativeContextRef::js_array_packed_elements_map((NativeContextRef *)&local_e0);
      uVar15 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
      pJVar22 = *(JSGraph **)(this + 0x18);
      local_110 = (AccessBuilder *)0x0;
      pGVar25 = *(Graph **)pJVar22;
      local_118 = pJVar22;
      local_108 = pNVar13;
      local_100 = pNVar20;
      pOVar16 = (Operator *)
                CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
      local_b8._0_8_ = pNVar13;
      uVar17 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
      pGVar25 = *(Graph **)pJVar22;
      local_108 = (Node *)uVar17;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::Allocate
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
      local_b8._0_8_ = JSGraph::Constant(pJVar22,16.0);
      local_b8._8_8_ = uVar17;
      local_a8 = pNVar20;
      pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
      local_110 = pAVar18;
      local_108 = (Node *)pAVar18;
      AccessBuilder::ForMap(pAVar18);
      pGVar25 = *(Graph **)pJVar22;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),(FieldAccess *)local_b8)
      ;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = (Node *)uVar15;
      local_d0 = pAVar18;
      local_c8 = pNVar20;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
      uVar15 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pGVar25 = *(Graph **)pJVar22;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),(FieldAccess *)local_b8)
      ;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = (Node *)uVar15;
      local_d0 = pAVar19;
      local_c8 = pNVar20;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForJSObjectElements(pAVar19);
      pJVar22 = local_118;
      pGVar25 = *(Graph **)local_118;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                           (FieldAccess *)local_b8);
      pNVar20 = local_100;
      local_c8 = local_100;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = pNVar13;
      local_d0 = pAVar19;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForJSArrayLength((AccessBuilder *)local_b8,2);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar8 = SharedFunctionInfoRef::has_duplicate_parameters((SharedFunctionInfoRef *)aOStack_f0)
        ;
        if ((uVar8 & 1) == 0) {
          uVar9 = NodeProperties::GetValueInput(param_1,0);
          pNVar13 = (Node *)NodeProperties::GetContextInput(param_1);
          pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
          pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::ArgumentsFrame
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
          local_b8._0_8_ = (Node *)0x0;
          pNVar11 = (Node *)Graph::NewNode(pGVar25,pOVar16,0,(Node **)local_b8,false);
          pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
          pSVar23 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
          iVar3 = SharedFunctionInfoRef::internal_formal_parameter_count
                            ((SharedFunctionInfoRef *)aOStack_f0);
          pOVar16 = (Operator *)SimplifiedOperatorBuilder::ArgumentsLength(pSVar23,iVar3,false);
          local_b8._0_8_ = pNVar11;
          pNVar10 = (Node *)Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
          local_f4[0] = false;
          pNVar13 = (Node *)AllocateAliasedArguments
                                      (this,pNVar6,pNVar20,pNVar13,pNVar11,pNVar10,
                                       (SharedFunctionInfoRef *)aOStack_f0,local_f4);
          lVar7 = *(long *)(this + 0x20);
          if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016fb950;
          pJVar22 = *(JSGraph **)(this + 0x18);
          local_e0 = *(Node **)(lVar7 + 0x20);
          pNStack_d8 = *(Node **)(lVar7 + 0x28);
          if (local_f4[0] == false) {
            local_b8 = NativeContextRef::sloppy_arguments_map((NativeContextRef *)&local_e0);
          }
          else {
            local_b8 = NativeContextRef::fast_aliased_arguments_map((NativeContextRef *)&local_e0);
          }
          uVar15 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
          pJVar22 = *(JSGraph **)(this + 0x18);
          local_110 = (AccessBuilder *)0x0;
          pGVar25 = *(Graph **)pJVar22;
          local_118 = pJVar22;
          local_108 = pNVar13;
          local_100 = pNVar20;
          pOVar16 = (Operator *)
                    CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
          local_b8._0_8_ = pNVar13;
          uVar17 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
          pGVar25 = *(Graph **)pJVar22;
          local_108 = (Node *)uVar17;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::Allocate
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
          local_b8._0_8_ = JSGraph::Constant(pJVar22,20.0);
          local_b8._8_8_ = uVar17;
          local_a8 = pNVar20;
          pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
          local_110 = pAVar18;
          local_108 = (Node *)pAVar18;
          AccessBuilder::ForMap(pAVar18);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = (Node *)uVar15;
          local_d0 = pAVar18;
          local_c8 = pNVar20;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
          uVar15 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = (Node *)uVar15;
          local_d0 = pAVar19;
          local_c8 = pNVar20;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForJSObjectElements(pAVar19);
          pJVar22 = local_118;
          pGVar25 = *(Graph **)local_118;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                               (FieldAccess *)local_b8);
          pNVar20 = local_100;
          local_c8 = local_100;
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = pNVar13;
          local_d0 = pAVar19;
          pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar19;
          AccessBuilder::ForArgumentsLength(pAVar19);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_c8 = pNVar20;
          local_e0 = (Node *)pAVar18;
          pNStack_d8 = pNVar10;
          local_d0 = pAVar19;
          pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
          local_108 = (Node *)pAVar18;
          AccessBuilder::ForArgumentsCallee(pAVar18);
          pGVar25 = *(Graph **)pJVar22;
          pOVar16 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),
                               (FieldAccess *)local_b8);
          local_c8 = pNVar20;
          local_e0 = (Node *)local_110;
          pNStack_d8 = (Node *)uVar9;
          local_d0 = pAVar18;
          goto LAB_016fb69c;
        }
        goto LAB_016fb08c;
      }
      pNVar13 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::ArgumentsFrame
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_b8._0_8_ = (Node *)0x0;
      pNVar6 = (Node *)Graph::NewNode(pGVar25,pOVar16,0,(Node **)local_b8,false);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pSVar23 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
      iVar3 = SharedFunctionInfoRef::internal_formal_parameter_count
                        ((SharedFunctionInfoRef *)aOStack_f0);
      pOVar16 = (Operator *)SimplifiedOperatorBuilder::ArgumentsLength(pSVar23,iVar3,false);
      local_b8._0_8_ = pNVar6;
      uVar9 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
      pGVar25 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::NewArgumentsElements
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],0);
      local_b8._0_8_ = pNVar6;
      local_b8._8_8_ = uVar9;
      local_a8 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
      lVar7 = *(long *)(this + 0x20);
      if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016fb950;
      pNStack_d8 = *(Node **)(lVar7 + 0x28);
      local_e0 = *(Node **)(lVar7 + 0x20);
      pJVar22 = *(JSGraph **)(this + 0x18);
      local_b8 = NativeContextRef::strict_arguments_map((NativeContextRef *)&local_e0);
      uVar15 = JSGraph::Constant(pJVar22,(ObjectRef *)local_b8);
      pJVar22 = *(JSGraph **)(this + 0x18);
      local_110 = (AccessBuilder *)0x0;
      pGVar25 = *(Graph **)pJVar22;
      local_118 = pJVar22;
      local_108 = pNVar13;
      local_100 = pNVar20;
      pOVar16 = (Operator *)
                CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar22 + 8),1);
      local_b8._0_8_ = pNVar13;
      uVar17 = Graph::NewNode(pGVar25,pOVar16,1,(Node **)local_b8,false);
      pGVar25 = *(Graph **)pJVar22;
      local_108 = (Node *)uVar17;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::Allocate
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),0xffffffff,0);
      local_b8._0_8_ = JSGraph::Constant(pJVar22,16.0);
      local_b8._8_8_ = uVar17;
      local_a8 = pNVar20;
      pAVar18 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,3,(Node **)local_b8,false);
      local_110 = pAVar18;
      local_108 = (Node *)pAVar18;
      AccessBuilder::ForMap(pAVar18);
      pGVar25 = *(Graph **)pJVar22;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),(FieldAccess *)local_b8)
      ;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = (Node *)uVar15;
      local_d0 = pAVar18;
      local_c8 = pNVar20;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar19);
      uVar15 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pGVar25 = *(Graph **)pJVar22;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),(FieldAccess *)local_b8)
      ;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = (Node *)uVar15;
      local_d0 = pAVar19;
      local_c8 = pNVar20;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForJSObjectElements(pAVar19);
      pJVar22 = local_118;
      pGVar25 = *(Graph **)local_118;
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(local_118 + 0x178),
                           (FieldAccess *)local_b8);
      pNVar20 = local_100;
      local_c8 = local_100;
      local_e0 = (Node *)pAVar18;
      pNStack_d8 = pNVar13;
      local_d0 = pAVar19;
      pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
      local_108 = (Node *)pAVar19;
      AccessBuilder::ForArgumentsLength(pAVar19);
    }
    pGVar25 = *(Graph **)pJVar22;
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        (*(SimplifiedOperatorBuilder **)(pJVar22 + 0x178),(FieldAccess *)local_b8);
    local_e0 = (Node *)pAVar18;
    pNStack_d8 = (Node *)uVar9;
    local_d0 = pAVar19;
    local_c8 = pNVar20;
LAB_016fb69c:
    local_108 = (Node *)Graph::NewNode(pGVar25,pOVar16,4,&local_e0,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_118,param_1);
  }
LAB_016fb6d8:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

