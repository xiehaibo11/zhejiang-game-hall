
void uv_update_time(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_011ac764(1);
  *(ulong *)(param_1 + 0x220) = uVar1 / 1000000;
  return;
}

