
/* lua_cocos2dx_ui_ListView_getMagneticType(lua_State*) */

bool lua_cocos2dx_ui_ListView_getMagneticType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ListView *this;
  
                    /* try { // try from 0097cd60 to 00a7cd73 has its CatchHandler @ 0097cdf0 */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0097cd74 to 00a7ce47 has its CatchHandler @ 0097cc88 */
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::ListView::getMagneticType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getMagneticType",iVar1,0);
  }
  return iVar1 == 0;
}

