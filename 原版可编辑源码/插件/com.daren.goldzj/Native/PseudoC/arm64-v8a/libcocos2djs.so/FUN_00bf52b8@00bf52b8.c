
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf52b8(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong local_28 [3];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    uVar1 = 0x10;
  }
  else {
    if (param_2 != 10) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = 0x1c;
    local_28[2] = 0;
    local_10 = 0;
  }
  local_28[0] = (ulong)(ushort)param_2;
  local_28[1] = 0;
  uv__udp_bind(param_1,local_28,uVar1,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

