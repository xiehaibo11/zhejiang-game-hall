
/* lua_cocos2dx_ui_TextAtlas_createInstance(lua_State*) */

undefined8 lua_cocos2dx_ui_TextAtlas_createInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 00976c44 to 00a76d53 has its CatchHandler @ 00976a6c */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::TextAtlas::createInstance();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Ref");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.TextAtlas:createInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

