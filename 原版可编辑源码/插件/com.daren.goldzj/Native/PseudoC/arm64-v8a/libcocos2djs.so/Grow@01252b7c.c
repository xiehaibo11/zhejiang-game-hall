
/* v8::internal::WasmMemoryObject::Grow(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmMemoryObject>, unsigned int) */

ulong v8::internal::WasmMemoryObject::Grow(Isolate *param_1,ulong *param_2,uint param_3)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  BackingStore *pBVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_b8;
  __shared_weak_count *local_b0;
  ulong local_a8;
  Isolate *local_a0;
  __shared_weak_count *p_Stack_98;
  BackingStore *local_90;
  __shared_weak_count *local_88;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  BackingStore *local_60;
  __shared_weak_count *p_Stack_58;
  BackingStore *local_38;
  
  if (DAT_01d3fce8 == (byte *)0x0) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fce8 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.wasm");
  }
  pbVar6 = DAT_01d3fce8;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3fce8 & 5) != 0) {
    local_60 = (BackingStore *)0x0;
    p_Stack_58 = (__shared_weak_count *)0x0;
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar6,"GrowMemory",0,0,0,0,0,0,0,&local_60,0);
    p_Var2 = p_Stack_58;
    p_Stack_58 = (__shared_weak_count *)0x0;
    if (p_Var2 != (__shared_weak_count *)0x0) {
      (**(code **)(*(long *)p_Var2 + 8))();
    }
    pBVar7 = local_60;
    local_60 = (BackingStore *)0x0;
    if (pBVar7 != (BackingStore *)0x0) {
      (**(code **)(*(long *)pBVar7 + 8))();
    }
    local_80 = &local_78;
    local_70 = "GrowMemory";
    local_78 = pbVar6;
    local_68 = uVar10;
  }
  uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(param_1 + 0x95a0);
    if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar14;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    uVar14 = *puVar11;
  }
  uVar15 = 0xffffffff;
  if ((*(uint *)(uVar14 + 0x1b) >> 3 & 1) != 0) goto joined_r0x01252d4c;
  uVar8 = wasm::max_mem_pages();
  uVar3 = *(uint *)(*param_2 + 0xf) >> 1;
  if (uVar8 <= uVar3 || 0x7fffffff < *(uint *)(*param_2 + 0xf)) {
    uVar3 = uVar8;
  }
  uVar8 = wasm::max_mem_pages();
  if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","wasm::max_mem_pages() >= maximum_pages");
  }
  if ((*(ulong *)(*puVar11 + 0xb) & 0xffff) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == old_size % wasm::kWasmPageSize");
  }
  uVar15 = *(ulong *)(*puVar11 + 0xb) >> 0x10;
  uVar14 = wasm::max_mem_pages();
  if ((uVar14 & 0xffffffff) < uVar15) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","wasm::max_mem_pages() >= old_pages");
  }
  uVar16 = (ulong)uVar3;
  uVar14 = (ulong)param_3;
  if ((uVar16 - uVar15 < uVar14) ||
     (uVar12 = wasm::max_mem_pages(), (uVar12 & 0xffffffff) - uVar15 < uVar14)) {
    uVar15 = 0xffffffff;
    goto joined_r0x01252d4c;
  }
  local_38 = (BackingStore *)*puVar11;
  JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_38);
  if (local_60 == (BackingStore *)0x0) {
LAB_01252f54:
    uVar15 = 0xffffffff;
    p_Var2 = p_Stack_58;
  }
  else if ((*(uint *)(*puVar11 + 0x1b) >> 4 & 1) == 0) {
    uVar14 = BackingStore::GrowWasmMemoryInPlace(local_60,param_1,uVar14,uVar16);
    if ((uVar14 & 1) == 0) {
      BackingStore::CopyWasmMemory((Isolate *)local_60,(ulong)param_1);
      if (local_38 == (BackingStore *)0x0) {
        local_38 = (BackingStore *)0x0;
        goto LAB_01252f54;
      }
      local_a8 = *puVar11;
      JSArrayBuffer::Detach((JSArrayBuffer *)&local_a8,true);
      pBVar7 = local_38;
      local_b8 = (ulong)local_38;
      if (local_38 == (BackingStore *)0x0) {
        local_b0 = (__shared_weak_count *)0x0;
      }
      else {
        local_b0 = operator_new(0x20);
        *(undefined8 *)(local_b0 + 0x10) = 0;
        *(BackingStore **)(local_b0 + 0x18) = pBVar7;
        *(undefined ***)local_b0 = &PTR____shared_weak_count_01c98518;
        *(undefined8 *)(local_b0 + 8) = 0;
      }
      local_38 = (BackingStore *)0x0;
      uVar10 = Factory::NewJSArrayBuffer((Factory *)param_1,&local_b8,0);
      p_Var2 = local_b0;
      if (local_b0 != (__shared_weak_count *)0x0) {
        p_Var1 = local_b0 + 8;
        do {
          lVar13 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)local_b0 + 0x10))(local_b0);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
        }
      }
      local_a8 = *param_2;
      update_instances((WasmMemoryObject *)&local_a8,param_1,uVar10);
      pBVar7 = local_38;
      local_38 = (BackingStore *)0x0;
      p_Var2 = p_Stack_58;
      if (pBVar7 != (BackingStore *)0x0) {
        BackingStore::~BackingStore(pBVar7);
        operator_delete(pBVar7);
        p_Var2 = p_Stack_58;
      }
    }
    else {
      local_38 = (BackingStore *)*puVar11;
      JSArrayBuffer::Detach((JSArrayBuffer *)&local_38,true);
      p_Stack_98 = p_Stack_58;
      local_a0 = (Isolate *)local_60;
      local_60 = (BackingStore *)0x0;
      p_Stack_58 = (__shared_weak_count *)0x0;
      uVar10 = Factory::NewJSArrayBuffer((Factory *)param_1,&local_a0,0);
      p_Var2 = p_Stack_98;
      if (p_Stack_98 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Stack_98 + 8;
        do {
          lVar13 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)p_Stack_98 + 0x10))(p_Stack_98);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
        }
      }
      local_38 = (BackingStore *)*param_2;
      update_instances((WasmMemoryObject *)&local_38,param_1,uVar10);
      p_Var2 = p_Stack_58;
    }
  }
  else {
    if ((FLAG_wasm_grow_shared_memory == '\0') ||
       (uVar16 = BackingStore::GrowWasmMemoryInPlace(local_60,param_1,uVar14,uVar16),
       (uVar16 & 1) == 0)) goto LAB_01252f54;
    local_90 = local_60;
    local_88 = p_Stack_58;
    if (p_Stack_58 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Stack_58 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = *(long *)p_Var2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    BackingStore::BroadcastSharedWasmMemoryGrow(param_1,&local_90,uVar15 + uVar14);
    p_Var2 = local_88;
    if (local_88 != (__shared_weak_count *)0x0) {
      p_Var1 = local_88 + 8;
      do {
        lVar13 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*(long *)local_88 + 0x10))(local_88);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    uVar3 = *(uint *)(*param_2 + 0xb);
    if (uVar3 == (uint)*puVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*old_buffer != memory_object->array_buffer()");
    }
    uVar16 = *(ulong *)((*param_2 & 0xffffffff00000000 | (ulong)uVar3) + 0xb);
    uVar14 = (uVar15 + uVar14) * 0x10000;
    p_Var2 = p_Stack_58;
    if (uVar16 <= uVar14 && uVar14 - uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","new_byte_length <= memory_object->array_buffer().byte_length()")
      ;
    }
  }
  p_Stack_58 = p_Var2;
  if (p_Var2 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var2 + 8;
    do {
      lVar13 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
joined_r0x01252d4c:
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_78,local_70,local_68);
  }
  return uVar15 & 0xffffffff;
}

