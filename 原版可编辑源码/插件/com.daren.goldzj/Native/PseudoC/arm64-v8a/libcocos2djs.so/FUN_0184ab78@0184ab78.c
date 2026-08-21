
void FUN_0184ab78(long param_1,long *param_2)

{
  ulong uVar1;
  long *__src;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  if ((lVar3 == 0) || (*(char *)(*param_2 + lVar3 + -1) != ']')) {
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184ad7c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar4 = param_2[2];
  uVar1 = lVar3 + 1;
  if (uVar1 < uVar4) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = uVar4 << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0184ad7c;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
  lVar3 = param_2[1] + 1;
  param_2[1] = lVar3;
  __src = *(long **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) == 0) {
    if ((__src != (long *)0x0) &&
       ((**(code **)(*__src + 0x20))(__src,param_2), *(char *)((long)__src + 9) != '\x01')) {
      (**(code **)(*__src + 0x28))(__src,param_2);
    }
  }
  else if ((__src != (long *)0x0) && (__n = *(long *)(param_1 + 0x20) - (long)__src, __n != 0)) {
    uVar4 = param_2[2];
    uVar1 = lVar3 + __n;
    if (uVar1 < uVar4) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = uVar4 << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184ad7c;
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0184ad7c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x0184ad78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}

