
undefined8 FUN_008afb88(lua_State *param_1)

{
  int iVar1;
  MenuItemToggle *this;
  MenuItem *pMVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar1 = lua_gettop();
    if (iVar1 + -1 < 1) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.MenuItemToggle:create",iVar1 + -1,1);
      uVar3 = 0;
    }
    else {
      this = (MenuItemToggle *)cocos2d::MenuItemToggle::create();
      uVar3 = 0;
      if (this != (MenuItemToggle *)0x0) {
        iVar4 = 1;
        do {
          iVar4 = iVar4 + 1;
          pMVar2 = (MenuItem *)tolua_tousertype(param_1,iVar4,0);
          cocos2d::MenuItemToggle::addSubItem(this,pMVar2);
        } while (iVar1 != iVar4);
        cocos2d::MenuItemToggle::setSelectedIndex(this,0);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.MenuItemToggle");
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

