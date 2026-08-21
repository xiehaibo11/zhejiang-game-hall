
/* v8::internal::compiler::JSCallReducer::ReduceRegExpPrototypeTest(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceRegExpPrototypeTest(JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  PropertyAccessInfo *pPVar6;
  undefined8 uVar7;
  long lVar8;
  Node *this_00;
  Node *pNVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  Node *pNVar13;
  Node *this_01;
  Node *pNVar14;
  Operator *pOVar15;
  AccessBuilder *this_02;
  Node *this_03;
  Node *pNVar16;
  PropertyAccessInfo *pPVar17;
  long lVar18;
  undefined8 *puVar19;
  CompilationDependencies *pCVar20;
  Graph *pGVar21;
  Use *pUVar22;
  SimplifiedOperatorBuilder *this_04;
  undefined1 local_228 [8];
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200 [16];
  PropertyAccessInfo *local_1f0;
  PropertyAccessInfo *local_1e8;
  PropertyAccessInfo *local_1e0;
  Zone *pZStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [8];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  long local_168;
  undefined8 local_160;
  undefined1 local_158;
  AccessInfoFactory aAStack_138 [32];
  PropertyAccessInfo *local_118;
  PropertyAccessInfo *local_110;
  PropertyAccessInfo *local_108;
  Zone *local_100;
  Node *local_f8;
  Node *local_f0;
  AccessBuilder *pAStack_e8;
  Node *local_e0;
  undefined1 local_d8 [16];
  Node *local_c8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (((FLAG_force_slow_path != '\0') || (*(int *)(*(Operator **)param_1 + 0x14) < 3)) ||
     (lVar8 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar8 + 3) >> 4 & 1) != 0)) {
    param_1 = (Node *)0x0;
    goto LAB_016ee3d4;
  }
  local_f8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar18 = *(long *)(this + 0x18);
  if (*(char *)(lVar18 + 0x18) != '\x01') {
LAB_016eec68:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_98 = *(undefined8 *)(lVar18 + 0x28);
  local_a0 = *(undefined8 *)(lVar18 + 0x20);
  local_d8 = NativeContextRef::regexp_function((NativeContextRef *)&local_a0);
  _local_1c0 = JSFunctionRef::initial_map((JSFunctionRef *)local_d8);
  uVar10 = MapRef::object((MapRef *)local_1c0);
  MapInference::MapInference
            ((MapInference *)&local_a0,*(JSHeapBroker **)(this + 0x18),pNVar9,local_f8);
  uVar11 = MapInference::Is((MapInference *)&local_a0,uVar10);
  if ((uVar11 & 1) == 0) {
    param_1 = (Node *)MapInference::NoChange((MapInference *)&local_a0);
  }
  else {
    plVar12 = (long *)MapInference::GetMaps((MapInference *)&local_a0);
    local_100 = *(Zone **)**(undefined8 **)(this + 0x10);
    local_118 = (PropertyAccessInfo *)0x0;
    local_110 = (PropertyAccessInfo *)0x0;
    local_108 = (PropertyAccessInfo *)0x0;
    AccessInfoFactory::AccessInfoFactory
              (aAStack_138,*(JSHeapBroker **)(this + 0x18),
               *(CompilationDependencies **)(this + 0x30),*(Zone **)**(undefined8 **)(this + 0x10));
    if (FLAG_concurrent_inlining == '\0') {
      puVar19 = (undefined8 *)*plVar12;
      puVar2 = (undefined8 *)plVar12[1];
      local_1b8 = (undefined8 *)0x0;
      local_1b0 = (undefined8 *)0x0;
      local_1c0 = (undefined1  [8])0x0;
      auVar5 = ZEXT816(0);
      uVar11 = (long)puVar2 - (long)puVar19;
      if (uVar11 != 0) {
        if ((ulong)((long)uVar11 >> 3) >> 0x3d != 0) goto LAB_016eec7c;
        local_1c0 = (undefined1  [8])operator_new(uVar11);
        local_1b0 = (undefined8 *)((long)local_1c0 + ((long)uVar11 >> 3) * 8);
        local_1b8 = (undefined8 *)local_1c0;
        for (; puVar19 != puVar2; puVar19 = puVar19 + 1) {
          *local_1b8 = *puVar19;
          local_1b8 = local_1b8 + 1;
        }
      }
      AccessInfoFactory::ComputePropertyAccessInfos
                (aAStack_138,local_1c0,*(long *)(*(long *)(this + 0x10) + 0x168) + 0x6a0,0,
                 &local_118);
      if (local_1c0 != (undefined1  [8])0x0) {
        local_1b8 = (undefined8 *)local_1c0;
        operator_delete((void *)local_1c0);
      }
    }
    else {
      puVar2 = (undefined8 *)plVar12[1];
      for (puVar19 = (undefined8 *)*plVar12; puVar19 != puVar2; puVar19 = puVar19 + 1) {
        ObjectRef::ObjectRef((ObjectRef *)local_d8,*(undefined8 *)(this + 0x18),*puVar19,0);
        uVar11 = ObjectRef::IsMap((ObjectRef *)local_d8);
        uVar7 = local_d8._8_8_;
        uVar10 = local_d8._0_8_;
        if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        uVar3 = *(undefined8 *)(this + 0x18);
        ObjectRef::ObjectRef
                  ((ObjectRef *)&local_1d0,uVar3,*(long *)(*(long *)(this + 0x10) + 0x168) + 0x6a0,0
                  );
        uVar11 = ObjectRef::IsName((ObjectRef *)&local_1d0);
        if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsName()");
        }
        JSHeapBroker::GetPropertyAccessInfo(local_1c0,uVar3,uVar10,uVar7,local_1d0,uStack_1c8,0,0,0)
        ;
        if (local_110 == local_108) {
          std::__ndk1::
          vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
          ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>
                    ((vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
                      *)&local_118,(PropertyAccessInfo *)local_1c0);
        }
        else {
          PropertyAccessInfo::PropertyAccessInfo(local_110,(PropertyAccessInfo *)local_1c0);
          local_110 = local_110 + 0x88;
        }
        if (local_1b8 != (undefined8 *)0x0) {
          local_1b0 = local_1b8;
        }
      }
    }
    local_1f0 = (PropertyAccessInfo *)0x0;
    local_1e8 = (PropertyAccessInfo *)0x0;
    uVar11 = (long)local_110 - (long)local_118;
    local_1e0 = (PropertyAccessInfo *)0x0;
    pZStack_1d8 = local_100;
    if (uVar11 != 0) {
      auVar5 = _local_1c0;
      if (0xf0f0f0 < (ulong)(((long)uVar11 >> 3) * -0xf0f0f0f0f0f0f0f)) {
LAB_016eec7c:
        _local_1c0 = auVar5;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pPVar17 = *(PropertyAccessInfo **)(local_100 + 0x10);
      if ((ulong)(*(long *)(local_100 + 0x18) - (long)pPVar17) < uVar11) {
        pPVar17 = (PropertyAccessInfo *)Zone::NewExpand(local_100,uVar11);
      }
      else {
        *(PropertyAccessInfo **)(local_100 + 0x10) = pPVar17 + uVar11;
      }
      pPVar6 = local_110;
      local_1e0 = pPVar17 + ((long)uVar11 >> 3) * 8;
      local_1e8 = pPVar17;
      local_1f0 = pPVar17;
      for (pPVar17 = local_118; pPVar17 != pPVar6; pPVar17 = pPVar17 + 0x88) {
        PropertyAccessInfo::PropertyAccessInfo(local_1e8,pPVar17);
        local_1e8 = local_1e8 + 0x88;
      }
    }
    AccessInfoFactory::FinalizePropertyAccessInfosAsOne(local_1c0,aAStack_138,&local_1f0,0);
    auVar5._8_8_ = local_200._8_8_;
    auVar5._0_8_ = local_200._0_8_;
    if (local_1f0 != (PropertyAccessInfo *)0x0) {
      while (pPVar17 = local_1e8, pPVar17 != local_1f0) {
        if (*(long *)(pPVar17 + -0x60) != 0) {
          *(long *)(pPVar17 + -0x58) = *(long *)(pPVar17 + -0x60);
        }
        local_1e8 = pPVar17 + -0x88;
        if (*(long *)(pPVar17 + -0x80) != 0) {
          *(long *)(pPVar17 + -0x78) = *(long *)(pPVar17 + -0x80);
        }
      }
      local_1e8 = local_1f0;
    }
    if ((local_1c0._0_4_ == 3) && (local_200 = auVar5, local_168 != 0)) {
      ObjectRef::ObjectRef((ObjectRef *)&local_f0,*(undefined8 *)(this + 0x18),local_168,0);
      uVar11 = ObjectRef::IsJSObject((ObjectRef *)&local_f0);
      if ((uVar11 & 1) == 0) {
LAB_016eec80:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSObject()");
      }
      JSObjectRef::GetOwnDataProperty(local_d8,&local_f0,local_158,local_160,0);
      if (local_d8[0] == (JSFunctionRef)0x0) goto LAB_016ee660;
      lVar18 = *(long *)(this + 0x18);
      if (*(char *)(lVar18 + 0x18) != '\x01') goto LAB_016eec68;
      uStack_208 = *(undefined8 *)(lVar18 + 0x28);
      local_210 = *(undefined8 *)(lVar18 + 0x20);
      local_200 = NativeContextRef::regexp_exec_function((NativeContextRef *)&local_210);
      uVar11 = ObjectRef::equals((ObjectRef *)(local_d8 + 8),(ObjectRef *)local_200);
      if ((uVar11 & 1) == 0) goto LAB_016ee660;
      pCVar20 = *(CompilationDependencies **)(this + 0x30);
      ObjectRef::ObjectRef((ObjectRef *)local_200,*(undefined8 *)(this + 0x18),local_168,0);
      uVar11 = ObjectRef::IsJSObject((ObjectRef *)local_200);
      if ((uVar11 & 1) == 0) goto LAB_016eec80;
      local_228[0] = 1;
      local_220 = local_200;
      CompilationDependencies::
      DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
                (pCVar20,&local_1b8,1,local_228);
      pFVar1 = (FeedbackSource *)(lVar8 + 8);
      MapInference::RelyOnMapsPreferStability
                ((MapInference *)&local_a0,*(CompilationDependencies **)(this + 0x30),
                 *(JSGraph **)(this + 0x10),&local_f8,this_00,pFVar1);
      pNVar13 = (Node *)NodeProperties::GetContextInput(param_1);
      this_01 = (Node *)NodeProperties::GetFrameStateInput(param_1);
      pNVar14 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar15 = (Operator *)
                SimplifiedOperatorBuilder::CheckString
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1
                          );
      local_d8._8_8_ = local_f8;
      local_d8._0_8_ = pNVar14;
      local_c8 = this_00;
      this_02 = (AccessBuilder *)Graph::NewNode(pGVar21,pOVar15,3,(Node **)local_d8,false);
      pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
      this_04 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      local_f8 = (Node *)this_02;
      AccessBuilder::ForJSRegExpLastIndex(this_02);
      pOVar15 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_04,(FieldAccess *)local_d8);
      pAStack_e8 = (AccessBuilder *)local_f8;
      local_f0 = pNVar9;
      local_e0 = this_00;
      pNVar14 = (Node *)Graph::NewNode(pGVar21,pOVar15,3,&local_f0,false);
      pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
      local_f8 = pNVar14;
      pOVar15 = (Operator *)
                SimplifiedOperatorBuilder::CheckSmi
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1
                          );
      local_d8._8_8_ = local_f8;
      local_d8._0_8_ = pNVar14;
      local_c8 = this_00;
      pNVar14 = (Node *)Graph::NewNode(pGVar21,pOVar15,3,(Node **)local_d8,false);
      pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
      local_f8 = pNVar14;
      pOVar15 = (Operator *)
                SimplifiedOperatorBuilder::NumberLessThanOrEqual
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_d8._0_8_ = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      local_d8._8_8_ = pNVar14;
      pNVar14 = (Node *)Graph::NewNode(pGVar21,pOVar15,2,(Node **)local_d8,false);
      pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar15 = (Operator *)
                SimplifiedOperatorBuilder::CheckIf
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x1a,
                           pFVar1);
      local_d8._8_8_ = local_f8;
      local_d8._0_8_ = pNVar14;
      local_c8 = this_00;
      local_f8 = (Node *)Graph::NewNode(pGVar21,pOVar15,3,(Node **)local_d8,false);
      pNVar14 = param_1 + 0x20;
      pNVar16 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar16 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      this_03 = *(Node **)pNVar16;
      if (this_03 != pNVar9) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x18);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x18);
        }
        if (this_03 != (Node *)0x0) {
          Node::RemoveUse(this_03,pUVar22);
        }
        *(Node **)pNVar16 = pNVar9;
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,pUVar22);
        }
      }
      pNVar9 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      pNVar16 = *(Node **)(pNVar9 + 8);
      if (pNVar16 != (Node *)this_02) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x30);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x30);
        }
        if (pNVar16 != (Node *)0x0) {
          Node::RemoveUse(pNVar16,pUVar22);
        }
        *(AccessBuilder **)(pNVar9 + 8) = this_02;
        if (this_02 != (AccessBuilder *)0x0) {
          Node::AppendUse((Node *)this_02,pUVar22);
        }
      }
      pNVar9 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      pNVar16 = *(Node **)(pNVar9 + 0x10);
      if (pNVar16 != pNVar13) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x48);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x48);
        }
        if (pNVar16 != (Node *)0x0) {
          Node::RemoveUse(pNVar16,pUVar22);
        }
        *(Node **)(pNVar9 + 0x10) = pNVar13;
        if (pNVar13 != (Node *)0x0) {
          Node::AppendUse(pNVar13,pUVar22);
        }
      }
      pNVar9 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      pNVar16 = *(Node **)(pNVar9 + 0x18);
      if (pNVar16 != this_01) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x60);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x60);
        }
        if (pNVar16 != (Node *)0x0) {
          Node::RemoveUse(pNVar16,pUVar22);
        }
        *(Node **)(pNVar9 + 0x18) = this_01;
        if (this_01 != (Node *)0x0) {
          Node::AppendUse(this_01,pUVar22);
        }
      }
      pNVar16 = local_f8;
      pNVar9 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      pNVar13 = *(Node **)(pNVar9 + 0x20);
      if (pNVar13 != local_f8) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x78);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x78);
        }
        if (pNVar13 != (Node *)0x0) {
          Node::RemoveUse(pNVar13,pUVar22);
        }
        *(Node **)(pNVar9 + 0x20) = pNVar16;
        if (pNVar16 != (Node *)0x0) {
          Node::AppendUse(pNVar16,pUVar22);
        }
      }
      pNVar9 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      pNVar16 = *(Node **)(pNVar9 + 0x28);
      if (pNVar16 != this_00) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar22 = (Use *)(*(long *)pNVar14 + -0x90);
        }
        else {
          pUVar22 = (Use *)(param_1 + -0x90);
        }
        if (pNVar16 != (Node *)0x0) {
          Node::RemoveUse(pNVar16,pUVar22);
        }
        *(Node **)(pNVar9 + 0x28) = this_00;
        if (this_00 != (Node *)0x0) {
          Node::AppendUse(this_00,pUVar22);
        }
      }
      Node::TrimInputCount(param_1,6);
      pOVar15 = (Operator *)
                JSOperatorBuilder::RegExpTest
                          (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
      NodeProperties::ChangeOp(param_1,pOVar15);
    }
    else {
LAB_016ee660:
      param_1 = (Node *)MapInference::NoChange((MapInference *)&local_a0);
    }
    if (local_1b8 != (undefined8 *)0x0) {
      local_1b0 = local_1b8;
    }
    if (local_118 != (PropertyAccessInfo *)0x0) {
      while (pPVar17 = local_110, local_110 = local_118, pPVar17 != local_118) {
        if (*(long *)(pPVar17 + -0x60) != 0) {
          *(long *)(pPVar17 + -0x58) = *(long *)(pPVar17 + -0x60);
        }
        local_110 = pPVar17 + -0x88;
        if (*(long *)(pPVar17 + -0x80) != 0) {
          *(long *)(pPVar17 + -0x78) = *(long *)(pPVar17 + -0x80);
        }
      }
    }
  }
  MapInference::~MapInference((MapInference *)&local_a0);
LAB_016ee3d4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

