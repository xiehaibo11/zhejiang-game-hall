
void FUN_00a1ce30(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
                    /* try { // try from 00a1ce44 to 00b1ce8f has its CatchHandler @ 00a1cdd4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00a208f0(&local_3c,param_3);
    if ((int)uVar2 != -1) {
      if ((int)uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_4 < 2) {
                    /* try { // try from 00a1ce90 to 00b1cef3 has its CatchHandler @ 00a1cfc0 */
        uVar2 = 0xfffffffe;
      }
      else {
        uVar2 = 2;
        *param_2 = local_3c;
        param_2[1] = local_3b;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

