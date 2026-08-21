
void FUN_015eb7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cc9c90;
  if ((__shared_weak_count *)param_1[2] != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)param_1[2]);
    return;
  }
  return;
}

