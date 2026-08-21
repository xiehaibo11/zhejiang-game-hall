
/* lua_cocos2dx_ui_Slider_isScale9Enabled(lua_State*) */

bool lua_cocos2dx_ui_Slider_isScale9Enabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Slider *this;
  
  this = (Slider *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0097f818 with catch @ 0097f8d0 */
                    /* catch() { ... } // from try @ 0097f798 with catch @ 0097f8d4
                       catch() { ... } // from try @ 0097f868 with catch @ 0097f8d4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Slider::isScale9Enabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:isScale9Enabled",iVar1,0);
  }
  return iVar1 == 0;
}

