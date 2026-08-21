
byte FUN_0013e2bc(long *param_1,undefined8 param_2,void *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar6 = *param_1;
  __n = param_4 - (long)param_3;
  lVar5 = *(long *)(lVar6 + 0x20);
  uVar1 = lVar5 + __n;
  *(ulong *)(lVar6 + 0x20) = uVar1;
  if (*(ulong *)(lVar6 + 8) < uVar1) {
    bVar3 = 0;
  }
  else if (*(long **)(lVar6 + 0x38) == (long *)0x0) {
    if (*(long *)(lVar6 + 0x40) == 0) {
      lVar5 = *param_1;
      *(size_t *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x28) + __n;
      bVar3 = FUN_0013e3d8(*(undefined8 *)(lVar5 + 0x30),param_3,__n);
    }
    else {
      local_38 = *(undefined8 *)(lVar6 + 0x28);
      local_2c = 0;
      iVar4 = FUN_0013e158(*(long *)(lVar6 + 0x40),param_3,param_4,uVar1 == *(ulong *)(lVar6 + 8),
                           &local_38,&local_2c);
      bVar3 = iVar4 != 0;
    }
  }
  else {
    memcpy((void *)(**(long **)(lVar6 + 0x38) + lVar5),param_3,__n);
    bVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

