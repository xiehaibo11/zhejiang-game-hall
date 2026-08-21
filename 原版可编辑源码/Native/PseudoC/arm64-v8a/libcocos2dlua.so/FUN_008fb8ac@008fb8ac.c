
bool FUN_008fb8ac(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
                    /* try { // try from 008fb8c0 to 009fb91f has its CatchHandler @ 008fb9a0 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 != 1) {
                    /* try { // try from 008fb920 to 009fb9bf has its CatchHandler @ 008fb788 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.TextFormat:hasEffect",iVar1,1);
  }
  else {
    uVar2 = lua_tointeger(param_1,2);
    lua_pushboolean(param_1,(*(uint *)(lVar3 + 0x34) & uVar2) != 0);
  }
  return iVar1 == 1;
}

