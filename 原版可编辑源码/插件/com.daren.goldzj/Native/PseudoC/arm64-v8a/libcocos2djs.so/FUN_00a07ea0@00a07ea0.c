
void FUN_00a07ea0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x90);
  if (plVar2 != (long *)0x0) {
    local_2c = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 00a07ed4 to 00b07ee3 has its CatchHandler @ 00a07fb8 */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + 0x10,&local_2c);
  }
                    /* try { // try from 00a07ef0 to 00b07f13 has its CatchHandler @ 00a07fb4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

