
void FUN_0125619c(__shared_weak_count *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_FUN_01cbc760;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}

