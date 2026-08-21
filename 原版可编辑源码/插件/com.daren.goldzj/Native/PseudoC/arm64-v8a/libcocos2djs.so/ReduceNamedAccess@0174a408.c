
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceNamedAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::NamedAccessFeedback const&,
   v8::internal::compiler::AccessMode, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceNamedAccess
          (JSNativeContextSpecialization *this,Node *param_1,undefined8 param_2,long param_3,
          int param_5,Node *param_6)

{
  ZoneVector *pZVar1;
  bool bVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  PropertyAccessInfo *pPVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  Zone *pZVar17;
  JSNativeContextSpecialization *pJVar18;
  Node **ppNVar19;
  undefined8 *puVar20;
  Node **ppNVar21;
  ulong uVar22;
  Node **ppNVar23;
  PropertyAccessInfo *pPVar24;
  Node **ppNVar25;
  undefined8 *puVar26;
  Node **ppNVar27;
  Node **ppNVar28;
  Node **ppNVar29;
  undefined1 auVar30 [8];
  undefined8 *puVar31;
  Node **ppNVar32;
  undefined8 uVar33;
  Node **ppNVar34;
  Node **ppNVar35;
  Graph *pGVar36;
  Node **ppNVar37;
  Node **ppNVar38;
  int iVar39;
  undefined8 *puVar40;
  Node **ppNVar41;
  undefined1 auVar42 [16];
  Node *local_230;
  Node **local_1f8;
  Node *local_1e0;
  Node *local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  PropertyAccessInfo *local_1b8;
  PropertyAccessInfo *local_1b0;
  PropertyAccessInfo *local_1a8;
  Zone *pZStack_1a0;
  undefined1 local_198 [8];
  Node *local_190;
  Node *local_188;
  Node *pNStack_180;
  long local_170;
  long local_168;
  PropertyAccessInfo *local_110;
  PropertyAccessInfo *pPStack_108;
  PropertyAccessInfo *local_100;
  Zone *local_f8;
  undefined1 local_f0 [8];
  PropertyAccessInfo *local_e8;
  undefined8 local_e0;
  Zone *pZStack_d8;
  Node *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Node *local_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  Node *local_78;
  
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  local_90 = pNVar3;
  pNVar4 = (Node *)NodeProperties::GetContextInput(param_1);
  pNVar5 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_98 = pNVar6;
  local_1e0 = (Node *)NodeProperties::GetControlInput(param_1,0);
  uStack_a0 = *(undefined8 *)(this + 0x40);
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  uVar7 = InferReceiverMaps(this,pNVar3,pNVar6,(ZoneVector *)&local_b8);
  if (((uVar7 & 1) == 0) && (&local_b8 != (undefined8 **)(param_3 + 0x18))) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
    ::assign<v8::internal::Handle<v8::internal::Map>*>
              ((vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
                *)&local_b8,*(Handle **)(param_3 + 0x18),*(Handle **)(param_3 + 0x20));
    pNVar3 = local_90;
  }
  RemoveImpossibleReceiverMaps(this,pNVar3,(ZoneVector *)&local_b8);
  if ((long)local_b0 - (long)local_b8 == 8) {
    ObjectRef::ObjectRef((ObjectRef *)&local_88,*(undefined8 *)(this + 0x18),*local_b8,0);
    uVar7 = ObjectRef::IsMap((ObjectRef *)&local_88);
    if ((uVar7 & 1) == 0) {
LAB_0174b930:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    lVar14 = *(long *)(this + 0x18);
    if (*(char *)(lVar14 + 0x18) != '\x01') goto LAB_0174b954;
    pPStack_108 = *(PropertyAccessInfo **)(lVar14 + 0x28);
    local_110 = *(PropertyAccessInfo **)(lVar14 + 0x20);
    _local_f0 = NativeContextRef::global_proxy_object((NativeContextRef *)&local_110);
    _local_198 = HeapObjectRef::map((HeapObjectRef *)local_f0);
    uVar7 = ObjectRef::equals((ObjectRef *)&local_88,(ObjectRef *)local_198);
    if ((uVar7 & 1) != 0) {
      lVar14 = *(long *)(this + 0x18);
      if (*(char *)(lVar14 + 0x18) != '\x01') {
LAB_0174b954:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_c8 = *(undefined8 *)(lVar14 + 0x28);
      local_d0 = *(Node **)(lVar14 + 0x20);
      local_1d0 = NativeContextRef::global_object((NativeContextRef *)&local_d0);
      uVar7 = JSGlobalObjectRef::IsDetached((JSGlobalObjectRef *)local_1d0);
      pNVar3 = local_90;
      if ((uVar7 & 1) == 0) {
        lVar14 = *(long *)(this + 0x18);
        if (*(char *)(lVar14 + 0x18) == '\x01') {
          pPStack_108 = *(PropertyAccessInfo **)(lVar14 + 0x28);
          local_110 = *(PropertyAccessInfo **)(lVar14 + 0x20);
          auVar42 = NativeContextRef::global_object((NativeContextRef *)&local_110);
          _local_f0 = auVar42;
          JSGlobalObjectRef::GetPropertyCell(local_198,local_f0,param_3 + 8,0);
          if (local_198[0] != (ObjectRef)0x0) {
            pNVar3 = (Node *)ReduceGlobalAccess(this,param_1,pNVar3,param_2,param_3 + 8,param_5,
                                                param_6,&local_190);
            return pNVar3;
          }
          return (Node *)0x0;
        }
        goto LAB_0174b954;
      }
    }
  }
  puVar40 = local_b0;
  local_f8 = *(Zone **)(this + 0x40);
  local_f0 = (undefined1  [8])0x0;
  local_e8 = (PropertyAccessInfo *)0x0;
  local_110 = (PropertyAccessInfo *)0x0;
  pPStack_108 = (PropertyAccessInfo *)0x0;
  local_e0 = 0;
  local_100 = (PropertyAccessInfo *)0x0;
  pZStack_d8 = local_f8;
  for (puVar31 = local_b8; puVar31 != puVar40; puVar31 = puVar31 + 1) {
    ObjectRef::ObjectRef((ObjectRef *)&local_88,*(undefined8 *)(this + 0x18),*puVar31,0);
    uVar7 = ObjectRef::IsMap((ObjectRef *)&local_88);
    if ((uVar7 & 1) == 0) goto LAB_0174b930;
    uVar7 = MapRef::is_deprecated((MapRef *)&local_88);
    if ((uVar7 & 1) == 0) {
      JSHeapBroker::GetPropertyAccessInfo
                (local_198,*(undefined8 *)(this + 0x18),local_88,local_80,
                 *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),param_5,
                 *(undefined8 *)(this + 0x38),FLAG_concurrent_inlining ^ 1);
      if (pPStack_108 == local_100) {
        std::__ndk1::
        vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
        ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>
                  ((vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
                    *)&local_110,(PropertyAccessInfo *)local_198);
      }
      else {
        PropertyAccessInfo::PropertyAccessInfo(pPStack_108,(PropertyAccessInfo *)local_198);
        pPStack_108 = pPStack_108 + 0x88;
      }
      if (local_170 != 0) {
        local_168 = local_170;
      }
      if (local_190 != (Node *)0x0) {
        local_188 = local_190;
      }
    }
  }
  pJVar18 = this + 0x10;
  AccessInfoFactory::AccessInfoFactory
            ((AccessInfoFactory *)local_198,*(JSHeapBroker **)(this + 0x18),
             *(CompilationDependencies **)(this + 0x38),*(Zone **)**(undefined8 **)pJVar18);
  local_1b8 = (PropertyAccessInfo *)0x0;
  local_1b0 = (PropertyAccessInfo *)0x0;
  uVar7 = (long)pPStack_108 - (long)local_110;
  local_1a8 = (PropertyAccessInfo *)0x0;
  pZStack_1a0 = local_f8;
  if (uVar7 != 0) {
    if (0xf0f0f0 < (ulong)(((long)uVar7 >> 3) * -0xf0f0f0f0f0f0f0f)) goto LAB_0174b944;
    pPVar13 = *(PropertyAccessInfo **)(local_f8 + 0x10);
    if ((ulong)(*(long *)(local_f8 + 0x18) - (long)pPVar13) < uVar7) {
      pPVar13 = (PropertyAccessInfo *)Zone::NewExpand(local_f8,uVar7);
    }
    else {
      *(PropertyAccessInfo **)(local_f8 + 0x10) = pPVar13 + uVar7;
    }
    pPVar24 = pPStack_108;
    local_1a8 = pPVar13 + ((long)uVar7 >> 3) * 8;
    local_1b0 = pPVar13;
    local_1b8 = pPVar13;
    for (pPVar13 = local_110; pPVar13 != pPVar24; pPVar13 = pPVar13 + 0x88) {
      PropertyAccessInfo::PropertyAccessInfo(local_1b0,pPVar13);
      local_1b0 = local_1b0 + 0x88;
    }
  }
  uVar7 = AccessInfoFactory::FinalizePropertyAccessInfos
                    ((AccessInfoFactory *)local_198,&local_1b8,param_5,local_f0);
  pNVar3 = local_98;
  if (local_1b8 != (PropertyAccessInfo *)0x0) {
    while (pPVar13 = local_1b0, pPVar13 != local_1b8) {
      if (*(long *)(pPVar13 + -0x60) != 0) {
        *(long *)(pPVar13 + -0x58) = *(long *)(pPVar13 + -0x60);
      }
      local_1b0 = pPVar13 + -0x88;
      if (*(long *)(pPVar13 + -0x80) != 0) {
        *(long *)(pPVar13 + -0x78) = *(long *)(pPVar13 + -0x80);
      }
    }
    local_1b0 = local_1b8;
  }
  if (local_110 != (PropertyAccessInfo *)0x0) {
    while (pPVar13 = pPStack_108, pPVar13 != local_110) {
      if (*(long *)(pPVar13 + -0x60) != 0) {
        *(long *)(pPVar13 + -0x58) = *(long *)(pPVar13 + -0x60);
      }
      pPStack_108 = pPVar13 + -0x88;
      if (*(long *)(pPVar13 + -0x80) != 0) {
        *(long *)(pPVar13 + -0x78) = *(long *)(pPVar13 + -0x80);
      }
    }
    pPStack_108 = local_110;
  }
  if ((uVar7 & 1) == 0) {
    pNVar3 = (Node *)0x0;
  }
  else {
    if (param_6 != (Node *)0x0) {
      uVar7 = ObjectRef::IsSymbol((ObjectRef *)(param_3 + 8));
      if ((uVar7 & 1) == 0) {
        pOVar8 = (Operator *)
                 SimplifiedOperatorBuilder::CheckEqualsInternalizedString
                           (*(SimplifiedOperatorBuilder **)(*(long *)pJVar18 + 0x178));
      }
      else {
        pOVar8 = (Operator *)
                 SimplifiedOperatorBuilder::CheckEqualsSymbol
                           (*(SimplifiedOperatorBuilder **)(*(long *)pJVar18 + 0x178));
      }
      pGVar36 = *(Graph **)*(JSGraph **)pJVar18;
      pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar18,(ObjectRef *)(param_3 + 8));
      local_188 = pNVar3;
      local_198 = (undefined1  [8])pNVar6;
      local_190 = param_6;
      pNStack_180 = local_1e0;
      local_98 = (Node *)Graph::NewNode(pGVar36,pOVar8,4,(Node **)local_198,false);
    }
    local_f8 = *(Zone **)(this + 0x40);
    local_110 = (PropertyAccessInfo *)0x0;
    pPStack_108 = (PropertyAccessInfo *)0x0;
    local_100 = (PropertyAccessInfo *)0x0;
    local_d0 = (Node *)0x0;
    uVar7 = NodeProperties::IsExceptionalCall(param_1,&local_d0);
    pPVar24 = local_e8;
    local_1d0._0_8_ = *(undefined8 *)(this + 0x10);
    uVar33 = *(undefined8 *)(this + 0x18);
    local_1c0 = *(undefined8 *)(this + 0x38);
    pPVar13 = (PropertyAccessInfo *)&local_110;
    if ((uVar7 & 1) == 0) {
      pPVar13 = (PropertyAccessInfo *)0x0;
    }
    local_1d0._8_8_ = uVar33;
    if ((long)local_e8 - (long)local_f0 == 0x88) {
      PropertyAccessInfo::PropertyAccessInfo
                ((PropertyAccessInfo *)local_198,(PropertyAccessInfo *)local_f0);
      uVar7 = PropertyAccessBuilder::TryBuildStringCheck
                        ((PropertyAccessBuilder *)local_1d0,*(JSHeapBroker **)(this + 0x18),
                         (ZoneVector *)&local_190,&local_90,&local_98,local_1e0);
      if ((uVar7 & 1) == 0) {
        uVar7 = PropertyAccessBuilder::TryBuildNumberCheck
                          ((PropertyAccessBuilder *)local_1d0,*(JSHeapBroker **)(this + 0x18),
                           (ZoneVector *)&local_190,&local_90,&local_98,local_1e0);
        pNVar3 = local_188;
        if ((uVar7 & 1) == 0) {
          if (local_190 != local_188) {
            uVar33 = *(undefined8 *)(this + 0x18);
            pNVar6 = local_190;
            do {
              ObjectRef::ObjectRef((ObjectRef *)&local_88,uVar33,*(undefined8 *)pNVar6,0);
              uVar7 = ObjectRef::IsMap((ObjectRef *)&local_88);
              if ((uVar7 & 1) == 0) goto LAB_0174b930;
              uVar7 = MapRef::IsHeapNumberMap((MapRef *)&local_88);
              if ((uVar7 & 1) != 0) {
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         SimplifiedOperatorBuilder::ObjectIsSmi
                                   ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar18)[0x2f]);
                local_88 = local_90;
                pNVar3 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,&local_88,false);
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         CommonOperatorBuilder::Branch
                                   ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],0,1);
                local_88 = pNVar3;
                local_80 = local_1e0;
                pNVar6 = (Node *)Graph::NewNode(pGVar36,pOVar8,2,&local_88,false);
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         CommonOperatorBuilder::IfTrue
                                   ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
                local_88 = pNVar6;
                pNVar10 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,&local_88,false);
                pNVar3 = local_98;
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         CommonOperatorBuilder::IfFalse
                                   ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
                local_88 = pNVar6;
                pNVar6 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,&local_88,false);
                local_1d8 = local_98;
                PropertyAccessBuilder::BuildCheckMaps
                          ((PropertyAccessBuilder *)local_1d0,local_90,&local_1d8,pNVar6,
                           (ZoneVector *)&local_190);
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         CommonOperatorBuilder::Merge
                                   ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],2);
                local_88 = pNVar10;
                local_80 = pNVar6;
                local_1e0 = (Node *)Graph::NewNode(pGVar36,pOVar8,2,&local_88,false);
                pGVar36 = (Graph *)**(undefined8 **)pJVar18;
                pOVar8 = (Operator *)
                         CommonOperatorBuilder::EffectPhi
                                   ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],2);
                local_88 = pNVar3;
                local_80 = local_1d8;
                local_78 = local_1e0;
                local_98 = (Node *)Graph::NewNode(pGVar36,pOVar8,3,&local_88,false);
                goto LAB_0174b4d8;
              }
              pNVar6 = pNVar6 + 8;
            } while (pNVar3 != pNVar6);
          }
          PropertyAccessBuilder::BuildCheckMaps
                    ((PropertyAccessBuilder *)local_1d0,local_90,&local_98,local_1e0,
                     (ZoneVector *)&local_190);
        }
      }
