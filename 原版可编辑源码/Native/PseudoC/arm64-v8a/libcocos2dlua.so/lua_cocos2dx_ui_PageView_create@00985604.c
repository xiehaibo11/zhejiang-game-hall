
/* lua_cocos2dx_ui_PageView_create(lua_State*) */

undefined8 lua_cocos2dx_ui_PageView_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::PageView::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccui.PageView");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0098562c to 00a8563b has its CatchHandler @ 009856a0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.PageView:create",iVar1 + -1,0);
                    /* try { // try from 0098563c to 00a856bb has its CatchHandler @ 009855f4 */
    uVar2 = 0;
  }
  return uVar2;
}

