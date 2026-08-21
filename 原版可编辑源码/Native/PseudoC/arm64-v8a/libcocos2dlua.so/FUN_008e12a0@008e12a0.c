
undefined8 FUN_008e12a0(undefined8 param_1)

{
  int iVar1;
  GList *this;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GList::selectAll(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:selectAll",iVar1 + -1,0);
  }
                    /* try { // try from 008e1300 to 009e1333 has its CatchHandler @ 008e1400 */
  return 0;
}

