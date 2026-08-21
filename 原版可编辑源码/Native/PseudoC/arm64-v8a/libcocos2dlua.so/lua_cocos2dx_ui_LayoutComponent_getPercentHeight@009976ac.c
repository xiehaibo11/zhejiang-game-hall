
/* lua_cocos2dx_ui_LayoutComponent_getPercentHeight(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_getPercentHeight(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  float fVar2;
  
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::LayoutComponent::getPercentHeight(this);
                    /* try { // try from 0099770c to 00a97743 has its CatchHandler @ 0099770c
                       catch() { ... } // from try @ 0099770c with catch @ 0099770c
                       catch() { ... } // from try @ 00997754 with catch @ 0099770c */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 0099767c with catch @ 009976f0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:getPercentHeight",iVar1,0);
  }
  return iVar1 == 0;
}

