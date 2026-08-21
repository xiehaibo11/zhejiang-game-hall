
void FUN_01207fec(long *param_1,ulong param_2)

{
  long *__s;
  void *__s_00;
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  __s_00 = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s_00 >> 3)) {
    pvVar1 = __s_00;
    if (param_2 != 0) {
      pvVar1 = (void *)((long)__s_00 + param_2 * 8);
      memset(__s_00,0,param_2 * 8);
    }
    param_1[1] = (long)pvVar1;
    return;
  }
  lVar6 = (long)__s_00 - *param_1 >> 3;
  uVar7 = lVar6 + param_2;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
      goto LAB_012080ac;
    }
    if ((uVar7 < 0x1d) && ((char)param_1[0x20] == '\0')) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      plVar2 = param_1 + 4;
      goto LAB_012080ac;
    }
  }
  else {
    uVar7 = 0x1fffffffffffffff;
  }
  plVar2 = operator_new(uVar7 << 3);
LAB_012080ac:
  __s = plVar2 + lVar6;
  memset(__s,0,param_2 * 8);
  __n = param_1[1] - *param_1;
  if (0 < (long)__n) {
    memcpy((void *)((long)__s - __n),(void *)*param_1,__n);
  }
  plVar3 = (long *)*param_1;
  *param_1 = (long)((long)__s - __n);
  param_1[1] = (long)(__s + param_2);
  param_1[2] = (long)(plVar2 + uVar7);
  if (plVar3 != (long *)0x0) {
    if (plVar3 != param_1 + 4) {
      operator_delete(plVar3);
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

