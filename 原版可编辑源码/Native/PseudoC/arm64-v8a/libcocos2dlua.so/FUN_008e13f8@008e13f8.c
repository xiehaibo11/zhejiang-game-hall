
undefined8 FUN_008e13f8(undefined8 param_1)

{
  int iVar1;
  GList *this;
  
                    /* catch() { ... } // from try @ 008e1300 with catch @ 008e1400 */
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GList::setVirtualAndLoop(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setVirtualAndLoop",iVar1 + -1,0);
  }
  return 0;
}

