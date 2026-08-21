
undefined8 FUN_008eb67c(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    if (fairygui::UIPackage::_emptyTexture == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)fairygui::UIPackage::_emptyTexture + 0xc),
                 (int *)((long)fairygui::UIPackage::_emptyTexture + 0x10),
                 fairygui::UIPackage::_emptyTexture,"cc.Texture2D");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.UIPackage:getEmptyTexture",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

