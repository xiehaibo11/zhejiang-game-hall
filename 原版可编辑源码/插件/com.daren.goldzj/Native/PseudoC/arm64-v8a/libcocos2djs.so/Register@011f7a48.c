
/* v8::internal::CancelableTaskManager::Register(v8::internal::Cancelable*) */

long __thiscall
v8::internal::CancelableTaskManager::Register(CancelableTaskManager *this,Cancelable *param_1)

{
  Cancelable *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long local_40 [2];
  undefined1 *local_18;
  
  base::Mutex::Lock((Mutex *)(this + 0x60));
  if (this[0x88] == (CancelableTaskManager)0x0) {
    uVar5 = *(ulong *)this;
    local_40[0] = uVar5 + 1;
    *(long *)this = local_40[0];
    if (0xfffffffffffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
    }
    local_18 = (undefined1 *)local_40;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
            ::
            __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                      ((ulong *)(this + 8),(piecewise_construct_t *)local_40,(tuple *)0x19ee4e3,
                       (tuple *)&local_18);
    *(Cancelable **)(lVar4 + 0x18) = param_1;
    lVar4 = local_40[0];
  }
  else {
    pCVar1 = param_1 + 0x10;
    do {
      if (*(int *)pCVar1 != 0) {
        ClearExclusiveLocal();
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pCVar1,0x10);
      if (bVar3) {
        *(int *)pCVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = 0;
  }
  base::Mutex::Unlock((Mutex *)(this + 0x60));
  return lVar4;
}

