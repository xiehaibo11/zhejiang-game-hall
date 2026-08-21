
undefined8 FUN_008f17ac(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f17b8 to 009f17cb has its CatchHandler @ 008f1810 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008f17cc to 009f182b has its CatchHandler @ 008f165c */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x298);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 008f16b0 with catch @ 008f180c
                       catch() { ... } // from try @ 008f17a0 with catch @ 008f180c */
                    /* catch() { ... } // from try @ 008f1708 with catch @ 008f1810
                       catch() { ... } // from try @ 008f17b8 with catch @ 008f1810 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GObject");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:getModalWaitingPane",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

