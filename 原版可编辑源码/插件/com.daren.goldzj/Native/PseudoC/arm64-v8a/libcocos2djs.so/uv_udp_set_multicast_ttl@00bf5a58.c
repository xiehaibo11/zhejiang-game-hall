
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_set_multicast_ttl(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = param_2;
  if (param_2 < 0x100) {
    uVar1 = FUN_00bf4fdc(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0xb0),0x21,0x12,
                         &local_c);
  }
  else {
    uVar1 = 0xffffffea;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

