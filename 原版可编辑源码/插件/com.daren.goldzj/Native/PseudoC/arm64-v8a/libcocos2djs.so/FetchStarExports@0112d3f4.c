
/* v8::internal::SourceTextModule::FetchStarExports(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::internal::Zone*,
   v8::internal::UnorderedModuleSet*) */

void v8::internal::SourceTextModule::FetchStarExports
               (Isolate *param_1,ulong *param_2,undefined8 param_3,
               __hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
               *param_4)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong extraout_x1;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  ulong *local_d0;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar12 = *param_2 & 0xffffffff00000000;
  if ((*(short *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | *(uint *)(*param_2 + 0xf)) - 1)) != 0xac
      ) && (local_a0 = param_2,
           std::__ndk1::
           __hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
           ::
           __emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,v8::internal::Handle<v8::internal::Module>>
                     (param_4,(Handle *)&local_a0,(Handle *)&local_a0), (extraout_x1 & 1) != 0)) {
    pIVar2 = param_1 + 0x95a0;
    uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      local_d0 = *(ulong **)pIVar2;
      if (local_d0 == *(ulong **)(param_1 + 0x95a8)) {
        local_d0 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = local_d0 + 1;
      *local_d0 = uVar12;
    }
    else {
      local_d0 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    }
    local_a0 = (ulong *)0x0;
    uStack_98 = 0;
    local_88 = (long *)0x0;
    uStack_78 = 0;
    local_70 = 0x3f800000;
    local_90 = param_3;
    local_80 = param_3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
    ::__rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
                *)&local_a0,2);
    local_b0 = (ulong *)*param_2;
    uVar12 = info((SourceTextModule *)&local_b0);
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar12;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    }
    uVar12 = *puVar9;
    uVar3 = *(uint *)(uVar12 + 3);
    plVar7 = local_88;
    if (1 < (int)uVar3) {
      uVar14 = 0;
      pIVar1 = param_1 + 0xa0;
      while( true ) {
        uVar12 = uVar12 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar12 + (long)((int)uVar14 << 2) + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar2;
          if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar10 + 1;
          *puVar10 = uVar12;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
          uVar12 = *puVar10;
        }
        if (*(uint *)(uVar12 + 3) == *(uint *)pIVar1) {
          uVar13 = *param_2 & 0xffffffff00000000;
          uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(*param_2 + 0x23)) +
                                      (long)(int)((*(uint *)(uVar12 + 0xf) & 0x7ffffffe) << 1) + 7);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)pIVar2;
            if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar10 + 1;
            *puVar10 = uVar13;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
            uVar13 = *puVar10;
          }
          uVar12 = uVar13 & 0xffffffff00000000;
          if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x44) {
            FetchStarExports(param_1,puVar10,param_3,param_4);
            uVar13 = *puVar10;
            uVar12 = uVar13 & 0xffffffff00000000;
          }
          uVar12 = uVar12 | *(uint *)(uVar13 + 3);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)pIVar2;
            if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar10 + 1;
            *puVar10 = uVar12;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
            uVar12 = *puVar10;
          }
          uVar4 = *(uint *)(uVar12 + 0xf);
          if ((int)uVar4 >> 1 != 0) {
            lVar16 = 0;
            iVar15 = 0xc;
            while( true ) {
              uVar5 = *(uint *)(uVar12 + (long)iVar15 + 7);
              if ((uVar5 != *(uint *)(param_1 + 0xa8)) && (uVar5 != *(uint *)pIVar1)) {
                puVar17 = (ulong *)(uVar12 & 0xffffffff00000000 | (ulong)uVar5);
                if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar11 = *(ulong **)pIVar2;
                  if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
                    puVar11 = (ulong *)HandleScope::Extend(param_1);
                  }
                  *(ulong **)pIVar2 = puVar11 + 1;
                  *puVar11 = (ulong)puVar17;
                }
                else {
                  puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                                (ulong)puVar17);
                  puVar17 = (ulong *)*puVar11;
                }
                uVar12 = *(ulong *)(param_1 + 0x5e8);
                local_b0 = puVar17;
                if (((int)uVar12 != (int)puVar17) &&
                   (((*(ushort *)
                       (((ulong)puVar17 & 0xffffffff00000000 | 7) +
                       (ulong)*(uint *)((long)puVar17 + -1)) < 0x20 &&
                     (*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1))
                      < 0x20)) ||
                    (uVar12 = String::SlowEquals((String *)&local_b0), (uVar12 & 1) == 0)))) {
                  local_b0 = (ulong *)*local_d0;
                  iVar8 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                          ::Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                                    *)&local_b0,puVar11);
                  if (iVar8 == *(int *)(param_1 + 0xa8)) {
                    local_b0 = (ulong *)*puVar10;
                    uVar12 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                             ::ValueAt((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                                        *)&local_b0,lVar16);
                    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar17 = *(ulong **)pIVar2;
                      if (puVar17 == *(ulong **)(param_1 + 0x95a8)) {
                        puVar17 = (ulong *)HandleScope::Extend(param_1);
                      }
                      *(ulong **)pIVar2 = puVar17 + 1;
                      *puVar17 = uVar12;
                    }
                    else {
                      puVar17 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                                    uVar12);
                    }
                    local_b0 = puVar11;
                    puStack_a8 = puVar17;
                    auVar18 = std::__ndk1::
                              __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
                              ::
                              __emplace_unique_key_args<v8::internal::Handle<v8::internal::String>,std::__ndk1::pair<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Cell>>>
                                        ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
                                          *)&local_a0,(Handle *)&local_b0,(pair *)&local_b0);
                    if ((((auVar18._8_8_ & 1) == 0) &&
                        (uVar5 = **(uint **)(auVar18._0_8_ + 0x18), uVar5 != (uint)*puVar17)) &&
                       (uVar5 != *(uint *)pIVar1)) {
                      *(Isolate **)(auVar18._0_8_ + 0x18) = pIVar1;
                    }
                  }
                }
              }
              if (((long)((ulong)uVar4 << 0x20) >> 0x21) + -1 == lVar16) break;
              uVar12 = *puVar10;
              lVar16 = lVar16 + 1;
              iVar15 = iVar15 + 8;
            }
          }
        }
        uVar14 = uVar14 + 1;
        plVar7 = local_88;
        if (uVar3 >> 1 <= uVar14) break;
        uVar12 = *puVar9;
      }
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (((*(ulong *)plVar7[3] & 1) == 0) || ((int)*(ulong *)plVar7[3] != *(int *)(param_1 + 0xa0))
         ) {
        local_d0 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                            ::Put(local_d0,plVar7[2]);
      }
    }
    uVar14 = *param_2;
    uVar12 = *local_d0;
    *(int *)(uVar14 + 3) = (int)uVar12;
    plVar7 = local_88;
    if ((uVar12 & 1) != 0) {
      uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 3,uVar12);
        uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      plVar7 = local_88;
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 3,uVar12);
        plVar7 = local_88;
      }
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

