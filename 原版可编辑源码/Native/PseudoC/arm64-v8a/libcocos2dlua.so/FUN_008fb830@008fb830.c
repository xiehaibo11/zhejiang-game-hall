
undefined8 FUN_008fb830(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    uVar2 = lua_tointeger(param_1,2);
    *(uint *)(lVar3 + 0x34) = *(uint *)(lVar3 + 0x34) & (uVar2 ^ 0xffffffff);
                    /* try { // try from 008fb87c to 009fb893 has its CatchHandler @ 008fb9a4 */
  }
  else {
                    /* try { // try from 008fb898 to 009fb8af has its CatchHandler @ 008fb99c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.TextFormat:disableEffect",iVar1 + -1,1);
  }
  return 0;
}

