
void FUN_018284d0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *__src;
  size_t __n;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 3)) {
    do {
      *puVar5 = 0;
      param_2 = param_2 - 1;
      puVar5 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar5;
    } while (param_2 != 0);
    return;
  }
  lVar6 = (long)puVar5 - *param_1 >> 3;
  uVar1 = lVar6 + param_2;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
      goto LAB_01828590;
    }
    if ((uVar7 < 0x1d) && ((char)param_1[0x20] == '\0')) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      plVar2 = param_1 + 4;
      goto LAB_01828590;
    }
  }
  else {
    uVar7 = 0x1fffffffffffffff;
  }
  plVar2 = operator_new(uVar7 << 3);
LAB_01828590:
  memset(plVar2 + lVar6,0,param_2 << 3);
  __src = (long *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)((long)(plVar2 + lVar6) - __n);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = (long *)*param_1;
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)(plVar2 + uVar1);
  param_1[2] = (long)(plVar2 + uVar7);
  if (__src != (long *)0x0) {
    if (__src != param_1 + 4) {
      operator_delete(__src);
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