LAB_0174b4d8:
      if (param_5 - 1U < 2) {
        BuildPropertyStore(&local_88,this,local_90,param_2,pNVar4,pNVar5,local_98,local_1e0,
                           (ZoneVector *)(param_3 + 8),pPVar13,local_198,param_5);
      }
      else if (param_5 == 3) {
        BuildPropertyTest((Node *)this,local_98,(PropertyAccessInfo *)local_1e0);
      }
      else {
        if (param_5 != 0) {
LAB_0174b948:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        BuildPropertyLoad((Node *)this,local_90,pNVar4,pNVar5,local_98,(NameRef *)local_1e0,
                          (ZoneVector *)(param_3 + 8),pPVar13);
      }
      local_98 = local_80;
      if (local_170 != 0) {
        local_168 = local_170;
      }
      pNVar4 = local_78;
      pNVar3 = local_88;
      if (local_190 != (Node *)0x0) {
        local_188 = local_190;
      }
    }
    else {
      pZVar17 = *(Zone **)(this + 0x40);
      auVar30 = local_f0;
      if (local_f0 != (undefined1  [8])local_e8) {
        while( true ) {
          puVar40 = *(undefined8 **)((long)auVar30 + 0x10);
          for (puVar31 = *(undefined8 **)((long)auVar30 + 8); puVar31 != puVar40;
              puVar31 = puVar31 + 1) {
            ObjectRef::ObjectRef((ObjectRef *)local_198,uVar33,*puVar31,0);
            uVar7 = ObjectRef::IsMap((ObjectRef *)local_198);
            if ((uVar7 & 1) == 0) goto LAB_0174b930;
            uVar7 = MapRef::IsHeapNumberMap((MapRef *)local_198);
            if ((uVar7 & 1) != 0) {
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       SimplifiedOperatorBuilder::ObjectIsSmi
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar18)[0x2f]);
              local_198 = (undefined1  [8])local_90;
              pNVar3 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,(Node **)local_198,false);
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       CommonOperatorBuilder::Branch
                                 ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],0,1);
              local_198 = (undefined1  [8])pNVar3;
              local_190 = local_1e0;
              pNVar3 = (Node *)Graph::NewNode(pGVar36,pOVar8,2,(Node **)local_198,false);
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       CommonOperatorBuilder::IfFalse
                                 ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
              local_198 = (undefined1  [8])pNVar3;
              local_1e0 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,(Node **)local_198,false);
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       CommonOperatorBuilder::IfTrue
                                 ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
              local_198 = (undefined1  [8])pNVar3;
              pNVar3 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,(Node **)local_198,false);
              goto LAB_0174ab0c;
            }
          }
          auVar30 = (undefined1  [8])((long)auVar30 + 0x88);
          if (auVar30 == (undefined1  [8])pPVar24) break;
          uVar33 = *(undefined8 *)(this + 0x18);
        }
      }
      pNVar3 = (Node *)0x0;
