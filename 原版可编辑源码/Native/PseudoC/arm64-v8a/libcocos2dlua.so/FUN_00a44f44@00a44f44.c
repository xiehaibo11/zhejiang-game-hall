
void FUN_00a44f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_128 [256];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00a44fa4(2,param_2,param_3,param_1,auStack_128,0x100);
                    /* catch() { ... } // from try @ 00a44ee8 with catch @ 00a44f80 */
                    /* catch() { ... } // from try @ 00a44f00 with catch @ 00a44f84 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}

