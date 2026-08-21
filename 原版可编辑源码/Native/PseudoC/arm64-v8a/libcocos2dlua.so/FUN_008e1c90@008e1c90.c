
undefined8 FUN_008e1c90(undefined8 param_1)

{
  int iVar1;
  GList *this;
  
                    /* try { // try from 008e1c9c to 009e1ccf has its CatchHandler @ 008e1d9c */
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GList::clearSelection(this);
  }
  else {
                    /* try { // try from 008e1cd0 to 009e1ce3 has its CatchHandler @ 008e1d68 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:clearSelection",iVar1 + -1,0);
  }
                    /* try { // try from 008e1ce8 to 009e1d1b has its CatchHandler @ 008e1d6c */
  return 0;
}

