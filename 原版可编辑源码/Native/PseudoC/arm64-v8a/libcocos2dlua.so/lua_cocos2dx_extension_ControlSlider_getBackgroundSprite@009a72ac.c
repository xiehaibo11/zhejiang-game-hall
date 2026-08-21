
/* lua_cocos2dx_extension_ControlSlider_getBackgroundSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSlider_getBackgroundSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x748))(plVar2);
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009a7338 to 00aa7377 has its CatchHandler @ 009a7114 */
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009a7324 to 00aa732b has its CatchHandler @ 009a7350 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
                    /* try { // try from 009a7330 to 00aa7337 has its CatchHandler @ 009a734c */
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:getBackgroundSprite",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

