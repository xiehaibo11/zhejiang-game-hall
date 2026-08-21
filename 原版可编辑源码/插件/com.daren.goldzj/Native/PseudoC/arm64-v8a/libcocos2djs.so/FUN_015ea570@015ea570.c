
void FUN_015ea570(long param_1)

{
  if (*(__shared_weak_count **)(param_1 + 0x58) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(*(__shared_weak_count **)(param_1 + 0x58));
  }
  v8::base::SharedMutex::~SharedMutex((SharedMutex *)(param_1 + 0x18));
  return;
}

