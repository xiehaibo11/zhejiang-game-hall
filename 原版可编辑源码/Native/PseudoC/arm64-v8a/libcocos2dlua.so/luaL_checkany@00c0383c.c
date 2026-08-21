
void luaL_checkany(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00c03214();
  if (lVar1 != *(long *)(param_1 + 0x10) + 0xe8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,param_2,0x227);
}

