
bool FUN_008e2588(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GList *this;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GList::getSelectedIndex(this);
                    /* try { // try from 008e25e8 to 009e25ff has its CatchHandler @ 008e2f40 */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getSelectedIndex",iVar1,0);
  }
  return iVar1 == 0;
}

