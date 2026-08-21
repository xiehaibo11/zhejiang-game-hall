
void FUN_01818218(long param_1,__shared_count *param_2,ulong param_3)

{
  ulong uVar1;
  __shared_count *this;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar4 = (long *)(param_1 + 0x10);
  lVar2 = *plVar4;
  uVar3 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
  if (uVar3 <= param_3) {
    uVar1 = param_3 + 1;
    if (uVar1 >= uVar3 && uVar1 - uVar3 != 0) {
      FUN_018284d0(plVar4,uVar1 - uVar3);
      lVar2 = *plVar4;
      this = *(__shared_count **)(lVar2 + param_3 * 8);
      goto joined_r0x0181828c;
    }
    if (uVar1 < uVar3) {
      *(ulong *)(param_1 + 0x18) = lVar2 + uVar1 * 8;
    }
  }
  this = *(__shared_count **)(lVar2 + param_3 * 8);
joined_r0x0181828c:
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar2 = *plVar4;
  }
  *(__shared_count **)(lVar2 + param_3 * 8) = param_2;
  return;
}

