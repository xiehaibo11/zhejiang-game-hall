
/* v8::internal::CancelableTaskManager::CancelAndWait() */

void __thiscall v8::internal::CancelableTaskManager::CancelAndWait(CancelableTaskManager *this)

{
  long *plVar1;
  Mutex *this_00;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  void *local_70 [3];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  this_00 = (Mutex *)(this + 0x60);
  base::Mutex::Lock(this_00);
  this[0x88] = (CancelableTaskManager)0x1;
  if (*(long *)(this + 0x20) != 0) {
    plVar7 = *(long **)(this + 0x18);
    if (plVar7 != (long *)0x0) goto LAB_011f7d2c;
    do {
      do {
        base::ConditionVariable::Wait((ConditionVariable *)(this + 0x30),this_00);
        if (*(long *)(this + 0x20) == 0) goto LAB_011f7d70;
        plVar7 = *(long **)(this + 0x18);
      } while (plVar7 == (long *)0x0);
LAB_011f7d2c:
      do {
        while( true ) {
          plVar1 = plVar7 + 3;
          plVar7 = (long *)*plVar7;
          piVar2 = (int *)(*plVar1 + 0x10);
          do {
            if (*piVar2 != 0) {
              ClearExclusiveLocal();
              goto LAB_011f7d24;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
          ::remove(local_70,this + 8);
          pvVar6 = local_70[0];
          local_70[0] = (void *)0x0;
          if (pvVar6 == (void *)0x0) break;
          operator_delete(pvVar6);
          if (plVar7 == (long *)0x0) goto LAB_011f7cf8;
        }
LAB_011f7d24:
      } while (plVar7 != (long *)0x0);
LAB_011f7cf8:
    } while (*(long *)(this + 0x20) != 0);
  }
LAB_011f7d70:
  base::Mutex::Unlock(this_00);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

