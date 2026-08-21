
/* lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundSelected(lua_State*) */

undefined8 lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundSelected(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x4f8);
    if (pvVar4 == (void *)0x0) {
                    /* catch() { ... } // from try @ 009704c0 with catch @ 009705c0 */
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 009704f4 with catch @ 0097058c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8c11,
               iVar1 + -1,0);
                    /* catch() { ... } // from try @ 0097050c with catch @ 00970590 */
    uVar3 = 0;
  }
  return uVar3;
}

