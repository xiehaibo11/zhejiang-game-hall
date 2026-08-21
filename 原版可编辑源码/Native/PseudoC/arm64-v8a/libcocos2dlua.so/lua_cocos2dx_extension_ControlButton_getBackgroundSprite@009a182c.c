
/* lua_cocos2dx_extension_ControlButton_getBackgroundSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlButton_getBackgroundSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 009a1830 to 00aa18a3 has its CatchHandler @ 009a199c */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x768))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Scale9Sprite");
    }
                    /* try { // try from 009a18bc to 00aa18e3 has its CatchHandler @ 009a1974 */
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getBackgroundSprite",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

