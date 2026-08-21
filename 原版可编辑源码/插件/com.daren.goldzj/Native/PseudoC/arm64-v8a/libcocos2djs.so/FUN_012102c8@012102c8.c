
void FUN_012102c8(undefined8 *param_1)

{
  Cancelable *this;
  
  this = (Cancelable *)(param_1 + -4);
  *(undefined ***)this = &PTR_FUN_01cbc490;
  *param_1 = &PTR_FUN_01cbc4c0;
  if ((__shared_weak_count *)param_1[3] != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)param_1[3]);
  }
  v8::internal::Cancelable::~Cancelable(this);
  operator_delete(this);
  return;
}

