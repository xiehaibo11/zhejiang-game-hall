
void FUN_015fde44(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[8];
  *param_1 = &PTR_FUN_01cca2a0;
  if (param_1 + 4 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_015fde8c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_015fde8c:
  if ((__shared_weak_count *)param_1[3] != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}

