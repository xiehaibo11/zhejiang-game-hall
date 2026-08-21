
undefined8 FUN_008f0d40(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x280);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GComponent");
    }
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 008f0cb0 with catch @ 008f0d70 */
                    /* catch() { ... } // from try @ 008f0bd0 with catch @ 008f0d84 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:getContentPane",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

