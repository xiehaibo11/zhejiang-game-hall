
undefined8 FUN_008f6d2c(undefined8 param_1)

{
  int iVar1;
  DragDropManager *this;
  
  this = (DragDropManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6e34 with catch @ 008f6d58
                        */
  if (iVar1 + -1 == 0) {
    fairygui::DragDropManager::cancel(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.DragDropManager:cancel",iVar1 + -1,0);
  }
  return 0;
}

