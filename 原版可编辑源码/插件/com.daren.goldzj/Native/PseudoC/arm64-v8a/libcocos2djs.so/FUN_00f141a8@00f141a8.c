
void FUN_00f141a8(undefined8 *param_1,int *param_2,char *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *__dest;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  void *__src;
  size_t __n;
  
  piVar5 = (int *)param_1[1];
  if (piVar5 < (int *)param_1[2]) {
    piVar2 = param_2;
    if (*param_3 == '\0') {
      piVar2 = param_2 + 1;
    }
    iVar7 = 2;
    if (*param_3 == '\0') {
      iVar7 = 3;
    }
    *piVar5 = *piVar2;
    piVar5[1] = iVar7;
    piVar5[2] = ((param_2[3] - param_2[2]) - param_2[1]) + *param_2;
    param_1[1] = param_1[1] + 0x10;
  }
  else {
    __src = (void *)*param_1;
    __n = (long)piVar5 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
LAB_00f14310:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)param_1[2] - (long)__src;
    uVar8 = lVar6 >> 3;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_00f14310;
      __dest = operator_new(uVar1 << 4);
    }
    iVar3 = *param_2;
    iVar4 = param_2[1];
    piVar5 = (int *)((long)__dest + ((long)__n >> 4) * 0x10);
    iVar7 = iVar3;
    if (*param_3 == '\0') {
      iVar7 = iVar4;
    }
    iVar9 = 2;
    if (*param_3 == '\0') {
      iVar9 = 3;
    }
    *piVar5 = iVar7;
    piVar5[1] = iVar9;
    piVar5[2] = ((iVar3 - iVar4) + param_2[3]) - param_2[2];
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = __dest;
    param_1[1] = piVar5 + 4;
    param_1[2] = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

