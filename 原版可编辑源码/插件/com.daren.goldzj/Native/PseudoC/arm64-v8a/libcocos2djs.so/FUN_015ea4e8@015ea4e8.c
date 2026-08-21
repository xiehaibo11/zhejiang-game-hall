
void FUN_015ea4e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_01cc9b50;
  if (*(__shared_weak_count **)(param_1 + 0x58) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(*(__shared_weak_count **)(param_1 + 0x58));
  }
  v8::base::SharedMutex::~SharedMutex((SharedMutex *)(param_1 + 0x18));
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}