LAB_0174ab0c:
      if ((long)local_e8 - (long)local_f0 == 0) {
        ppNVar38 = (Node **)0x0;
        ppNVar32 = (Node **)0x0;
        ppNVar27 = (Node **)0x0;
        ppNVar35 = (Node **)0x0;
        ppNVar21 = (Node **)0x0;
        ppNVar28 = (Node **)0x0;
        ppNVar41 = (Node **)0x0;
        ppNVar25 = (Node **)0x0;
      }
      else {
        uVar7 = 0;
        ppNVar41 = (Node **)0x0;
        ppNVar28 = (Node **)0x0;
        ppNVar35 = (Node **)0x0;
        ppNVar27 = (Node **)0x0;
        ppNVar29 = (Node **)0x0;
        ppNVar32 = (Node **)0x0;
        uVar15 = ((long)local_e8 - (long)local_f0 >> 3) * -0xf0f0f0f0f0f0f0f;
        local_1f8 = (Node **)0x0;
        ppNVar23 = (Node **)0x0;
        ppNVar37 = (Node **)0x0;
        pNVar6 = local_98;
        do {
          pNVar10 = local_90;
          auVar30 = local_f0;
          pPVar24 = (PropertyAccessInfo *)((long)local_f0 + uVar7 * 0x88);
          pZVar1 = (ZoneVector *)(pPVar24 + 8);
          local_88 = local_98;
          if (uVar7 == uVar15 - 1) {
            PropertyAccessBuilder::BuildCheckMaps
                      ((PropertyAccessBuilder *)local_1d0,local_90,&local_88,local_1e0,pZVar1);
            bVar2 = false;
            local_230 = (Node *)0x0;
          }
          else {
            local_1d8 = (Node *)0x1;
            puVar40 = *(undefined8 **)((long)local_f0 + uVar7 * 0x88 + 0x10);
            for (puVar31 = *(undefined8 **)pZVar1; puVar31 != puVar40; puVar31 = puVar31 + 1) {
              ZoneHandleSet<v8::internal::Map>::insert
                        ((ZoneHandleSet<v8::internal::Map> *)&local_1d8,*puVar31,
                         *(undefined8 *)**(undefined8 **)pJVar18);
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            pOVar8 = (Operator *)
                     SimplifiedOperatorBuilder::CompareMaps
                               ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar18)[0x2f],
                                local_1d8);
            local_198 = (undefined1  [8])local_90;
            local_190 = local_88;
            local_188 = local_1e0;
            pNVar9 = (Node *)Graph::NewNode(pGVar36,pOVar8,3,(Node **)local_198,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            bVar2 = true;
            local_88 = pNVar9;
            pOVar8 = (Operator *)
                     CommonOperatorBuilder::Branch
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],0,1);
            local_198 = (undefined1  [8])pNVar9;
            local_190 = local_1e0;
            pNVar9 = (Node *)Graph::NewNode(pGVar36,pOVar8,2,(Node **)local_198,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            pOVar8 = (Operator *)
                     CommonOperatorBuilder::IfFalse
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
            local_198 = (undefined1  [8])pNVar9;
            local_230 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,(Node **)local_198,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            pOVar8 = (Operator *)
                     CommonOperatorBuilder::IfTrue
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1]);
            local_198 = (undefined1  [8])pNVar9;
            local_1e0 = (Node *)Graph::NewNode(pGVar36,pOVar8,1,(Node **)local_198,false);
          }
          uVar33 = *(undefined8 *)(this + 0x18);
          puVar40 = *(undefined8 **)((long)auVar30 + uVar7 * 0x88 + 0x10);
          for (puVar31 = *(undefined8 **)pZVar1; puVar31 != puVar40; puVar31 = puVar31 + 1) {
            ObjectRef::ObjectRef((ObjectRef *)local_198,uVar33,*puVar31,0);
            uVar15 = ObjectRef::IsMap((ObjectRef *)local_198);
            if ((uVar15 & 1) == 0) goto LAB_0174b930;
            uVar15 = MapRef::IsHeapNumberMap((MapRef *)local_198);
            if ((uVar15 & 1) != 0) {
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       CommonOperatorBuilder::Merge
                                 ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],2);
              local_198 = (undefined1  [8])local_1e0;
              local_190 = pNVar3;
              local_1e0 = (Node *)Graph::NewNode(pGVar36,pOVar8,2,(Node **)local_198,false);
              pGVar36 = (Graph *)**(undefined8 **)pJVar18;
              pOVar8 = (Operator *)
                       CommonOperatorBuilder::EffectPhi
                                 ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],2);
              local_198 = (undefined1  [8])local_88;
              local_190 = pNVar6;
              local_188 = local_1e0;
              local_88 = (Node *)Graph::NewNode(pGVar36,pOVar8,3,(Node **)local_198,false);
              pNVar6 = (Node *)0x0;
              pNVar3 = (Node *)0x0;
              goto LAB_0174ae5c;
            }
          }
          if (bVar2) {
            local_1d8 = (Node *)0x1;
            puVar40 = *(undefined8 **)((long)auVar30 + uVar7 * 0x88 + 0x10);
            for (puVar31 = *(undefined8 **)pZVar1; puVar31 != puVar40; puVar31 = puVar31 + 1) {
              ZoneHandleSet<v8::internal::Map>::insert
                        ((ZoneHandleSet<v8::internal::Map> *)&local_1d8,*puVar31,
                         *(undefined8 *)**(undefined8 **)pJVar18);
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            pOVar8 = (Operator *)
                     SimplifiedOperatorBuilder::MapGuard
                               ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar18)[0x2f],
                                local_1d8);
            local_198 = (undefined1  [8])local_90;
            local_190 = local_88;
            local_188 = local_1e0;
            local_88 = (Node *)Graph::NewNode(pGVar36,pOVar8,3,(Node **)local_198,false);
          }
