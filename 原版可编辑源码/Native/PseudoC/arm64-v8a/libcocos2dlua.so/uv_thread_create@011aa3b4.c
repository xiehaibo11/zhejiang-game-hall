
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int uv_thread_create(pthread_t *param_1,__start_routine *param_2,void *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  size_t __stacksize;
  pthread_attr_t local_80;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = getrlimit(RLIMIT_STACK,(rlimit *)&local_80);
  uVar3 = local_80.__align;
  if (iVar4 != 0) goto LAB_011aa490;
  if (local_80.__align == 0xffffffffffffffff) {
LAB_011aa424:
    __stacksize = 0x200000;
  }
  else {
    iVar4 = getpagesize();
    uVar6 = (ulong)iVar4;
    uVar1 = 0;
    if (uVar6 != 0) {
      uVar1 = (ulong)uVar3 / uVar6;
    }
    __stacksize = local_80.__align - (uVar3 - uVar1 * uVar6);
    local_80.__align = __stacksize;
    if (__stacksize >> 0xe == 0) goto LAB_011aa424;
  }
  iVar4 = pthread_attr_init(&local_80);
  if ((iVar4 == 0) && (iVar4 = pthread_attr_setstacksize(&local_80,__stacksize), iVar4 == 0)) {
    iVar4 = pthread_create(param_1,&local_80,param_2,param_3);
    iVar5 = pthread_attr_destroy(&local_80);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return -iVar4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
LAB_011aa490:
                    /* WARNING: Subroutine does not return */
  abort();
}

