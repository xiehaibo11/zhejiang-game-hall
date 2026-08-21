
void FUN_015fe048(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if ((long *)((long)param_1 + 0x20) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_015fe084;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_015fe084:
  if (*(__shared_weak_count **)((long)param_1 + 0x18) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak
              (*(__shared_weak_count **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}

