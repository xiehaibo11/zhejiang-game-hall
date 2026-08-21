
/* lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 009a4114 to 00aa4117 has its CatchHandler @ 009a41b8 */
                    /* try { // try from 009a4118 to 00aa4183 has its CatchHandler @ 009a401c */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a40f4 with catch @ 009a4168
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a40b0 with catch @ 009a416c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a40a8 with catch @ 009a4170
                        */
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x6d0))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009a4184 to 00aa4187 has its CatchHandler @ 009a41b4 */
                    /* try { // try from 009a4188 to 00aa41cb has its CatchHandler @ 009a401c */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSaturationBrightnessPicker:getOverlay",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

