
undefined8 FUN_008e1534(undefined8 param_1)

{
  int iVar1;
  GList *this;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e1550 to 009e159b has its CatchHandler @ 008e1620 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GList::refreshVirtualList(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:refreshVirtualList",iVar1 + -1,0);
  }
  return 0;
}

