
bool FUN_008e1cf8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GList *this;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e1d1c to 009e1db7 has its CatchHandler @ 008e1b54 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GList::getNumItems(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getNumItems",iVar1,0);
  }
                    /* catch() { ... } // from try @ 008e1cd0 with catch @ 008e1d68 */
                    /* catch() { ... } // from try @ 008e1ce8 with catch @ 008e1d6c */
  return iVar1 == 0;
}

