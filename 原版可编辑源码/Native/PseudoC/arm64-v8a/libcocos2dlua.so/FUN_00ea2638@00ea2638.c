
void FUN_00ea2638(long param_1,long param_2,int *param_3,undefined4 *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_30;
  int iStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  if (*param_3 == 0) {
    uVar1 = (ulong)(*(byte *)(param_2 + 0x38) >> 1);
    if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x40);
    }
    if (uVar1 == 0) {
      plVar3 = *(long **)(lVar4 + 0x20);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_6);
      }
    }
    else if (*(long **)(lVar4 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + 0x50) + 0x30))();
    }
  }
  else {
    plVar3 = *(long **)(lVar4 + 0xb0);
    if (plVar3 != (long *)0x0) {
      local_30 = *param_4;
      iStack_2c = *param_3;
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&iStack_2c,&local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

