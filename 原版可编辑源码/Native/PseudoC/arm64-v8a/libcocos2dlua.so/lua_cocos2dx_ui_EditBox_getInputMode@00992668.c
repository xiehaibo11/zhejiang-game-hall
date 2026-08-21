
/* lua_cocos2dx_ui_EditBox_getInputMode(lua_State*) */

bool lua_cocos2dx_ui_EditBox_getInputMode(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  EditBox *this;
  
                    /* catch() { ... } // from try @ 00992568 with catch @ 00992668 */
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::EditBox::getInputMode(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:getInputMode",iVar1,0);
  }
  return iVar1 == 0;
}

