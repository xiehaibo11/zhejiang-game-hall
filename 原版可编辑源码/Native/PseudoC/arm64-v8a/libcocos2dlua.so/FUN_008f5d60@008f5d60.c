
undefined8 FUN_008f5d60(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f5d6c to 009f5d7f has its CatchHandler @ 008f5e04 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008f5d84 to 009f5db7 has its CatchHandler @ 008f5e08 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x130);
                    /* try { // try from 008f5db8 to 009f5e53 has its CatchHandler @ 008f55c0 */
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GController");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getPageController",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

