
/* v8::internal::SourceTextModule::FinishInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>,
   v8::internal::ZoneForwardList<v8::internal::Handle<v8::internal::SourceTextModule> >*, unsigned
   int*, v8::internal::Zone*) */

void v8::internal::SourceTextModule::FinishInstantiate
               (Isolate *param_1,ulong *param_2,long *param_3,int *param_4,undefined8 param_5)

{
  Isolate *pIVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  Zone *this;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong *local_128;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0 [3];
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar17 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
  }
  uVar17 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar17 = uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar17;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
  }
  puVar8 = (ulong *)Factory::NewFunctionFromSharedFunctionInfo((Factory *)param_1,puVar8,puVar9,1);
  uVar18 = *param_2;
  uVar17 = *puVar8;
  *(int *)(uVar18 + 0x17) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar14 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x17,uVar17);
      uVar14 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x17,uVar17);
    }
  }
  local_b0[0] = *param_2;
  Module::SetStatus((Module *)local_b0,2);
  *(int *)(*param_2 + 0x37) = *param_4 << 1;
  *(int *)(*param_2 + 0x3b) = *param_4 << 1;
  this = (Zone *)param_3[1];
  plVar16 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar16) < 0x10) {
    plVar16 = (long *)Zone::NewExpand(this,0x10);
  }
  else {
    *(long **)(this + 0x10) = plVar16 + 2;
  }
  plVar16[1] = (long)param_2;
  *plVar16 = *param_3;
  *param_3 = (long)plVar16;
  *param_4 = *param_4 + 1;
  uVar17 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x23);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
    uVar17 = *puVar8;
  }
  uVar4 = *(uint *)(uVar17 + 3);
  if (1 < (int)uVar4) {
    iVar20 = 0;
    uVar18 = 1;
    while( true ) {
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + (long)iVar20 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar17;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      }
      uVar17 = Module::FinishInstantiate(param_1,puVar9,param_3,param_4,param_5);
      if ((uVar17 & 1) == 0) goto LAB_0112d1ac;
      if ((*(uint *)(*puVar9 + 0xb) & 0xfffffffe) == 4) {
        iVar2 = *(int *)(*param_2 + 0x3b) >> 1;
        iVar3 = *(int *)(*puVar9 + 0x3b) >> 1;
        if (iVar2 <= iVar3) {
          iVar3 = iVar2;
        }
        *(int *)(*param_2 + 0x3b) = iVar3 << 1;
      }
      if (uVar4 >> 1 <= uVar18) break;
      uVar17 = *puVar8;
      iVar20 = iVar20 + 4;
      uVar18 = uVar18 + 1;
    }
  }
  uVar17 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x27);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_128 = *(ulong **)pIVar1;
    if (local_128 == *(ulong **)(param_1 + 0x95a8)) {
      local_128 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = local_128 + 1;
    *local_128 = uVar17;
  }
  else {
    local_128 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
  }
  local_b0[0] = *param_2;
  uVar17 = info((SourceTextModule *)local_b0);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
  }
  uVar17 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar17;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
    uVar17 = *puVar9;
  }
  uVar4 = *(uint *)(uVar17 + 3);
  if (1 < (int)uVar4) {
    uVar18 = 0;
    while( true ) {
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + (long)((int)uVar18 << 2) + 7)
      ;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar17;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        uVar17 = *puVar10;
      }
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar1;
        if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar11 + 1;
        *puVar11 = uVar17;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      }
      MessageLocation::MessageLocation
                ((MessageLocation *)&local_d0,local_128,*(int *)(*puVar10 + 0x17) >> 1,
                 *(int *)(*puVar10 + 0x1b) >> 1);
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_98 = (long *)0x0;
      uStack_88 = 0;
      local_80 = 0x3f800000;
      local_b0[2] = param_5;
      local_90 = param_5;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
      ::__rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
                  *)local_b0,2);
      uStack_e8 = uStack_c8;
      local_f0 = local_d0;
      uStack_d8 = uStack_b8;
      uStack_e0 = uStack_c0;
      bVar7 = true;
      local_78 = param_5;
      puVar11 = (ulong *)ResolveImport(param_1,param_2,puVar11,*(int *)(*puVar10 + 0xf) >> 1,
                                       &local_f0,1,local_b0);
      plVar16 = local_98;
      if (puVar11 != (ulong *)0x0) {
        uVar21 = *puVar11;
        uVar14 = (ulong)*(uint *)(*param_2 + 0x1f);
        uVar17 = *param_2 & 0xffffffff00000000;
        uVar19 = uVar17 | uVar14;
        lVar12 = uVar19 + ((long)(int)((*(uint *)(*puVar10 + 0x13) & 0x7ffffffe) << 1) ^
                          0xfffffffffffffffcU);
        *(int *)(lVar12 + 7) = (int)uVar21;
        if ((uVar21 & 1) != 0) {
          uVar15 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
          lVar12 = lVar12 + 7;
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar19,lVar12,uVar21);
            uVar15 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) &&
             ((*(byte *)((uVar17 | uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar19,lVar12,uVar21);
          }
        }
        bVar7 = false;
        plVar16 = local_98;
      }
      for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      }
      if (bVar7) goto LAB_0112d1ac;
      uVar18 = uVar18 + 1;
      if (uVar4 >> 1 <= uVar18) break;
      uVar17 = *puVar9;
    }
  }
  uVar17 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
    uVar17 = *puVar8;
  }
  uVar4 = *(uint *)(uVar17 + 3);
  if (1 < (int)uVar4) {
    uVar18 = 0;
    do {
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + (long)((int)uVar18 << 2) + 7)
      ;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar17;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        uVar17 = *puVar9;
      }
      uVar5 = *(uint *)(uVar17 + 3);
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)uVar5;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar17;
        if ((uVar5 & 1) != 0) goto LAB_0112d294;
