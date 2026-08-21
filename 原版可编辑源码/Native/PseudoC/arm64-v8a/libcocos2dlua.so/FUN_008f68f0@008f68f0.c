
undefined8 FUN_008f68f0(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f68fc to 009f692f has its CatchHandler @ 008f69fc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x118);
                    /* try { // try from 008f6948 to 009f697b has its CatchHandler @ 008f69cc */
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GScrollBar");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008f6930 to 009f6943 has its CatchHandler @ 008f69c8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getVtScrollBar",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 008f697c to 009f6a17 has its CatchHandler @ 008f6814 */
  return uVar3;
}

