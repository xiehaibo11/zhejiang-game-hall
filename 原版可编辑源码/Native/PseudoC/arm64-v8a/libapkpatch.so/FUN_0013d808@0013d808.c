
void FUN_0013d808(long param_1,long param_2,long param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  long *__s;
  char local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c[0] = -0xf;
  if (param_4 != 0) {
    if ((param_3 == param_2) ||
       (iVar2 = (**(code **)(param_1 + 0x10))(param_1,param_2,local_5c,(ulong)local_5c | 1),
       iVar2 == 0)) {
      __s = (long *)0x0;
      goto LAB_0013d8d8;
    }
    param_2 = param_2 + 1;
  }
  __s = (long *)(param_5 + 7U & 0xfffffffffffffff8);
  memset(__s,0,0xa0);
  __s[3] = (long)(__s + 0x14);
  __s[4] = (param_5 + param_6) - (long)(__s + 0x14);
  __s[1] = param_3;
  __s[2] = param_1;
  *__s = param_2;
  *(char *)(__s + 0x13) = local_5c[0];
  iVar2 = FUN_00130c50(__s + 5,(long)local_5c[0],"1.2.11",0x70);
  if (iVar2 != 0) {
    __s = (long *)0x0;
  }
LAB_0013d8d8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
  }
  return;
}

