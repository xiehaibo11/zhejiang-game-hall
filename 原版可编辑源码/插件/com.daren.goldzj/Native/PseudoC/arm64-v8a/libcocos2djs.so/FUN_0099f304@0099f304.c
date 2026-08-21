
void FUN_0099f304(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_2c;
  long local_28;
  
                    /* try { // try from 0099f304 to 00a9f4c3 has its CatchHandler @ 0099f55c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *param_2;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

