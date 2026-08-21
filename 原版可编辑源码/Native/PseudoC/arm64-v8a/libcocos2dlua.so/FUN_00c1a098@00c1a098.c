
void FUN_00c1a098(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 10) == '\0') {
    *(ulong *)(param_1 + 0x28) =
         *(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar1 + 0x20) + -0x5d) * 8;
  }
  FUN_00c19f80();
  return;
}

