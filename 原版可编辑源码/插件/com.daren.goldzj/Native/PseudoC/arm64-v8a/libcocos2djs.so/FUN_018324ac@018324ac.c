
void FUN_018324ac(ulong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar6;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __s = acStack_458;
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  pcVar5 = strerror_r(param_3,acStack_458,0x400);
  iVar3 = (int)pcVar5;
  if (iVar3 != 0) {
    if (iVar3 == -1) {
      iVar3 = *piVar4;
    }
    if (iVar3 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    __s = acStack_458;
    snprintf(acStack_458,0x400,"Unknown error %d",(ulong)param_3);
  }
  *piVar4 = iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_018325a8;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_018325a8:
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

