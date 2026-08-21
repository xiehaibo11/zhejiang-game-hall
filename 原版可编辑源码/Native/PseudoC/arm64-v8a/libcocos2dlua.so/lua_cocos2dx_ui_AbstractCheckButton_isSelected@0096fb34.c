
/* lua_cocos2dx_ui_AbstractCheckButton_isSelected(lua_State*) */

bool lua_cocos2dx_ui_AbstractCheckButton_isSelected(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  AbstractCheckButton *this;
  
                    /* catch() { ... } // from try @ 0096fab4 with catch @ 0096fb4c */
  this = (AbstractCheckButton *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0096facc with catch @ 0096fb50 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::AbstractCheckButton::isSelected(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.AbstractCheckButton:isSelected",iVar1,0);
                    /* catch() { ... } // from try @ 0096fa80 with catch @ 0096fb80 */
  }
  return iVar1 == 0;
}

