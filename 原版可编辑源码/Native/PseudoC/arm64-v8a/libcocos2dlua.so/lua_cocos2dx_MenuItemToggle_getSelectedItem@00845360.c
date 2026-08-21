
/* lua_cocos2dx_MenuItemToggle_getSelectedItem(lua_State*) */

undefined8 lua_cocos2dx_MenuItemToggle_getSelectedItem(lua_State *param_1)

{
  int iVar1;
  MenuItemToggle *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (MenuItemToggle *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::MenuItemToggle::getSelectedItem(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.MenuItem");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemToggle:getSelectedItem",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

