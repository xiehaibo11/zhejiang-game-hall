
undefined8 FUN_008f7248(undefined8 param_1)

{
  DragDropManager *pDVar1;
  int iVar2;
  
  iVar2 = lua_gettop();
  pDVar1 = fairygui::DragDropManager::_inst;
  if (iVar2 + -1 == 0) {
    if (fairygui::DragDropManager::_inst != (DragDropManager *)0x0) {
      fairygui::DragDropManager::~DragDropManager(fairygui::DragDropManager::_inst);
      operator_delete(pDVar1);
    }
    fairygui::DragDropManager::_inst = (DragDropManager *)0x0;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.DragDropManager:destroyInstance",iVar2 + -1,0);
  }
  return 0;
}

