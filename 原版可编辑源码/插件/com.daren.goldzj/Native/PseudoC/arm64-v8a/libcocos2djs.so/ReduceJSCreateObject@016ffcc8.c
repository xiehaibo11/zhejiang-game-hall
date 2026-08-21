
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateObject(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateObject(JSCreateLowering *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  Node *pNVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  Node *pNVar12;
  Operator *pOVar13;
  AccessBuilder *pAVar14;
  AccessBuilder *pAVar15;
  undefined8 uVar16;
  JSGraph *pJVar17;
  Graph *pGVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ObjectRef aOStack_110 [16];
  undefined1 local_100 [16];
  undefined8 uStack_f0;
  int *local_e8;
  undefined1 local_e0 [16];
  undefined1 local_c8 [16];
  AccessBuilder *local_b8;
  undefined8 uStack_b0;
  AccessBuilder *local_a8;
  AccessBuilder *pAStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pNVar8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar9 = NodeProperties::GetControlInput(param_1,0);
  lVar10 = NodeProperties::GetValueInput(param_1,0);
  auVar4._8_8_ = local_c8._8_8_;
  auVar4._0_8_ = local_c8._0_8_;
  auVar3._8_8_ = local_e0._8_8_;
  auVar3._0_8_ = local_e0._0_8_;
  auVar20._8_8_ = local_100._8_8_;
  auVar20._0_8_ = local_100._0_8_;
  local_e8 = *(int **)(lVar10 + 8);
  if ((((ulong)local_e8 & 1) == 0) &&
     (local_100 = auVar20, local_e0 = auVar3, local_c8 = auVar4, *local_e8 == 0)) {
    lVar10 = Type::AsHeapConstant((Type *)&local_e8);
    local_a8 = *(AccessBuilder **)(lVar10 + 8);
    pAStack_a0 = *(AccessBuilder **)(lVar10 + 0x10);
    lVar10 = *(long *)(this + 0x20);
    if (*(char *)(lVar10 + 0x18) != '\x01') {
LAB_01700460:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    local_e0._8_8_ = *(undefined8 *)(lVar10 + 0x28);
    local_e0._0_8_ = *(undefined8 *)(lVar10 + 0x20);
    local_100 = NativeContextRef::object_function((NativeContextRef *)local_e0);
    local_c8 = JSFunctionRef::initial_map((JSFunctionRef *)local_100);
    auVar20 = MapRef::prototype((MapRef *)local_c8);
    local_100 = auVar20;
    uVar11 = ObjectRef::equals((ObjectRef *)&local_a8,(ObjectRef *)local_100);
    if ((uVar11 & 1) == 0) {
      auVar20 = HeapObjectRef::map((HeapObjectRef *)&local_a8);
      local_100 = auVar20;
      cVar6 = MapRef::oddball_type((MapRef *)local_100);
      if (cVar6 == '\x03') {
        if (*(char *)(lVar10 + 0x18) != '\x01') goto LAB_01700460;
        local_e0._8_8_ = *(undefined8 *)(lVar10 + 0x28);
        local_e0._0_8_ = *(undefined8 *)(lVar10 + 0x20);
        auVar21 = NativeContextRef::slow_object_with_null_prototype_map
                            ((NativeContextRef *)local_e0);
        local_100[0] = (JSFunctionRef)0x1;
      }
      else {
        uVar11 = ObjectRef::IsJSObject((ObjectRef *)&local_a8);
        if ((uVar11 & 1) == 0) {
          uVar16 = 0;
          uStack_f0 = 0;
          local_100 = ZEXT816(0);
          goto LAB_016ffd40;
        }
        local_e0 = ObjectRef::AsJSObject((ObjectRef *)&local_a8);
        JSObjectRef::GetObjectCreateMap();
        uVar16 = local_100._0_8_;
        auVar21._8_8_ = uStack_f0;
        auVar21._0_8_ = local_100._8_8_;
        if (local_100[0] == (JSFunctionRef)0x0) goto LAB_016ffd3c;
        bVar5 = local_100[0] != (JSFunctionRef)0x1;
        local_100._0_8_ = uVar16;
        if (bVar5) goto LAB_01700460;
      }
    }
    else {
      local_100[0] = (JSFunctionRef)0x1;
      auVar21 = local_c8;
    }
    unique0x10000c02 = auVar21;
    local_e0 = auVar21;
    pNVar12 = (Node *)JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
    uVar11 = MapRef::is_dictionary_map((MapRef *)local_e0);
    if ((uVar11 & 1) != 0) {
      ObjectRef::ObjectRef
                (aOStack_110,*(undefined8 *)(this + 0x20),
                 *(long *)(*(long *)(this + 0x18) + 0x168) + 0x208,0);
      uVar11 = ObjectRef::IsMap(aOStack_110);
      if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      iVar7 = base::bits::RoundUpToPowerOfTwo32(3);
      pJVar17 = *(JSGraph **)(this + 0x18);
      if (iVar7 < 5) {
        iVar7 = 4;
      }
      pGVar18 = *(Graph **)pJVar17;
      uVar1 = iVar7 * 3 + 5;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar17 + 8),1);
      local_a8 = (AccessBuilder *)pNVar8;
      uVar16 = Graph::NewNode(pGVar18,pOVar13,1,(Node **)&local_a8,false);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::Allocate
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),0xffffffff,0);
      local_a8 = (AccessBuilder *)JSGraph::Constant(pJVar17,(double)(int)(uVar1 * 4 + 8));
      pAStack_a0 = (AccessBuilder *)uVar16;
      local_98 = uVar9;
      pAVar14 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,3,(Node **)&local_a8,false);
      AccessBuilder::ForMap(pAVar14);
      uVar16 = JSGraph::Constant(pJVar17,aOStack_110);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar14;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForFixedArrayLength(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)(int)uVar1);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForHashTableBaseNumberOfElements(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForHashTableBaseNumberOfDeletedElement(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForHashTableBaseCapacity(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)iVar7);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForDictionaryNextEnumerationIndex(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),1.0);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForDictionaryObjectHashIndex(pAVar15);
      uVar16 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      uVar16 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
      uVar11 = 5;
      do {
        AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_a8,uVar11,0);
        pGVar18 = *(Graph **)pJVar17;
        pOVar13 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),
                             (FieldAccess *)&local_a8);
        local_c8._0_8_ = pAVar14;
        local_c8._8_8_ = uVar16;
        local_b8 = pAVar15;
        uStack_b0 = uVar9;
        pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar1);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(pJVar17 + 8));
      local_a8 = pAVar14;
      pAStack_a0 = pAVar15;
      pNVar8 = (Node *)Graph::NewNode(pGVar18,pOVar13,2,(Node **)&local_a8,false);
      pNVar12 = pNVar8;
    }
    iVar7 = MapRef::instance_size((MapRef *)local_e0);
    if (iVar7 < 0x20001) {
      uVar11 = MapRef::IsInobjectSlackTrackingInProgress((MapRef *)local_e0);
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!instance_map.IsInobjectSlackTrackingInProgress()");
      }
      pJVar17 = *(JSGraph **)(this + 0x18);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar17 + 8),1);
      local_a8 = (AccessBuilder *)pNVar8;
      uVar16 = Graph::NewNode(pGVar18,pOVar13,1,(Node **)&local_a8,false);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::Allocate
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),0xffffffff,0);
      local_a8 = (AccessBuilder *)JSGraph::Constant(pJVar17,(double)iVar7);
      pAStack_a0 = (AccessBuilder *)uVar16;
      local_98 = uVar9;
      pAVar14 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,3,(Node **)&local_a8,false);
      AccessBuilder::ForMap(pAVar14);
      uVar16 = JSGraph::Constant(pJVar17,(ObjectRef *)local_e0);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar14;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForJSObjectPropertiesOrHash(pAVar15);
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = pNVar12;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      AccessBuilder::ForJSObjectElements(pAVar15);
      uVar16 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),(FieldAccess *)&local_a8
                          );
      local_c8._0_8_ = pAVar14;
      local_c8._8_8_ = uVar16;
      local_b8 = pAVar15;
      uStack_b0 = uVar9;
      pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
      uVar16 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
      if (0xc < iVar7) {
        iVar19 = 0xc;
        do {
          AccessBuilder::ForJSObjectOffset((AccessBuilder *)&local_a8,iVar19,0);
          pGVar18 = *(Graph **)pJVar17;
          pOVar13 = (Operator *)
                    SimplifiedOperatorBuilder::StoreField
                              (*(SimplifiedOperatorBuilder **)(pJVar17 + 0x178),
                               (FieldAccess *)&local_a8);
          local_c8._0_8_ = pAVar14;
          local_c8._8_8_ = uVar16;
          local_b8 = pAVar15;
          uStack_b0 = uVar9;
          pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar13,4,(Node **)local_c8,false);
          iVar19 = iVar19 + 4;
        } while (iVar19 < iVar7);
      }
      pGVar18 = *(Graph **)pJVar17;
      pOVar13 = (Operator *)
                CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(pJVar17 + 8));
      local_a8 = pAVar14;
      pAStack_a0 = pAVar15;
      uVar16 = Graph::NewNode(pGVar18,pOVar13,2,(Node **)&local_a8,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar16,uVar16,uVar9);
      goto LAB_016ffd40;
    }
  }
LAB_016ffd3c:
  uVar16 = 0;
LAB_016ffd40:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}

