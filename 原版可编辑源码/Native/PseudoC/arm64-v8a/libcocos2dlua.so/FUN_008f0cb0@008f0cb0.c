
undefined8 FUN_008f0cb0(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f0cb0 to 009f0ceb has its CatchHandler @ 008f0d70 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x2a0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GObject");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008f0cec to 009f0de3 has its CatchHandler @ 008f0b7c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:getCloseButton",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

