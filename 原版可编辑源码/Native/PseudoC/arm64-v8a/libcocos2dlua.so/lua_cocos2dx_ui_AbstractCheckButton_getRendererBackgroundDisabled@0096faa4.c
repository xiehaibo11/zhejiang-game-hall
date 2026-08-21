
/* lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundDisabled(lua_State*) */

undefined8 lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundDisabled(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 0096fab4 to 00a6fac7 has its CatchHandler @ 0096fb4c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0096facc to 00a6faff has its CatchHandler @ 0096fb50 */
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x508);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 0096fb00 to 00a6fb9b has its CatchHandler @ 0096f920 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.AbstractCheckButton:getRendererBackgroundDisabled",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

