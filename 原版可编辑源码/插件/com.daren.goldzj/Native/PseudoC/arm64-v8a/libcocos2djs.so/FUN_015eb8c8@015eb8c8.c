
void FUN_015eb8c8(void *param_1)

{
  if (*(__shared_weak_count **)((long)param_1 + 0x10) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak
              (*(__shared_weak_count **)((long)param_1 + 0x10));
  }
  operator_delete(param_1);
  return;
}

