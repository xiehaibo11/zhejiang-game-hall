
void FUN_011f8c0c(__shared_weak_count *param_1)

{
  ulong uVar1;
  __shared_weak_count *p_Var2;
  __shared_count *this;
  __shared_weak_count *p_Var3;
  
  p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
  p_Var3 = *(__shared_weak_count **)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_0172e3a0;
  if (p_Var3 != p_Var2) {
    this = *(__shared_count **)p_Var2;
    uVar1 = 1;
    while( true ) {
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__release_shared(this);
        p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
        p_Var3 = *(__shared_weak_count **)(param_1 + 0x18);
      }
      if ((ulong)((long)p_Var3 - (long)p_Var2 >> 3) <= uVar1) break;
      this = *(__shared_count **)(p_Var2 + uVar1 * 8);
      uVar1 = (ulong)((int)uVar1 + 1);
    }
  }
  if (((byte)param_1[0x120] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
    p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
  }
  if (p_Var2 != (__shared_weak_count *)0x0) {
    *(__shared_weak_count **)(param_1 + 0x18) = p_Var2;
    if (p_Var2 == param_1 + 0x30) {
      param_1[0x110] = (__shared_weak_count)0x0;
    }
    else {
      operator_delete(p_Var2);
    }
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}

