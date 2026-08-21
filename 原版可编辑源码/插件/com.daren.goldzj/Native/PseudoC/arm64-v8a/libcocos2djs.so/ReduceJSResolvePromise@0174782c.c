
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSResolvePromise(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSResolvePromise
          (JSNativeContextSpecialization *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  PropertyAccessInfo *pPVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  undefined8 uVar10;
  Node *pNVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  Operator *pOVar15;
  PropertyAccessInfo *pPVar16;
  Graph *this_00;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  PropertyAccessInfo *local_1c0;
  PropertyAccessInfo *local_1b8;
  PropertyAccessInfo *local_1b0;
  Zone *pZStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  int local_190 [2];
  long local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  AccessInfoFactory aAStack_108 [32];
  PropertyAccessInfo *local_e8;
  PropertyAccessInfo *local_e0;
  PropertyAccessInfo *local_d8;
  Zone *local_d0;
  Node *local_c8;
  Node *local_c0;
  undefined8 local_b8;
  Node *local_b0;
  undefined8 uStack_a8;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar10 = NodeProperties::GetContextInput(param_1);
  pNVar11 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar12 = NodeProperties::GetControlInput(param_1,0);
  MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar9,pNVar11);
  uVar13 = MapInference::HaveMaps(aMStack_a0);
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    plVar14 = (long *)MapInference::GetMaps(aMStack_a0);
    local_d0 = *(Zone **)**(undefined8 **)(this + 0x10);
    local_e8 = (PropertyAccessInfo *)0x0;
    local_e0 = (PropertyAccessInfo *)0x0;
    local_d8 = (PropertyAccessInfo *)0x0;
    AccessInfoFactory::AccessInfoFactory
              (aAStack_108,*(JSHeapBroker **)(this + 0x18),
               *(CompilationDependencies **)(this + 0x38),*(Zone **)**(undefined8 **)(this + 0x10));
    if (FLAG_concurrent_inlining == '\0') {
      AccessInfoFactory::ComputePropertyAccessInfos
                (aAStack_108,plVar14,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xa38,0,&local_e8);
    }
    else {
      puVar2 = (undefined8 *)plVar14[1];
      for (puVar1 = (undefined8 *)*plVar14; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        ObjectRef::ObjectRef((ObjectRef *)&local_c8,*(undefined8 *)(this + 0x18),*puVar1,0);
        uVar13 = ObjectRef::IsMap((ObjectRef *)&local_c8);
        pNVar7 = local_c0;
        pNVar6 = local_c8;
        if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        uVar3 = *(undefined8 *)(this + 0x18);
        ObjectRef::ObjectRef
                  ((ObjectRef *)&local_1a0,uVar3,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xa38,0
                  );
        uVar13 = ObjectRef::IsName((ObjectRef *)&local_1a0);
        if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsName()");
        }
        JSHeapBroker::GetPropertyAccessInfo
                  (local_190,uVar3,pNVar6,pNVar7,local_1a0,uStack_198,0,0,0);
        if (local_e0 < local_d8) {
          *(undefined8 *)(local_e0 + 0x10) = 0;
          *(undefined8 *)(local_e0 + 0x18) = 0;
          *(undefined8 *)(local_e0 + 8) = 0;
          *(int *)local_e0 = local_190[0];
          *(undefined8 *)(local_e0 + 0x20) = local_170;
          *(undefined8 *)(local_e0 + 0x28) = 0;
          *(long *)(local_e0 + 8) = local_188;
          *(long *)(local_e0 + 0x10) = local_180;
          *(undefined8 *)(local_e0 + 0x18) = local_178;
          local_188 = 0;
          local_180 = 0;
          local_178 = 0;
          *(undefined8 *)(local_e0 + 0x30) = 0;
          *(undefined8 *)(local_e0 + 0x38) = 0;
          *(undefined8 *)(local_e0 + 0x40) = local_150;
          *(long *)(local_e0 + 0x28) = local_168;
          *(long *)(local_e0 + 0x30) = local_160;
          *(undefined8 *)(local_e0 + 0x38) = local_158;
          local_168 = 0;
          local_160 = 0;
          local_158 = 0;
          *(undefined8 *)(local_e0 + 0x80) = uStack_110;
          *(undefined8 *)(local_e0 + 0x78) = uStack_118;
          *(undefined8 *)(local_e0 + 0x70) = uStack_120;
          *(undefined8 *)(local_e0 + 0x68) = local_128;
          *(undefined8 *)(local_e0 + 0x60) = uStack_130;
          *(undefined8 *)(local_e0 + 0x58) = uStack_138;
          *(undefined8 *)(local_e0 + 0x50) = uStack_140;
          *(undefined8 *)(local_e0 + 0x48) = local_148;
          local_e0 = local_e0 + 0x88;
        }
        else {
          std::__ndk1::
          vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
          ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo>
                    ((vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
                      *)&local_e8,(PropertyAccessInfo *)local_190);
          if (local_168 != 0) {
            local_160 = local_168;
          }
          if (local_188 != 0) {
            local_180 = local_188;
          }
        }
      }
    }
    local_1c0 = (PropertyAccessInfo *)0x0;
    local_1b8 = (PropertyAccessInfo *)0x0;
    uVar13 = (long)local_e0 - (long)local_e8;
    local_1b0 = (PropertyAccessInfo *)0x0;
    pZStack_1a8 = local_d0;
    if (uVar13 != 0) {
      if (0xf0f0f0 < (ulong)(((long)uVar13 >> 3) * -0xf0f0f0f0f0f0f0f)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pPVar16 = *(PropertyAccessInfo **)(local_d0 + 0x10);
      if ((ulong)(*(long *)(local_d0 + 0x18) - (long)pPVar16) < uVar13) {
        pPVar16 = (PropertyAccessInfo *)Zone::NewExpand(local_d0,uVar13);
      }
      else {
        *(PropertyAccessInfo **)(local_d0 + 0x10) = pPVar16 + uVar13;
      }
      pPVar5 = local_e0;
      local_1b0 = pPVar16 + ((long)uVar13 >> 3) * 8;
      local_1b8 = pPVar16;
      local_1c0 = pPVar16;
      for (pPVar16 = local_e8; pPVar16 != pPVar5; pPVar16 = pPVar16 + 0x88) {
        PropertyAccessInfo::PropertyAccessInfo(local_1b8,pPVar16);
        local_1b8 = local_1b8 + 0x88;
      }
    }
    AccessInfoFactory::FinalizePropertyAccessInfosAsOne(local_190,aAStack_108,&local_1c0,0);
    if (local_1c0 != (PropertyAccessInfo *)0x0) {
      while (pPVar16 = local_1b8, pPVar16 != local_1c0) {
        if (*(long *)(pPVar16 + -0x60) != 0) {
          *(long *)(pPVar16 + -0x58) = *(long *)(pPVar16 + -0x60);
        }
        local_1b8 = pPVar16 + -0x88;
        if (*(long *)(pPVar16 + -0x80) != 0) {
          *(long *)(pPVar16 + -0x78) = *(long *)(pPVar16 + -0x80);
        }
      }
      local_1b8 = local_1c0;
    }
    if ((local_190[0] == 1) &&
       (uVar13 = MapInference::RelyOnMapsViaStability
                           (aMStack_a0,*(CompilationDependencies **)(this + 0x38)),
       (uVar13 & 1) != 0)) {
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1d8 = 0;
      CompilationDependencies::
      DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
                (*(CompilationDependencies **)(this + 0x38),&local_188,1,&local_1d8);
      this_00 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar15 = (Operator *)
                JSOperatorBuilder::FulfillPromise
                          ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
      local_c8 = pNVar8;
      local_c0 = pNVar9;
      local_b8 = uVar10;
      local_b0 = pNVar11;
      uStack_a8 = uVar12;
      uVar10 = Graph::NewNode(this_00,pOVar15,5,&local_c8,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar10,uVar10,uVar12)
      ;
    }
    else {
      uVar10 = MapInference::NoChange(aMStack_a0);
    }
    if (local_168 != 0) {
      local_160 = local_168;
    }
    if (local_188 != 0) {
      local_180 = local_188;
    }
    if (local_e8 != (PropertyAccessInfo *)0x0) {
      while (pPVar16 = local_e0, local_e0 = local_e8, pPVar16 != local_e8) {
        if (*(long *)(pPVar16 + -0x60) != 0) {
          *(long *)(pPVar16 + -0x58) = *(long *)(pPVar16 + -0x60);
        }
        local_e0 = pPVar16 + -0x88;
        if (*(long *)(pPVar16 + -0x80) != 0) {
          *(long *)(pPVar16 + -0x78) = *(long *)(pPVar16 + -0x80);
        }
      }
    }
  }
  MapInference::~MapInference(aMStack_a0);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

