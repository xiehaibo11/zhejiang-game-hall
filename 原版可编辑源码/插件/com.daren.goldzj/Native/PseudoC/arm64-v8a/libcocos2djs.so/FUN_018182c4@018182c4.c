
void FUN_018182c4(__shared_weak_count *param_1)

{
  bool bVar1;
  __shared_weak_count *p_Var2;
  ulong uVar3;
  __shared_weak_count *p_Var4;
  ulong uVar5;
  
  p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
  p_Var4 = *(__shared_weak_count **)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_01cdb9e0;
  if (p_Var4 != p_Var2) {
    uVar3 = 0;
    uVar5 = 1;
    do {
      if (*(__shared_count **)(p_Var2 + uVar3 * 8) != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__release_shared(*(__shared_count **)(p_Var2 + uVar3 * 8));
        p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
        p_Var4 = *(__shared_weak_count **)(param_1 + 0x18);
      }
      bVar1 = uVar5 < (ulong)((long)p_Var4 - (long)p_Var2 >> 3);
      uVar3 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
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