LAB_0112d2a0:
        MessageLocation::MessageLocation
                  ((MessageLocation *)&local_d0,local_128,*(int *)(*puVar9 + 0x17) >> 1,
                   *(int *)(*puVar9 + 0x1b) >> 1);
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_98 = (long *)0x0;
        uStack_88 = 0;
        local_80 = 0x3f800000;
        local_b0[2] = param_5;
        local_90 = param_5;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
        ::__rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
                    *)local_b0,2);
        uStack_108 = uStack_c8;
        local_110 = local_d0;
        uStack_f8 = uStack_b8;
        uStack_100 = uStack_c0;
        local_78 = param_5;
        lVar12 = ResolveExport(param_1,param_2,0,puVar10,&local_110,1,local_b0);
        for (plVar16 = local_98; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        }
        if (lVar12 == 0) {
          uVar13 = 0;
          goto LAB_0112d3b0;
        }
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        uVar17 = *puVar10;
        if ((uVar17 & 1) == 0) goto LAB_0112d2a0;
LAB_0112d294:
        if ((int)uVar17 != *(int *)(param_1 + 0xa0)) goto LAB_0112d2a0;
      }
      uVar18 = uVar18 + 1;
      if (uVar4 >> 1 <= uVar18) break;
      uVar17 = *puVar8;
    } while( true );
  }
  if ((*(uint *)(*param_2 + 0x37) ^ *(uint *)(*param_2 + 0x3b)) < 2) {
    do {
      puVar8 = (ulong *)((long *)*param_3)[1];
      *param_3 = *(long *)*param_3;
      uVar17 = RunInitializationCode(param_1,puVar8);
      if ((uVar17 & 1) == 0) goto LAB_0112d1ac;
      local_b0[0] = *puVar8;
      Module::SetStatus((Module *)local_b0,3);
    } while ((int)*puVar8 != (int)*param_2);
    uVar13 = 1;
  }
  else {
    uVar13 = 1;
  }
LAB_0112d3b0:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
LAB_0112d1ac:
  uVar13 = 0;
  goto LAB_0112d3b0;
}

