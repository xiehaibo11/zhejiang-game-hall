
void FUN_00fca5c4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    local_2c[0] = DAT_01792520;
    (**(code **)(*plVar2 + 0x30))(plVar2,local_2c,param_1 + 0x40);
  }
  DAT_0179251c = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

