
/* lua_cocos2dx_ui_CheckBox_createInstance(lua_State*) */

undefined8 lua_cocos2dx_ui_CheckBox_createInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
                    /* try { // try from 00971608 to 00a7161f has its CatchHandler @ 009716a8 */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::CheckBox::createInstance();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00971654 to 00a71667 has its CatchHandler @ 009716ac */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Ref");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 00971620 to 00a71653 has its CatchHandler @ 0097159c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.CheckBox:createInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* try { // try from 00971668 to 00a716c7 has its CatchHandler @ 0097159c */
  return uVar2;
}

