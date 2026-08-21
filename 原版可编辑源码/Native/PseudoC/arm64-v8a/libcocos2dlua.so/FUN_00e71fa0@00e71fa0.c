
void FUN_00e71fa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((**(char **)(param_1 + 0x10) == '\0') &&
     (plVar5 = *(long **)(param_1 + 8), *(int *)((long)plVar5 + 0x7c) != 4)) {
    uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)plVar5[0x14];
      *(undefined4 *)((long)plVar5 + 0x7c) = 5;
      if (plVar3 != (long *)0x0) {
        local_2c = 5;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_2c);
      }
      if (*(char *)plVar5[0x17] == '\0') {
        *(char *)plVar5[0x17] = '\x01';
        if ((long *)plVar5[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[10] + 0x30))();
          plVar5[10] = 0;
        }
      }
      pcVar4 = *(code **)(*plVar5 + 8);
    }
    else {
      pcVar4 = *(code **)(*plVar5 + 0x30);
    }
    (*pcVar4)(plVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

