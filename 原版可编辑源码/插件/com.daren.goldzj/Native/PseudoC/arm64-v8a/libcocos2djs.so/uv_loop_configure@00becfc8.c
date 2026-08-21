
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_loop_configure(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  uv__loop_configure(param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

