
void FUN_015eb8f4(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  long lVar4;
  long local_30;
  __shared_weak_count *local_28;
  
  local_30 = 0;
  local_28 = (__shared_weak_count *)0x0;
  if (((*(__shared_weak_count **)(param_1 + 0x10) != (__shared_weak_count *)0x0) &&
      (local_28 = (__shared_weak_count *)
                  std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(param_1 + 0x10)),
      local_28 != (__shared_weak_count *)0x0)) &&
     ((local_30 = *(long *)(param_1 + 8), local_30 == 0 ||
      (v8::internal::wasm::WasmEngine::SampleTopTierCodeSizeInAllIsolates
                 (*(WasmEngine **)(local_30 + 0x178),(shared_ptr *)&local_30),
      local_28 != (__shared_weak_count *)0x0)))) {
    this = local_28;
    p_Var1 = local_28 + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)local_28 + 0x10))(local_28);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  return;
}