LAB_0174ae5c:
          uVar15 = HasOnlyStringMaps(*(JSHeapBroker **)(this + 0x18),pZVar1);
          if ((uVar15 & 1) != 0) {
            pGVar36 = (Graph *)**(undefined8 **)pJVar18;
            pOVar8 = (Operator *)
                     CommonOperatorBuilder::TypeGuard
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],0x4021);
            local_198 = (undefined1  [8])local_90;
            local_190 = local_88;
            local_188 = local_1e0;
            pNVar10 = (Node *)Graph::NewNode(pGVar36,pOVar8,3,(Node **)local_198,false);
            local_88 = pNVar10;
          }
          if (param_5 - 1U < 2) {
            BuildPropertyStore(local_198,this,pNVar10,param_2,pNVar4,pNVar5,local_88,local_1e0,
                               (ZoneVector *)(param_3 + 8),pPVar13,pPVar24,param_5,param_1,pNVar6,
                               pNVar3);
          }
          else if (param_5 == 3) {
            BuildPropertyTest((Node *)this,local_88,(PropertyAccessInfo *)local_1e0);
          }
          else {
            if (param_5 != 0) goto LAB_0174b948;
            BuildPropertyLoad((Node *)this,pNVar10,pNVar4,pNVar5,local_88,(NameRef *)local_1e0,
                              (ZoneVector *)(param_3 + 8),pPVar13);
          }
          auVar30 = local_198;
          if (ppNVar41 < ppNVar28) {
            *ppNVar41 = (Node *)local_198;
            ppNVar25 = ppNVar23;
            ppNVar34 = ppNVar41;
          }
          else {
            lVar14 = (long)ppNVar41 - (long)ppNVar23 >> 3;
            uVar15 = lVar14 + 1;
            if (uVar15 >> 0x1c != 0) goto LAB_0174b944;
            uVar22 = (long)ppNVar28 - (long)ppNVar23 >> 2;
            if (uVar15 <= uVar22) {
              uVar15 = uVar22;
            }
            if (0x7fffffe < (ulong)((long)ppNVar28 - (long)ppNVar23 >> 3)) {
              uVar15 = 0xfffffff;
            }
            if (uVar15 == 0) {
              lVar16 = 0;
            }
            else {
              uVar22 = uVar15 * 8;
              lVar16 = *(long *)(pZVar17 + 0x10);
              if (uVar22 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
                  uVar22 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
                *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar22;
              }
              else {
                lVar16 = Zone::NewExpand(pZVar17,uVar22);
              }
            }
            ppNVar34 = (Node **)(lVar16 + lVar14 * 8);
            ppNVar28 = (Node **)(lVar16 + uVar15 * 8);
            *ppNVar34 = (Node *)auVar30;
            ppNVar25 = ppNVar34;
            while (ppNVar41 != ppNVar23) {
              ppNVar41 = ppNVar41 + -1;
              ppNVar25 = ppNVar25 + -1;
              *ppNVar25 = *ppNVar41;
            }
          }
          pNVar10 = local_190;
          if (ppNVar35 < ppNVar27) {
            *ppNVar35 = local_190;
            ppNVar21 = local_1f8;
            ppNVar23 = ppNVar35;
          }
          else {
            lVar14 = (long)ppNVar35 - (long)local_1f8 >> 3;
            uVar15 = lVar14 + 1;
            if (uVar15 >> 0x1c != 0) goto LAB_0174b944;
            uVar22 = (long)ppNVar27 - (long)local_1f8 >> 2;
            if (uVar15 <= uVar22) {
              uVar15 = uVar22;
            }
            if (0x7fffffe < (ulong)((long)ppNVar27 - (long)local_1f8 >> 3)) {
              uVar15 = 0xfffffff;
            }
            if (uVar15 == 0) {
              lVar16 = 0;
            }
            else {
              uVar22 = uVar15 * 8;
              lVar16 = *(long *)(pZVar17 + 0x10);
              if (uVar22 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
                  uVar22 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
                *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar22;
              }
              else {
                lVar16 = Zone::NewExpand(pZVar17,uVar22);
              }
            }
            ppNVar23 = (Node **)(lVar16 + lVar14 * 8);
            ppNVar27 = (Node **)(lVar16 + uVar15 * 8);
            *ppNVar23 = pNVar10;
            ppNVar21 = ppNVar23;
            while (ppNVar35 != local_1f8) {
              ppNVar35 = ppNVar35 + -1;
              ppNVar21 = ppNVar21 + -1;
              *ppNVar21 = *ppNVar35;
            }
          }
          pNVar10 = local_188;
          if (ppNVar32 < ppNVar29) {
            *ppNVar32 = local_188;
            ppNVar19 = ppNVar32;
            ppNVar38 = ppNVar37;
          }
          else {
            lVar14 = (long)ppNVar32 - (long)ppNVar37 >> 3;
            uVar15 = lVar14 + 1;
            if (uVar15 >> 0x1c != 0) goto LAB_0174b944;
            uVar22 = (long)ppNVar29 - (long)ppNVar37 >> 2;
            if (uVar15 <= uVar22) {
              uVar15 = uVar22;
            }
            if (0x7fffffe < (ulong)((long)ppNVar29 - (long)ppNVar37 >> 3)) {
              uVar15 = 0xfffffff;
            }
            if (uVar15 == 0) {
              lVar16 = 0;
            }
            else {
              uVar22 = uVar15 * 8;
              lVar16 = *(long *)(pZVar17 + 0x10);
              if (uVar22 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
                  uVar22 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
                *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar22;
              }
              else {
                lVar16 = Zone::NewExpand(pZVar17,uVar22);
              }
            }
            ppNVar19 = (Node **)(lVar16 + lVar14 * 8);
            ppNVar29 = (Node **)(lVar16 + uVar15 * 8);
            *ppNVar19 = pNVar10;
            ppNVar38 = ppNVar19;
            while (ppNVar32 != ppNVar37) {
              ppNVar32 = ppNVar32 + -1;
              ppNVar38 = ppNVar38 + -1;
              *ppNVar38 = *ppNVar32;
            }
          }
          uVar7 = uVar7 + 1;
          uVar15 = ((long)local_e8 - (long)local_f0 >> 3) * -0xf0f0f0f0f0f0f0f;
          ppNVar41 = ppNVar34 + 1;
          ppNVar35 = ppNVar23 + 1;
          ppNVar32 = ppNVar19 + 1;
          local_1e0 = local_230;
          ppNVar23 = ppNVar25;
          ppNVar37 = ppNVar38;
          local_1f8 = ppNVar21;
        } while (uVar7 < uVar15);
      }
      uVar7 = (ulong)((long)ppNVar32 - (long)ppNVar38) >> 3;
      iVar39 = (int)uVar7;
      if (iVar39 == 0) {
        puVar31 = *(undefined8 **)pJVar18;
        pNVar4 = (Node *)puVar31[0x2c];
        if (pNVar4 == (Node *)0x0) {
          pGVar36 = (Graph *)*puVar31;
          pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar31[1]);
          local_198 = (undefined1  [8])0x0;
          pNVar4 = (Node *)Graph::NewNode(pGVar36,pOVar8,0,(Node **)local_198,false);
          puVar31[0x2c] = pNVar4;
        }
        local_98 = pNVar4;
        pNVar3 = pNVar4;
      }
      else if (iVar39 == 1) {
        local_98 = *ppNVar21;
        pNVar4 = *ppNVar38;
        pNVar3 = *ppNVar25;
      }
      else {
        pGVar36 = (Graph *)**(undefined8 **)pJVar18;
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::Merge
                           ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],iVar39);
        pNVar4 = (Node *)Graph::NewNode(pGVar36,pOVar8,iVar39,ppNVar38,false);
        if (ppNVar41 == ppNVar28) {
          lVar14 = (long)ppNVar41 - (long)ppNVar25 >> 3;
          uVar15 = lVar14 + 1;
          if (uVar15 >> 0x1c != 0) goto LAB_0174b944;
          uVar22 = (long)ppNVar28 - (long)ppNVar25 >> 2;
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          if (0x7fffffe < (ulong)((long)ppNVar28 - (long)ppNVar25 >> 3)) {
            uVar15 = 0xfffffff;
          }
          if (uVar15 == 0) {
            lVar16 = 0;
          }
          else {
            uVar15 = uVar15 * 8;
            lVar16 = *(long *)(pZVar17 + 0x10);
            if (uVar15 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
                uVar15 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
              *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar15;
            }
            else {
              lVar16 = Zone::NewExpand(pZVar17,uVar15);
            }
          }
          ppNVar32 = (Node **)(lVar16 + lVar14 * 8);
          *ppNVar32 = pNVar4;
          while (ppNVar41 != ppNVar25) {
            ppNVar41 = ppNVar41 + -1;
            ppNVar32 = ppNVar32 + -1;
            *ppNVar32 = *ppNVar41;
          }
        }
        else {
          *ppNVar41 = pNVar4;
          ppNVar32 = ppNVar25;
        }
        pGVar36 = (Graph *)**(undefined8 **)pJVar18;
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::Phi
                           ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],8,
                            uVar7 & 0xffffffff);
        pNVar3 = (Node *)Graph::NewNode(pGVar36,pOVar8,iVar39 + 1,ppNVar32,false);
        if (ppNVar35 == ppNVar27) {
          lVar14 = (long)ppNVar35 - (long)ppNVar21 >> 3;
          uVar7 = lVar14 + 1;
          if (uVar7 >> 0x1c != 0) goto LAB_0174b944;
          uVar15 = (long)ppNVar27 - (long)ppNVar21 >> 2;
          if (uVar7 <= uVar15) {
            uVar7 = uVar15;
          }
          if (0x7fffffe < (ulong)((long)ppNVar27 - (long)ppNVar21 >> 3)) {
            uVar7 = 0xfffffff;
          }
          if (uVar7 == 0) {
            lVar16 = 0;
          }
          else {
            uVar7 = uVar7 * 8;
            lVar16 = *(long *)(pZVar17 + 0x10);
            if (uVar7 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
                uVar7 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
              *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar7;
            }
            else {
              lVar16 = Zone::NewExpand(pZVar17,uVar7);
            }
          }
          ppNVar41 = (Node **)(lVar16 + lVar14 * 8);
          *ppNVar41 = pNVar4;
          while (ppNVar35 != ppNVar21) {
            ppNVar35 = ppNVar35 + -1;
            ppNVar41 = ppNVar41 + -1;
            *ppNVar41 = *ppNVar35;
          }
        }
        else {
          *ppNVar35 = pNVar4;
          ppNVar41 = ppNVar21;
        }
        pGVar36 = (Graph *)**(undefined8 **)pJVar18;
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::EffectPhi
                           ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],iVar39);
        local_98 = (Node *)Graph::NewNode(pGVar36,pOVar8,iVar39 + 1,ppNVar41,false);
      }
    }
    if (local_110 != pPStack_108) {
      pGVar36 = (Graph *)**(undefined8 **)pJVar18;
      uVar7 = (ulong)(*(long *)(pPVar13 + 8) - *(long *)pPVar13) >> 3;
      iVar39 = (int)uVar7;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Merge
                         ((CommonOperatorBuilder *)(*(undefined8 **)pJVar18)[1],iVar39);
      uVar33 = Graph::NewNode(pGVar36,pOVar8,iVar39,*(Node ***)pPVar13,false);
      puVar31 = *(undefined8 **)(pPVar13 + 8);
      if (puVar31 == *(undefined8 **)(pPVar13 + 0x10)) {
        lVar14 = (long)puVar31 - *(long *)pPVar13 >> 3;
        uVar15 = lVar14 + 1;
        if (uVar15 >> 0x1c != 0) {
LAB_0174b944:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar16 = (long)*(undefined8 **)(pPVar13 + 0x10) - *(long *)pPVar13;
        uVar22 = lVar16 >> 2;
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (0x7fffffe < (ulong)(lVar16 >> 3)) {
          uVar15 = 0xfffffff;
        }
        if (uVar15 == 0) {
          lVar16 = 0;
        }
        else {
          pZVar17 = *(Zone **)(pPVar13 + 0x18);
          uVar22 = uVar15 * 8;
          lVar16 = *(long *)(pZVar17 + 0x10);
          if (uVar22 < (ulong)(*(long *)(pZVar17 + 0x18) - lVar16) ||
              uVar22 - (*(long *)(pZVar17 + 0x18) - lVar16) == 0) {
            *(ulong *)(pZVar17 + 0x10) = lVar16 + uVar22;
          }
          else {
            lVar16 = Zone::NewExpand(pZVar17,uVar22);
          }
        }
        puVar31 = (undefined8 *)(lVar16 + lVar14 * 8);
        puVar20 = puVar31 + 1;
        *puVar31 = uVar33;
        puVar40 = *(undefined8 **)pPVar13;
        puVar26 = *(undefined8 **)(pPVar13 + 8);
        while (puVar26 != puVar40) {
          puVar26 = puVar26 + -1;
          puVar31 = puVar31 + -1;
          *puVar31 = *puVar26;
        }
        *(undefined8 **)pPVar13 = puVar31;
        *(undefined8 **)(pPVar13 + 8) = puVar20;
        *(ulong *)(pPVar13 + 0x10) = lVar16 + uVar15 * 8;
      }
      else {
        *puVar31 = uVar33;
        *(long *)(pPVar13 + 8) = *(long *)(pPVar13 + 8) + 8;
      }
      pGVar36 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar39);
      uVar11 = Graph::NewNode(pGVar36,pOVar8,iVar39 + 1,*(Node ***)pPVar13,false);
      pGVar36 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,
                          uVar7 & 0xffffffff);
      uVar12 = Graph::NewNode(pGVar36,pOVar8,iVar39 + 1,*(Node ***)pPVar13,false);
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_d0,uVar12,uVar11,uVar33);
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar3,local_98,pNVar4)
    ;
  }
  if (local_f0 != (undefined1  [8])0x0) {
    while (pPVar13 = local_e8, (undefined1  [8])pPVar13 != local_f0) {
      if (*(long *)(pPVar13 + -0x60) != 0) {
        *(long *)(pPVar13 + -0x58) = *(long *)(pPVar13 + -0x60);
      }
      local_e8 = pPVar13 + -0x88;
      if (*(long *)(pPVar13 + -0x80) != 0) {
        *(long *)(pPVar13 + -0x78) = *(long *)(pPVar13 + -0x80);
      }
    }
  }
  return pNVar3;
}

