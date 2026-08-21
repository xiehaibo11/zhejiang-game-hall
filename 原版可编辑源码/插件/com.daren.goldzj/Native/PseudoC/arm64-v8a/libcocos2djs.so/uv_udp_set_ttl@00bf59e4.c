
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_set_ttl(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ___stack_chk_guard;
  if (param_2 - 1U < 0xff) {
    uVar2 = FUN_00bf4fdc(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0xb0),2,0x10);
  }
  else {
    uVar2 = 0xffffffea;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

