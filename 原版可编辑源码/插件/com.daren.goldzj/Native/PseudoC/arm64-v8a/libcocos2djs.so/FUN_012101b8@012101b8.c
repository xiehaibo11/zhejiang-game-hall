
void FUN_012101b8(Cancelable *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_01cbc490;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_01cbc4c0;
  if (*(__shared_weak_count **)(param_1 + 0x38) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(*(__shared_weak_count **)(param_1 + 0x38));
  }
  v8::internal::Cancelable::~Cancelable(param_1);
  operator_delete(param_1);
  return;
}

