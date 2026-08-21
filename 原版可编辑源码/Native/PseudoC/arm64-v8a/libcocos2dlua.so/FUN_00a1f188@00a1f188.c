
void FUN_00a1f188(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte local_3c;
  byte local_3b;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0x80) {
    *param_2 = (byte)param_3;
    uVar2 = 1;
  }
  else {
                    /* try { // try from 00a1f1cc to 00b1f1d7 has its CatchHandler @ 00a1f240 */
    uVar2 = FUN_00a15fac(param_1,&local_3c,param_3,2);
    if ((int)uVar2 != -1) {
                    /* try { // try from 00a1f1d8 to 00b1f287 has its CatchHandler @ 00a1f158 */
      if ((int)uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_4 < 2) {
        uVar2 = 0xfffffffe;
      }
      else {
        uVar2 = 2;
        *param_2 = local_3c ^ 0x80;
        param_2[1] = local_3b ^ 0x80;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

