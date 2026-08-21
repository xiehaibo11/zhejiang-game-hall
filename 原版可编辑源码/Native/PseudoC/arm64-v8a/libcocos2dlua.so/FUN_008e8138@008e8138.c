
undefined8 FUN_008e8138(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  GRichTextField *this;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  HtmlObject *pHVar6;
  undefined8 *puVar7;
  
  this = (GRichTextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    plVar4 = (long *)fairygui::GRichTextField::getControls(this);
                    /* try { // try from 008e819c to 009e81e3 has its CatchHandler @ 008e8114 */
    lua_createtable(param_1,0,0);
    puVar7 = (undefined8 *)*plVar4;
    puVar1 = (undefined8 *)plVar4[1];
    if (puVar7 != puVar1) {
      iVar2 = 1;
      do {
        pHVar6 = (HtmlObject *)*puVar7;
        lua_pushnumber((double)iVar2,param_1);
        if (pHVar6 == (HtmlObject *)0x0) {
                    /* catch() { ... } // from try @ 008e8190 with catch @ 008e81d0 */
          lua_pushnil(param_1);
        }
        else {
          pcVar5 = getLuaTypeName<fairygui::HtmlObject>(pHVar6,"fairygui.HtmlObject");
          tolua_pushusertype(param_1,pHVar6,pcVar5);
        }
        lua_rawset(param_1,0xfffffffd);
        puVar7 = puVar7 + 1;
        iVar2 = iVar2 + 1;
      } while (puVar1 != puVar7);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRichTextField:getControls",iVar2 + -1,0);
    uVar3 = 0;
                    /* try { // try from 008e8190 to 009e819b has its CatchHandler @ 008e81d0 */
  }
  return uVar3;
}

