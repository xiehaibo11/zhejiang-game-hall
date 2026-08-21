
/* v8::internal::Module::GetModuleNamespace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>) */

ulong * v8::internal::Module::GetModuleNamespace(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  Isolate *local_f0;
  Isolate **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Zone *local_d0;
  long *local_c8;
  Zone *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  Zone aZStack_a8 [16];
  long *local_98;
  long lStack_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
  local_f0 = param_1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar13;
    param_1 = local_f0;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
    uVar13 = *puVar5;
  }
  if ((int)uVar13 == *(int *)(param_1 + 0xa0)) {
    Zone::Zone(aZStack_a8,*(AccountingAllocator **)(param_1 + 0x95d0),
               "../../src/objects/module.cc:300");
    local_e0 = 0;
    uStack_d8 = 0;
    local_c8 = (long *)0x0;
    uStack_b8 = 0;
    local_b0 = 0x3f800000;
    local_d0 = aZStack_a8;
    local_c0 = aZStack_a8;
    std::__ndk1::
    __hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
    ::__rehash((__hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
                *)&local_e0,2);
    uVar13 = *param_2;
    uVar12 = uVar13 & 0xffffffff00000000;
    pIVar6 = param_1;
    if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x44) {
      SourceTextModule::FetchStarExports(param_1,param_2,aZStack_a8,&local_e0);
      uVar13 = *param_2;
      uVar12 = uVar13 & 0xffffffff00000000;
      pIVar6 = local_f0;
    }
    uVar12 = uVar12 | *(uint *)(uVar13 + 3);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar12;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar12);
      uVar12 = *puVar5;
    }
    if ((int)*(uint *)(uVar12 + 7) >> 1 == 0) {
      plVar8 = (long *)0x0;
      plVar10 = (long *)0x0;
    }
    else {
      lVar18 = (long)((ulong)*(uint *)(uVar12 + 7) << 0x20) >> 0x21;
      uVar13 = lVar18 * 8;
      if (uVar13 < (ulong)(lStack_90 - (long)local_98) || uVar13 - (lStack_90 - (long)local_98) == 0
         ) {
        plVar10 = local_98;
        local_98 = local_98 + lVar18;
      }
      else {
        plVar10 = (long *)Zone::NewExpand(aZStack_a8,uVar13);
      }
      uVar12 = *puVar5;
      plVar8 = plVar10 + lVar18;
    }
    uVar1 = *(uint *)(uVar12 + 0xf);
    plVar16 = plVar10;
    if ((int)uVar1 >> 1 != 0) {
      lVar18 = 0;
      plVar14 = plVar10;
      plVar15 = plVar10;
      while( true ) {
        uVar2 = *(uint *)(uVar12 + (long)((int)lVar18 * 8 + 0xc) + 7);
        plVar10 = plVar14;
        plVar16 = plVar15;
        if ((uVar2 != *(uint *)(param_1 + 0xa8)) && (uVar2 != *(uint *)(param_1 + 0xa0))) {
          uVar13 = uVar12 & 0xffffffff00000000 | (ulong)uVar2;
          if (*(CanonicalHandleScope **)(local_f0 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar6 = local_f0 + 0x95a0;
            puVar7 = *(ulong **)pIVar6;
            if (puVar7 == *(ulong **)(local_f0 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(local_f0);
            }
            *(ulong **)pIVar6 = puVar7 + 1;
            *puVar7 = uVar13;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(local_f0 + 0x95b8),uVar13);
          }
          if (plVar15 < plVar8) {
            plVar16 = plVar15 + 1;
            *plVar15 = (long)puVar7;
          }
          else {
            lVar17 = (long)plVar15 - (long)plVar14 >> 3;
            uVar13 = lVar17 + 1;
            if (uVar13 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar12 = (long)plVar8 - (long)plVar14 >> 2;
            if (uVar13 <= uVar12) {
              uVar13 = uVar12;
            }
            if (0x7fffffe < (ulong)((long)plVar8 - (long)plVar14 >> 3)) {
              uVar13 = 0xfffffff;
            }
            if (uVar13 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              uVar12 = uVar13 * 8;
              if (uVar12 < (ulong)(lStack_90 - (long)local_98) ||
                  uVar12 - (lStack_90 - (long)local_98) == 0) {
                plVar8 = local_98;
                local_98 = local_98 + uVar13;
              }
              else {
                plVar8 = (long *)Zone::NewExpand(aZStack_a8,uVar12);
              }
            }
            plVar10 = plVar8 + lVar17;
            plVar8 = plVar8 + uVar13;
            plVar16 = plVar10 + 1;
            *plVar10 = (long)puVar7;
            while (plVar15 != plVar14) {
              plVar15 = plVar15 + -1;
              plVar10 = plVar10 + -1;
              *plVar10 = *plVar15;
            }
          }
        }
        lVar18 = lVar18 + 1;
        if (lVar18 == (long)((ulong)uVar1 << 0x20) >> 0x21) break;
        uVar12 = *puVar5;
        plVar14 = plVar10;
        plVar15 = plVar16;
      }
    }
    local_e8 = &local_f0;
    FUN_010f4290(plVar10,plVar16,&local_e8);
    puVar5 = (ulong *)Factory::NewJSModuleNamespace((Factory *)local_f0);
    uVar12 = *puVar5;
    uVar13 = *param_2;
    *(int *)(uVar12 + 0xb) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xb,uVar13);
        uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xb,uVar13);
      }
    }
    uVar12 = *param_2;
    uVar13 = *puVar5;
    *(int *)(uVar12 + 0xf) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar13);
        uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar13);
      }
    }
    JSObject::NormalizeProperties
              (local_f0,puVar5,0,(ulong)((long)plVar16 - (long)plVar10) >> 3,"JSModuleNamespace");
    for (; plVar16 != plVar10; plVar10 = plVar10 + 1) {
      lVar18 = *plVar10;
      uVar9 = Accessors::MakeModuleNamespaceEntryInfo(local_f0,lVar18);
      JSObject::SetNormalizedProperty(puVar5,lVar18,uVar9,0xe1);
    }
    cVar4 = JSObject::PreventExtensions(puVar5,0);
    if (cVar4 == '\0') {
      v8::V8::FromJustIsNothing();
    }
    JSObject::OptimizeAsPrototype(puVar5,1);
    puVar7 = (ulong *)Map::GetOrCreatePrototypeInfo(puVar5,local_f0);
    uVar12 = *puVar7;
    uVar13 = *puVar5;
    *(int *)(uVar12 + 3) = (int)uVar13;
    plVar10 = local_c8;
    if ((uVar13 & 1) != 0) {
      uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 3,uVar13);
        uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      plVar10 = local_c8;
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 3,uVar13);
        plVar10 = local_c8;
      }
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    }
    Zone::~Zone(aZStack_a8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

