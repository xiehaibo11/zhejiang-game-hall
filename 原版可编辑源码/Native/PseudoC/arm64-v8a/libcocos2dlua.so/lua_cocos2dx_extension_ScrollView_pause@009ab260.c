
/* lua_cocos2dx_extension_ScrollView_pause(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_pause(lua_State *param_1)

{
  int iVar1;
  Ref *pRVar2;
  ulong uVar3;
  
  pRVar2 = (Ref *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar3 & 1) != 0)) {
      tolua_tousertype(param_1,2,0);
      cocos2d::extension::ScrollView::pause(pRVar2);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_extension_ScrollView_pause\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:pause",iVar1 + -1,1);
  }
  return 0;
}

