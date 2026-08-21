
/* v8::internal::compiler::JSHeapBroker::ProcessFeedbackMapsForElementAccess(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > > const&,
   v8::internal::compiler::KeyedAccessMode const&, v8::internal::FeedbackSlotKind) */

undefined4 * __thiscall
v8::internal::compiler::JSHeapBroker::ProcessFeedbackMapsForElementAccess
          (JSHeapBroker *this,long *param_1,undefined8 *param_2,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  short sVar3;
  long lVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  long *plVar20;
  Zone *pZVar21;
  long lVar22;
  ulong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  Zone *local_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar5 = (long)puVar2 - (long)puVar11;
  puVar9 = puStack_b8;
  if (uVar5 != 0) {
    if ((ulong)((long)uVar5 >> 3) >> 0x3d != 0) {
LAB_01737c80:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puStack_b8 = operator_new(uVar5);
    local_b0 = puStack_b8 + ((long)uVar5 >> 3);
    puVar9 = puStack_b8;
  }
  for (; local_c0 = puVar9, puVar11 != puVar2; puVar11 = puVar11 + 1) {
    local_e8 = (ulong *)*puVar11;
    ObjectRef::ObjectRef((ObjectRef *)&local_a0,this,local_e8,0);
    puVar9 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_a0);
    if (*(int *)(puVar9 + 1) == 2) {
      uVar5 = *(ulong *)*puVar9;
      if ((uVar5 & 1) == 0) goto LAB_01737c6c;
      sVar3 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
    }
    else {
      if (*(int *)(puVar9 + 1) == 0) goto LAB_01737c6c;
      sVar3 = *(short *)(puVar9[2] + 0x18);
    }
    if (sVar3 != 0xa2) {
LAB_01737c6c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    MapRef::SerializeRootMap((MapRef *)&local_a0);
    uVar5 = CanInlineElementAccess((MapRef *)&local_a0);
    if (((uVar5 & 1) != 0) && (*(byte *)(*local_e8 + 10) - 8 < 0x28)) {
      if (puStack_b8 == local_b0) {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                  ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                    *)&local_c0,(Handle *)&local_e8);
      }
      else {
        *puStack_b8 = local_e8;
        puStack_b8 = puStack_b8 + 1;
      }
    }
    puVar9 = local_c0;
  }
  local_90 = *(undefined8 *)(this + 0x10);
  local_a0 = 0;
  uStack_98 = 0;
  local_88 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0x3f800000;
  local_80 = local_90;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
            *)&local_a0,100);
  puVar2 = (undefined8 *)param_1[1];
  puVar7 = local_e8;
  for (puVar11 = (undefined8 *)*param_1; puVar11 != puVar2; puVar11 = puVar11 + 1) {
    puVar19 = (ulong *)*puVar11;
    local_e8 = (ulong *)*puVar19;
    if (((*(uint *)((long)local_e8 + 0xb) >> 0x19 & 1) == 0) ||
       (uVar5 = Map::FindElementsKindTransitionedMap((Isolate *)&local_e8,*(vector **)this),
       puVar7 = local_e8, (int)uVar5 == 0)) {
      local_e8 = puVar7;
      pZVar21 = *(Zone **)(this + 0x10);
      puVar9 = *(undefined8 **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar9) < 8) {
        puVar9 = (undefined8 *)Zone::NewExpand(pZVar21,8);
      }
      else {
        *(undefined8 **)(pZVar21 + 0x10) = puVar9 + 1;
      }
      *puVar9 = puVar19;
      local_e0 = (undefined8 *)0x0;
      local_d8 = (undefined8 *)0x0;
      local_d0 = (undefined8 *)0x0;
      puVar10 = *(undefined8 **)(pZVar21 + 0x10);
      local_e8 = puVar19;
      local_c8 = pZVar21;
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar10) < 8) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar21,8);
      }
      else {
        *(undefined8 **)(pZVar21 + 0x10) = puVar10 + 1;
      }
      local_d0 = puVar10 + 1;
      *puVar10 = *puVar9;
      local_d8 = puVar10 + 1;
      local_e0 = puVar10;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
      ::
      __emplace_unique_key_args<v8::internal::Handle<v8::internal::Map>,std::__ndk1::pair<v8::internal::Handle<v8::internal::Map>const,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
                  *)&local_a0,(Handle *)&local_e8,(pair *)&local_e8);
      if (local_e0 != (undefined8 *)0x0) {
        local_d8 = local_e0;
      }
    }
    else {
      pIVar6 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar5;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar5);
      }
      pZVar21 = *(Zone **)(this + 0x10);
      puVar9 = *(undefined8 **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar9) < 8) {
        puVar9 = (undefined8 *)Zone::NewExpand(pZVar21,8);
      }
      else {
        *(undefined8 **)(pZVar21 + 0x10) = puVar9 + 1;
      }
      *puVar9 = puVar7;
      local_e0 = (undefined8 *)0x0;
      local_d8 = (undefined8 *)0x0;
      local_d0 = (undefined8 *)0x0;
      puVar10 = *(undefined8 **)(pZVar21 + 0x10);
      local_e8 = puVar7;
      local_c8 = pZVar21;
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar10) < 8) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar21,8);
      }
      else {
        *(undefined8 **)(pZVar21 + 0x10) = puVar10 + 1;
      }
      local_d0 = puVar10 + 1;
      *puVar10 = *puVar9;
      local_d8 = puVar10 + 1;
      local_e0 = puVar10;
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
              ::
              __emplace_unique_key_args<v8::internal::Handle<v8::internal::Map>,std::__ndk1::pair<v8::internal::Handle<v8::internal::Map>const,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Map>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>,v8::internal::Handle<v8::internal::Map>::equal_to,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>>
                          *)&local_a0,(Handle *)&local_e8,(pair *)&local_e8);
      if (local_e0 != (undefined8 *)0x0) {
        local_d8 = local_e0;
      }
      puVar9 = *(undefined8 **)(lVar8 + 0x20);
      if (puVar9 == *(undefined8 **)(lVar8 + 0x28)) {
        lVar22 = (long)puVar9 - *(long *)(lVar8 + 0x18) >> 3;
        uVar5 = lVar22 + 1;
        if (uVar5 >> 0x1c != 0) goto LAB_01737c80;
        lVar13 = (long)*(undefined8 **)(lVar8 + 0x28) - *(long *)(lVar8 + 0x18);
        uVar17 = lVar13 >> 2;
        if (uVar5 <= uVar17) {
          uVar5 = uVar17;
        }
        if (0x7fffffe < (ulong)(lVar13 >> 3)) {
          uVar5 = 0xfffffff;
        }
        if (uVar5 == 0) {
          lVar13 = 0;
        }
        else {
          pZVar21 = *(Zone **)(lVar8 + 0x30);
          uVar17 = uVar5 * 8;
          lVar13 = *(long *)(pZVar21 + 0x10);
          if (uVar17 < (ulong)(*(long *)(pZVar21 + 0x18) - lVar13) ||
              uVar17 - (*(long *)(pZVar21 + 0x18) - lVar13) == 0) {
            *(ulong *)(pZVar21 + 0x10) = lVar13 + uVar17;
          }
          else {
            lVar13 = Zone::NewExpand(pZVar21,uVar17);
          }
        }
        puVar9 = (undefined8 *)(lVar13 + lVar22 * 8);
        puVar15 = puVar9 + 1;
        *puVar9 = puVar19;
        puVar10 = *(undefined8 **)(lVar8 + 0x18);
        puVar18 = *(undefined8 **)(lVar8 + 0x20);
        while (puVar18 != puVar10) {
          puVar18 = puVar18 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar18;
        }
        *(undefined8 **)(lVar8 + 0x18) = puVar9;
        *(undefined8 **)(lVar8 + 0x20) = puVar15;
        *(ulong *)(lVar8 + 0x28) = lVar13 + uVar5 * 8;
      }
      else {
        *puVar9 = puVar19;
        *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 8;
      }
    }
    puVar7 = local_e8;
  }
  pZVar21 = *(Zone **)(this + 0x10);
  puVar12 = *(undefined4 **)(pZVar21 + 0x10);
  local_e8 = puVar7;
  if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar12) < 0x30) {
    puVar12 = (undefined4 *)Zone::NewExpand(pZVar21,0x30);
  }
  else {
    *(undefined4 **)(pZVar21 + 0x10) = puVar12 + 0xc;
  }
  uVar14 = *(undefined8 *)(this + 0x10);
  *puVar12 = 4;
  puVar12[1] = param_4;
  uVar16 = *param_2;
  *(undefined8 *)(puVar12 + 6) = 0;
  *(undefined8 *)(puVar12 + 8) = 0;
  *(undefined8 *)(puVar12 + 10) = uVar14;
  *(undefined8 *)(puVar12 + 2) = uVar16;
  *(undefined8 *)(puVar12 + 4) = 0;
  if (local_88 != (long *)0x0) {
    plVar20 = local_88;
    do {
      local_e8 = (ulong *)plVar20[2];
      local_c8 = (Zone *)plVar20[6];
      local_e0 = (undefined8 *)0x0;
      local_d8 = (undefined8 *)0x0;
      local_d0 = (undefined8 *)0x0;
      uVar5 = plVar20[4] - plVar20[3];
      if (uVar5 == 0) {
LAB_01737c58:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!group.empty()");
      }
      if ((ulong)((long)uVar5 >> 3) >> 0x1c != 0) goto LAB_01737c80;
      puVar11 = *(undefined8 **)(local_c8 + 0x10);
      if ((ulong)(*(long *)(local_c8 + 0x18) - (long)puVar11) < uVar5) {
        puVar11 = (undefined8 *)Zone::NewExpand(local_c8,uVar5);
      }
      else {
        *(ulong *)(local_c8 + 0x10) = (long)puVar11 + uVar5;
      }
      local_d0 = puVar11 + ((long)uVar5 >> 3);
      puVar2 = (undefined8 *)plVar20[4];
      local_d8 = puVar11;
      puVar9 = (undefined8 *)plVar20[3];
      local_e0 = puVar11;
      if ((undefined8 *)plVar20[3] == puVar2) goto LAB_01737c58;
      do {
        puVar10 = puVar9 + 1;
        *local_d8 = *puVar9;
        local_d8 = local_d8 + 1;
        puVar9 = puVar10;
      } while (puVar2 != puVar10);
      if (puVar11 == local_d8) goto LAB_01737c58;
      plVar1 = *(long **)(puVar12 + 6);
      if (plVar1 < *(long **)(puVar12 + 8)) {
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1[3] = (long)local_c8;
        *plVar1 = (long)puVar11;
        plVar1[1] = (long)local_d8;
        plVar1[2] = (long)local_d0;
        local_e0 = (undefined8 *)0x0;
        local_d8 = (undefined8 *)0x0;
        local_d0 = (undefined8 *)0x0;
        *(long *)(puVar12 + 6) = *(long *)(puVar12 + 6) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
        ::__push_back_slow_path<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
                  ((vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
                    *)(puVar12 + 4),(ZoneVector *)&local_e0);
        if (local_e0 != (undefined8 *)0x0) {
          local_d8 = local_e0;
        }
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
    plVar20 = local_88;
    if (*(long *)(puVar12 + 4) != *(long *)(puVar12 + 6)) {
      while (plVar1 = plVar20, plVar1 != (long *)0x0) {
        plVar20 = (long *)*plVar1;
        if (plVar1[3] != 0) {
          plVar1[4] = plVar1[3];
        }
      }
      if (local_c0 != (undefined8 *)0x0) {
        puStack_b8 = local_c0;
        operator_delete(local_c0);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return puVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!result->transition_groups().empty()");
}

