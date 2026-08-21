
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateClosure(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateClosure
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  AccessBuilder *pAVar10;
  AccessBuilder *pAVar11;
  long lVar12;
  uint uVar13;
  JSGraph *pJVar14;
  Graph *pGVar15;
  JSGraph *local_130;
  AccessBuilder *local_128;
  Node *local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  ObjectRef aOStack_100 [16];
  ObjectRef aOStack_f0 [16];
  ObjectRef aOStack_e0 [16];
  AccessBuilder *local_d0;
  undefined8 uStack_c8;
  AccessBuilder *local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)CreateClosureParametersOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_e0,*(undefined8 *)(this + 0x20),*puVar3,0);
  uVar4 = ObjectRef::IsSharedFunctionInfo(aOStack_e0);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  ObjectRef::ObjectRef(aOStack_f0,*(undefined8 *)(this + 0x20),puVar3[1],0);
  uVar4 = ObjectRef::IsFeedbackCell(aOStack_f0);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFeedbackCell()");
  }
  ObjectRef::ObjectRef(aOStack_100,*(undefined8 *)(this + 0x20),puVar3[2],0);
  uVar4 = ObjectRef::IsHeapObject(aOStack_100);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar6 = NodeProperties::GetControlInput(param_1,0);
  uVar7 = NodeProperties::GetContextInput(param_1);
  local_b0 = HeapObjectRef::map((HeapObjectRef *)aOStack_f0);
  ObjectRef::ObjectRef
            ((ObjectRef *)&local_d0,*(undefined8 *)(this + 0x20),
             *(long *)(*(long *)(this + 0x18) + 0x168) + 0x1f8,0);
  uVar4 = ObjectRef::IsMap((ObjectRef *)&local_d0);
  if ((uVar4 & 1) != 0) {
    uVar4 = ObjectRef::equals((ObjectRef *)local_b0,(ObjectRef *)&local_d0);
    if ((uVar4 & 1) == 0) {
      param_1 = (Node *)0x0;
    }
    else {
      lVar12 = *(long *)(this + 0x20);
      if (*(char *)(lVar12 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      local_b0._8_8_ = *(undefined8 *)(lVar12 + 0x28);
      local_b0._0_8_ = *(undefined8 *)(lVar12 + 0x20);
      iVar2 = SharedFunctionInfoRef::function_map_index((SharedFunctionInfoRef *)aOStack_e0);
      local_110 = NativeContextRef::GetFunctionMapFromIndex((NativeContextRef *)local_b0,iVar2);
      pJVar14 = *(JSGraph **)(this + 0x18);
      local_128 = (AccessBuilder *)0x0;
      local_130 = pJVar14;
      local_120 = pNVar5;
      local_118 = uVar6;
      iVar2 = MapRef::instance_size((MapRef *)local_110);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar14 + 8),1);
      local_b0._0_8_ = pNVar5;
      uVar9 = Graph::NewNode(pGVar15,pOVar8,1,(Node **)local_b0,false);
      pGVar15 = *(Graph **)pJVar14;
      local_120 = (Node *)uVar9;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::Allocate
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),0x200001,0);
      local_b0._0_8_ = JSGraph::Constant(pJVar14,(double)iVar2);
      local_b0._8_8_ = uVar9;
      local_a0 = uVar6;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,3,(Node **)local_b0,false);
      local_128 = pAVar10;
      local_120 = (Node *)pAVar10;
      AccessBuilder::ForMap(pAVar10);
      uVar9 = JSGraph::Constant(pJVar14,(ObjectRef *)local_110);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      local_d0 = pAVar10;
      uStack_c8 = uVar9;
      local_c0 = pAVar10;
      uStack_b8 = uVar6;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar11);
      uVar9 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      local_d0 = pAVar10;
      uStack_c8 = uVar9;
      local_c0 = pAVar11;
      uStack_b8 = uVar6;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSObjectElements(pAVar11);
      uVar9 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pJVar14 = local_130;
      pGVar15 = *(Graph **)local_130;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(local_130 + 0x178),(FieldAccess *)local_b0
                         );
      uVar6 = local_118;
      uStack_b8 = local_118;
      local_d0 = pAVar10;
      uStack_c8 = uVar9;
      local_c0 = pAVar11;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSFunctionSharedFunctionInfo(pAVar11);
      uVar9 = JSGraph::Constant(pJVar14,aOStack_e0);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      pAVar10 = local_128;
      local_d0 = local_128;
      uStack_b8 = uVar6;
      uStack_c8 = uVar9;
      local_c0 = pAVar11;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSFunctionContext(pAVar11);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      local_d0 = pAVar10;
      uStack_b8 = uVar6;
      uStack_c8 = uVar7;
      local_c0 = pAVar11;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSFunctionFeedbackCell(pAVar11);
      uVar7 = JSGraph::Constant(pJVar14,aOStack_f0);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      local_d0 = pAVar10;
      uStack_b8 = uVar6;
      uStack_c8 = uVar7;
      local_c0 = pAVar11;
      pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      local_120 = (Node *)pAVar11;
      AccessBuilder::ForJSFunctionCode(pAVar11);
      pJVar14 = local_130;
      uVar6 = JSGraph::Constant(local_130,aOStack_100);
      pGVar15 = *(Graph **)pJVar14;
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)local_b0);
      uVar7 = 4;
      local_d0 = pAVar10;
      uStack_b8 = local_118;
      uStack_c8 = uVar6;
      local_c0 = pAVar11;
      local_120 = (Node *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      pAVar10 = (AccessBuilder *)MapRef::has_prototype_slot((MapRef *)local_110);
      if (((ulong)pAVar10 & 1) != 0) {
        AccessBuilder::ForJSFunctionPrototypeOrInitialMap(pAVar10);
        uVar6 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x18));
        pGVar15 = *(Graph **)local_130;
        pOVar8 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_130 + 0x178),
                            (FieldAccess *)local_b0);
        uVar7 = 4;
        local_d0 = local_128;
        local_c0 = (AccessBuilder *)local_120;
        uStack_b8 = local_118;
        uStack_c8 = uVar6;
        local_120 = (Node *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
      }
      iVar2 = MapRef::GetInObjectProperties((MapRef *)local_110);
      if (0 < iVar2) {
        uVar13 = 0;
        do {
          AccessBuilder::ForJSObjectInObjectProperty
                    ((AccessBuilder *)local_110,(MapRef *)(ulong)uVar13,(int)uVar7);
          uVar6 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
          pGVar15 = *(Graph **)local_130;
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::StoreField
                             (*(SimplifiedOperatorBuilder **)(local_130 + 0x178),
                              (FieldAccess *)local_b0);
          uVar7 = 4;
          local_d0 = local_128;
          local_c0 = (AccessBuilder *)local_120;
          uStack_b8 = local_118;
          uStack_c8 = uVar6;
          local_120 = (Node *)Graph::NewNode(pGVar15,pOVar8,4,(Node **)&local_d0,false);
          uVar13 = uVar13 + 1;
          iVar2 = MapRef::GetInObjectProperties((MapRef *)local_110);
        } while ((int)uVar13 < iVar2);
      }
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
      AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_130,param_1);
    }
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

