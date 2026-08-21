
/* v8::internal::WorkerThreadRuntimeCallStats::NewTable() */

undefined8 * __thiscall
v8::internal::WorkerThreadRuntimeCallStats::NewTable(WorkerThreadRuntimeCallStats *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *local_28;
  
  puVar3 = operator_new(0x7088);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff00000001;
  memset(puVar3 + 4,0,0x7068);
  lVar4 = 0;
  ppuVar5 = &PTR_s_GC_MC_INCREMENTAL_019be604_3_01caf998;
  do {
    puVar6 = *ppuVar5;
    lVar1 = lVar4 + 3;
    puVar3[lVar4 + 5] = 0;
    puVar3[lVar4 + 6] = 0;
    puVar3[lVar4 + 4] = puVar6;
    lVar4 = lVar1;
    ppuVar5 = ppuVar5 + 1;
  } while (lVar1 != 0xe0d);
  local_28 = puVar3;
  base::Mutex::Lock((Mutex *)this);
  if (*(undefined8 **)(this + 0x30) < *(undefined8 **)(this + 0x38)) {
    local_28 = (undefined8 *)0x0;
    **(undefined8 **)(this + 0x30) = puVar3;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<v8::internal::RuntimeCallStats,std::__ndk1::default_delete<v8::internal::RuntimeCallStats>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::RuntimeCallStats,std::__ndk1::default_delete<v8::internal::RuntimeCallStats>>>>
    ::
    __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::RuntimeCallStats,std::__ndk1::default_delete<v8::internal::RuntimeCallStats>>>
              ((vector<std::__ndk1::unique_ptr<v8::internal::RuntimeCallStats,std::__ndk1::default_delete<v8::internal::RuntimeCallStats>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::RuntimeCallStats,std::__ndk1::default_delete<v8::internal::RuntimeCallStats>>>>
                *)(this + 0x28),(unique_ptr *)&local_28);
  }
  base::Mutex::Unlock((Mutex *)this);
  puVar2 = local_28;
  local_28 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  return puVar3;
}

