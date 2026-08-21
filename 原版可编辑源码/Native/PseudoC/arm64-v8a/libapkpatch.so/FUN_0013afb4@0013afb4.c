
long * FUN_0013afb4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long *__ptr;
  ulong uVar3;
  byte local_15c [4];
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_15c[0] = 0;
  if ((param_5 != param_4) &&
     (iVar2 = (**(code **)(param_3 + 0x10))(param_3,param_4,local_15c,(ulong)local_15c | 1),
     iVar2 != 0)) {
    param_4 = param_4 + 1;
    if (((ulong)local_15c[0] <= (ulong)(param_5 - param_4)) &&
       (iVar2 = (**(code **)(param_3 + 0x10))
                          (param_3,param_4,auStack_158,auStack_158 + local_15c[0]), iVar2 != 0)) {
      uVar3 = (ulong)local_15c[0];
      __ptr = malloc(0x40a8);
      if (__ptr == (long *)0x0) goto LAB_0013b0b4;
      memset(__ptr + 2,0,0x90);
      *__ptr = param_3;
      __ptr[1] = param_4 + uVar3;
      __ptr[2] = param_5;
      __ptr[6] = 0;
      __ptr[0x14] = 0x4000;
      __ptr[0x13] = 0;
      __ptr[4] = 0;
      iVar2 = FUN_0012c644(__ptr + 3,auStack_158,uVar3,&PTR_FUN_0016ba10);
      if (iVar2 == 0) {
        FUN_0012b8f0(__ptr + 3);
        goto LAB_0013b0b4;
      }
      free(__ptr);
    }
  }
  __ptr = (long *)0x0;
LAB_0013b0b4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

