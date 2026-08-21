
void ogg_page_serialno(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_50;
  undefined8 *puStack_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  local_30 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_38 = 0;
    local_30 = param_1[2];
    local_40 = *(long *)*param_1 + param_1[1];
    local_50 = param_1;
    puStack_48 = param_1;
    uVar2 = FUN_00e8b020(&local_50,0xe);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

