
undefined8 FUN_00c13f08(long param_1)

{
  ulong uVar1;
  
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar1 = **(ulong **)(param_1 + 0x20), (int)((long)uVar1 >> 0x2f) == -0xd)) {
    uVar1 = uVar1 & 0x7fffffffffff;
    if (*(char *)(uVar1 + 10) == '\x02') {
      FUN_00c24ec8(uVar1 + 0x30);
    }
  }
  return 0;
}

