
void lua_pushlightuserdata(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x2f != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x366);
  }
  **(ulong **)(param_1 + 0x28) = param_2 | 0xfffe000000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164();
  return;
}

