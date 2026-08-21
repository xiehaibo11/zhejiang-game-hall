
undefined8 FUN_008df7cc(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008df834 with catch @ 008df7dc
                       catch(type#1 @ 00000000) { ... } // from try @ 008df9fc with catch @ 008df7dc
                        */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x230);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008df82c to 009df833 has its CatchHandler @ 008dfb20 */
                    /* try { // try from 008df834 to 009df98b has its CatchHandler @ 008df7dc */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.ScrollPane");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getScrollPane",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

