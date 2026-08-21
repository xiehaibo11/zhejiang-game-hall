
long * FUN_0013acbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long *__ptr;
  undefined1 local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0;
  if ((param_5 != param_4) &&
     (iVar2 = (**(code **)(param_3 + 0x10))(param_3,param_4,local_4c,(ulong)local_4c | 1),
     iVar2 != 0)) {
    __ptr = malloc(0x40b8);
    if (__ptr == (long *)0x0) goto LAB_0013ad7c;
    memset(__ptr + 2,0,0xa0);
    *__ptr = param_3;
    __ptr[1] = param_4 + 1;
    __ptr[2] = param_5;
    __ptr[8] = 0;
    __ptr[0x16] = 0x4000;
    __ptr[0x15] = 0;
    __ptr[6] = 0;
    iVar2 = FUN_0012c754(__ptr + 3,local_4c[0],&PTR_FUN_0016ba10);
    if (iVar2 == 0) {
      FUN_0012c800(__ptr + 3);
      goto LAB_0013ad7c;
    }
    free(__ptr);
  }
  __ptr = (long *)0x0;
LAB_0013ad7c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

