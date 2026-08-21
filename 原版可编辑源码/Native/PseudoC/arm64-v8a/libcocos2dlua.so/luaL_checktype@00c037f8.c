
void luaL_checktype(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = lua_type();
  if (iVar1 == param_3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2);
}

