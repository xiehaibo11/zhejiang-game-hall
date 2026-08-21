
undefined8 FUN_008d9ca4(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar3 & 1) == 0)) {
                    /* try { // try from 008d9d50 to 009d9d5b has its CatchHandler @ 008da058 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setData\'",0);
    }
    else {
      uVar4 = tolua_tousertype(param_1,2,0);
      *(undefined8 *)(lVar2 + 400) = uVar4;
    }
  }
  else {
                    /* try { // try from 008d9d34 to 009d9d4b has its CatchHandler @ 008da0f4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setData",iVar1 + -1,1);
  }
                    /* try { // try from 008d9d60 to 009d9d83 has its CatchHandler @ 008da08c */
  return 0;
}

