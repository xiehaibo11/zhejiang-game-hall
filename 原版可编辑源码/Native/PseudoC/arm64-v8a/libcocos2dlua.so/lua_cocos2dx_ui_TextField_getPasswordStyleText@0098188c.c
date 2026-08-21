
/* lua_cocos2dx_ui_TextField_getPasswordStyleText(lua_State*) */

bool lua_cocos2dx_ui_TextField_getPasswordStyleText(lua_State *param_1)

{
  int iVar1;
  TextField *this;
  undefined8 uVar2;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::TextField::getPasswordStyleText(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getPasswordStyleText",iVar1,0);
  }
  return iVar1 == 0;
}

