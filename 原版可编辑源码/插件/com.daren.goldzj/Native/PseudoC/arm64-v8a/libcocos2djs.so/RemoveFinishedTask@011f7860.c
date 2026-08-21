
/* v8::internal::CancelableTaskManager::RemoveFinishedTask(unsigned long) */

void __thiscall
v8::internal::CancelableTaskManager::RemoveFinishedTask(CancelableTaskManager *this,ulong param_1)

{
  ulong local_28;
  
  local_28 = param_1;
  if (param_1 != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x60));
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
    ::__erase_unique<unsigned_long>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
                *)(this + 8),&local_28);
    base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x30));
    base::Mutex::Unlock((Mutex *)(this + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
}

