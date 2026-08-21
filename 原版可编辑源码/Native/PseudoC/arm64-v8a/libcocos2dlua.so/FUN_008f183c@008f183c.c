
undefined8 FUN_008f183c(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x2a8);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008f18ac to 009f18fb has its CatchHandler @ 008f18ac
                       catch() { ... } // from try @ 008f18ac with catch @ 008f18ac
                       catch() { ... } // from try @ 008f193c with catch @ 008f18ac
                       catch() { ... } // from try @ 008f1980 with catch @ 008f18ac */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GObject");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:getDragArea",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

