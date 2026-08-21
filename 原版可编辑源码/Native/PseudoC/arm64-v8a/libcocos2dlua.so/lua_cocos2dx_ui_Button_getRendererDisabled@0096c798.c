
/* lua_cocos2dx_ui_Button_getRendererDisabled(lua_State*) */

undefined8 lua_cocos2dx_ui_Button_getRendererDisabled(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* catch() { ... } // from try @ 0096c418 with catch @ 0096c798 */
                    /* catch() { ... } // from try @ 0096c3fc with catch @ 0096c79c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0096c5b4 with catch @ 0096c7c0 */
                    /* catch() { ... } // from try @ 0096c580 with catch @ 0096c7c4 */
  if (iVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 0096c544 with catch @ 0096c7ec */
    pvVar4 = *(void **)(lVar2 + 0x500);
                    /* catch() { ... } // from try @ 0096c450 with catch @ 0096c7f0 */
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 0096c810 to 00a6c86f has its CatchHandler @ 0096c810
                       catch() { ... } // from try @ 0096c810 with catch @ 0096c810
                       catch() { ... } // from try @ 0096ca2c with catch @ 0096c810 */
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 0096c384 with catch @ 0096c7f4 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Scale9Sprite");
    }
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 0096c48c with catch @ 0096c7c8 */
                    /* catch() { ... } // from try @ 0096c3c0 with catch @ 0096c7cc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getRendererDisabled",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

