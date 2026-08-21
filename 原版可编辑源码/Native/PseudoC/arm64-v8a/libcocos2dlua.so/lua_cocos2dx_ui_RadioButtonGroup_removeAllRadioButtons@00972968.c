
/* lua_cocos2dx_ui_RadioButtonGroup_removeAllRadioButtons(lua_State*) */

bool lua_cocos2dx_ui_RadioButtonGroup_removeAllRadioButtons(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6b8))(plVar2);
                    /* catch() { ... } // from try @ 009728d0 with catch @ 009729d0 */
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 00972904 with catch @ 0097299c */
                    /* catch() { ... } // from try @ 0097291c with catch @ 009729a0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButtonGroup:removeAllRadioButtons",iVar1,0);
  }
  return iVar1 == 0;
}

