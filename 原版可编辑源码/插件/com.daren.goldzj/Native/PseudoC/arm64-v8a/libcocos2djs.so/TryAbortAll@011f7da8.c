
/* v8::internal::CancelableTaskManager::TryAbortAll() */

undefined4 __thiscall v8::internal::CancelableTaskManager::TryAbortAll(CancelableTaskManager *this)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  void *local_60 [3];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  base::Mutex::Lock((Mutex *)(this + 0x60));
  lVar8 = *(long *)(this + 0x20);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    plVar6 = *(long **)(this + 0x18);
    if (plVar6 != (long *)0x0) {
      do {
        piVar1 = (int *)(plVar6[3] + 0x10);
        do {
          if (*piVar1 != 0) {
            ClearExclusiveLocal();
            plVar6 = (long *)*plVar6;
            goto joined_r0x011f7e00;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = (long *)*plVar6;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
        ::remove(local_60,this + 8);
        pvVar5 = local_60[0];
        local_60[0] = (void *)0x0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
joined_r0x011f7e00:
      } while (plVar6 != (long *)0x0);
      lVar8 = *(long *)(this + 0x20);
    }
    uVar7 = 1;
    if (lVar8 == 0) {
      uVar7 = 2;
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x60));
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

