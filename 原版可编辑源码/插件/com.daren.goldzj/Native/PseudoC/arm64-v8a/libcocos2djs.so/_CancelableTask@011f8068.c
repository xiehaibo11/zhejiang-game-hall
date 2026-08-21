
/* non-virtual thunk to v8::internal::CancelableTask::~CancelableTask() */

void __thiscall v8::internal::CancelableTask::~CancelableTask(CancelableTask *this)

{
  CancelableTask *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong local_28;
  
  *(undefined ***)(this + -0x20) = &PTR__Cancelable_01cbbd00;
  pCVar1 = this + -0x10;
  do {
    if (*(int *)pCVar1 != 0) {
      ClearExclusiveLocal();
      if (*(int *)pCVar1 != 2) {
        return;
      }
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pCVar1,0x10);
    if (bVar3) {
      *(int *)pCVar1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_28 = *(ulong *)(this + -8);
  lVar4 = *(long *)(this + -0x18);
  if (local_28 != 0) {
    base::Mutex::Lock((Mutex *)(lVar4 + 0x60));
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
    ::__erase_unique<unsigned_long>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
                *)(lVar4 + 8),&local_28);
    base::ConditionVariable::NotifyOne((ConditionVariable *)(lVar4 + 0x30));
    base::Mutex::Unlock((Mutex *)(lVar4 + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
}

