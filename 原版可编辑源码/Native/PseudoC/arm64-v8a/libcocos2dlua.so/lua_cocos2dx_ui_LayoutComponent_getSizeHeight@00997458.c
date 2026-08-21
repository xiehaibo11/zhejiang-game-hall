
/* lua_cocos2dx_ui_LayoutComponent_getSizeHeight(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_getSizeHeight(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  float fVar2;
  
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::LayoutComponent::getSizeHeight(this);
                    /* try { // try from 009974b4 to 00a974eb has its CatchHandler @ 009974b4
                       catch() { ... } // from try @ 009974b4 with catch @ 009974b4
                       catch() { ... } // from try @ 009974fc with catch @ 009974b4 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 00997424 with catch @ 00997498 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:getSizeHeight",iVar1,0);
  }
  return iVar1 == 0;
}

