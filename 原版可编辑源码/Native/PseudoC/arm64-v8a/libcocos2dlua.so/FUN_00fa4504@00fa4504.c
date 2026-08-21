
void FUN_00fa4504(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 8);
  lVar3 = *param_2;
  *(undefined8 *)(*plVar2 + 0x30) = *(undefined8 *)(lVar3 + 0x88);
  local_30 = *plVar2;
  plVar2 = *(long **)(lVar3 + 0x50);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(**(long **)(param_1 + 8) + 0x28) != '\0');
}

