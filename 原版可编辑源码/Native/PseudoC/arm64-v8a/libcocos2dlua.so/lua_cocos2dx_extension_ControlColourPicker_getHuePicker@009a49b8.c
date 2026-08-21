
/* lua_cocos2dx_extension_ControlColourPicker_getHuePicker(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlColourPicker_getHuePicker(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 009a49b8 to 00aa49bb has its CatchHandler @ 009a4a18 */
                    /* try { // try from 009a49bc to 00aa4a2f has its CatchHandler @ 009a4874 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a48bc with catch @ 009a4a0c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4998 with catch @ 009a4a10
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4948 with catch @ 009a4a14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a49b8 with catch @ 009a4a18
                        */
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x6c8))(plVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4904 with catch @ 009a4a1c
                        */
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009a4a30 to 00aa4a33 has its CatchHandler @ 009a4a60 */
                    /* try { // try from 009a4a34 to 00aa4a73 has its CatchHandler @ 009a4874 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.ControlHuePicker");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlColourPicker:getHuePicker",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

