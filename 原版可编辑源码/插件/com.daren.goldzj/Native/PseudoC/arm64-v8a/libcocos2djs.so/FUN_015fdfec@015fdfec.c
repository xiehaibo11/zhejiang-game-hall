
void FUN_015fdfec(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x20) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_015fe028;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_015fe028:
  if (*(__shared_weak_count **)(param_1 + 0x18) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(*(__shared_weak_count **)(param_1 + 0x18));
    return;
  }
  return;
}

