
long * FUN_0013b300(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long *__ptr;
  char local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = malloc(0x40a0);
  if (__ptr != (long *)0x0) {
    local_4c[0] = -0xf;
    if ((param_5 != param_4) &&
       (iVar2 = (**(code **)(param_3 + 0x10))(param_3,param_4,local_4c,(ulong)local_4c | 1),
       iVar2 != 0)) {
      __ptr[5] = 0;
      __ptr[4] = 0;
      __ptr[7] = 0;
      __ptr[6] = 0;
      __ptr[3] = (long)(__ptr + 0x14);
      __ptr[4] = 0x4000;
      __ptr[0x11] = 0;
      __ptr[0x10] = 0;
      __ptr[0x13] = 0;
      __ptr[0x12] = 0;
      __ptr[0xd] = 0;
      __ptr[0xc] = 0;
      __ptr[0xf] = 0;
      __ptr[0xe] = 0;
      __ptr[9] = 0;
      __ptr[8] = 0;
      __ptr[0xb] = 0;
      __ptr[10] = 0;
      __ptr[1] = param_5;
      __ptr[2] = param_3;
      *__ptr = param_4 + 1;
      *(char *)(__ptr + 0x13) = local_4c[0];
      iVar2 = FUN_00130c50(__ptr + 5,(long)local_4c[0],"1.2.11",0x70);
      if (iVar2 == 0) goto LAB_0013b3c8;
    }
    free(__ptr);
    __ptr = (long *)0x0;
  }
LAB_0013b3c8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

