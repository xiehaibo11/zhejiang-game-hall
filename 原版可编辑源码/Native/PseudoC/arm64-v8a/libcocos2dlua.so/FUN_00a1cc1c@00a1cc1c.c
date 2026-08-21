
void FUN_00a1cc1c(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  char local_3c;
  byte local_3b;
  byte local_3a;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0x80) {
    *param_2 = (byte)param_3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00a20728(&local_3c,param_3);
                    /* try { // try from 00a1cc64 to 00b1ccb7 has its CatchHandler @ 00a1cc64
                       catch() { ... } // from try @ 00a1cc64 with catch @ 00a1cc64
                       catch() { ... } // from try @ 00a1cd30 with catch @ 00a1cc64
                       catch() { ... } // from try @ 00a1cd74 with catch @ 00a1cc64 */
    if ((int)uVar2 != -1) {
      if ((int)uVar2 != 3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (local_3c == '\x01') {
        if (1 < param_4) {
          uVar2 = 2;
          *param_2 = local_3b ^ 0x80;
          param_2[1] = local_3a ^ 0x80;
          goto LAB_00a1cce4;
        }
      }
      else if (3 < param_4) {
                    /* try { // try from 00a1ccb8 to 00b1cd2f has its CatchHandler @ 00a1cdb8 */
        *param_2 = 0x8e;
        param_2[1] = local_3c + 0xa0;
        uVar2 = 4;
        param_2[2] = local_3b ^ 0x80;
        param_2[3] = local_3a ^ 0x80;
        goto LAB_00a1cce4;
      }
      uVar2 = 0xfffffffe;
    }
  }
LAB_00a1cce4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

