
undefined8 FUN_008f8adc(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008f8ac4 with catch @ 008f8afc */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x18);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GObject");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008f8b10 to 009f8c3f has its CatchHandler @ 008f8b10
                       catch() { ... } // from try @ 008f8b10 with catch @ 008f8b10
                       catch() { ... } // from try @ 008f8cc0 with catch @ 008f8b10 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.HtmlObject:getUI",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

