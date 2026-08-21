
/* v8::internal::Cancelable::~Cancelable() */

void __thiscall v8::internal::Cancelable::~Cancelable(Cancelable *this)

{
  char cVar1;
  bool bVar2;
  Cancelable *pCVar3;
  long lVar4;
  ulong local_18;
  
  pCVar3 = this + 0x10;
  *(undefined ***)this = &PTR__Cancelable_01cbbd00;
  do {
    if (*(int *)pCVar3 != 0) {
      ClearExclusiveLocal();
      if (*(int *)pCVar3 != 2) goto LAB_011f795c;
      break;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pCVar3,0x10);
    if (bVar2) {
      *(int *)pCVar3 = 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = *(ulong *)(this + 0x18);
  lVar4 = *(long *)(this + 8);
  if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
  }
  base::Mutex::Lock((Mutex *)(lVar4 + 0x60));
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
  ::__erase_unique<unsigned_long>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
              *)(lVar4 + 8),&local_18);
  base::ConditionVariable::NotifyOne((ConditionVariable *)(lVar4 + 0x30));
  base::Mutex::Unlock((Mutex *)(lVar4 + 0x60));
LAB_011f795c:
  operator_delete(this);
  return;
}

