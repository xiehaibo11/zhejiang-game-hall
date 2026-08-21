
/* lua_cocos2dx_ui_Widget_getLayoutParameter(lua_State*) */

undefined8 lua_cocos2dx_ui_Widget_getLayoutParameter(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0096704c with catch @ 009670e4 */
                    /* catch() { ... } // from try @ 00967064 with catch @ 009670e8 */
  if (iVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00967018 with catch @ 00967118 */
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x5f8))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.LayoutParameter");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:getLayoutParameter",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

