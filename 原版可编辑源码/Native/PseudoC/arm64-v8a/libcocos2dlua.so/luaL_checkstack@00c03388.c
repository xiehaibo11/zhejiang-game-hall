
void luaL_checkstack(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = lua_checkstack();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb308(param_1,0x77,param_3);
}

