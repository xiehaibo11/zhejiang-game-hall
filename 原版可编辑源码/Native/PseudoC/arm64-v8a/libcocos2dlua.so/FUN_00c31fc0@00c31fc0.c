
undefined8 FUN_00c31fc0(long param_1)

{
  int iVar1;
  
  FUN_00c29e20(param_1,2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + 0x10;
  iVar1 = lua_setfenv(param_1,1);
  if (iVar1 != 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x4be);
}

