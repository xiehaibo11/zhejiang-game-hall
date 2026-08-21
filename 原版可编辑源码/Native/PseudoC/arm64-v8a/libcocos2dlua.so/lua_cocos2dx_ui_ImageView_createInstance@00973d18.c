
/* lua_cocos2dx_ui_ImageView_createInstance(lua_State*) */

undefined8 lua_cocos2dx_ui_ImageView_createInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
                    /* try { // try from 00973d30 to 00a73dcb has its CatchHandler @ 00973be0 */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::ImageView::createInstance();
    if (pvVar3 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00973cfc with catch @ 00973d80 */
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Ref");
                    /* catch() { ... } // from try @ 00973ce4 with catch @ 00973d7c */
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.ImageView:createInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

