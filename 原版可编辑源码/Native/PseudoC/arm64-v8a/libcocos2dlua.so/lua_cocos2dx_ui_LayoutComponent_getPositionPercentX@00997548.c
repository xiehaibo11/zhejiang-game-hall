
/* lua_cocos2dx_ui_LayoutComponent_getPositionPercentX(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_getPositionPercentX(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 009974ec with catch @ 00997560 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::LayoutComponent::getPositionPercentX(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0099757c to 00a975b3 has its CatchHandler @ 0099757c
                       catch() { ... } // from try @ 0099757c with catch @ 0099757c
                       catch() { ... } // from try @ 009975c4 with catch @ 0099757c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:getPositionPercentX",iVar1,0);
  }
                    /* try { // try from 009975b4 to 00a975c3 has its CatchHandler @ 00997628 */
  return iVar1 == 0;
}

