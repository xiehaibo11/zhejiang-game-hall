
void FUN_01249f1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_01cbc6f0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_01cbc5c0;
  v8::internal::GlobalHandles::Destroy(*(ulong **)(param_1 + 0x28));
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}

