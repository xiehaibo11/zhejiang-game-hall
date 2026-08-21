
undefined8 FUN_008e4cdc(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e4cf8 to 009e4d0b has its CatchHandler @ 008e4d90 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x2a0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008e4d44 to 009e4ddf has its CatchHandler @ 008e4b20 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GController");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008e4d10 to 009e4d43 has its CatchHandler @ 008e4d94 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:getRelatedController",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

