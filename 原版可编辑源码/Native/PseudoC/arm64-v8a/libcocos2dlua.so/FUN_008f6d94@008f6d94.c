
bool FUN_008f6d94(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(long *)(*plVar2 + 0xa0) != 0);
  }
  else {
                    /* try { // try from 008f6dd0 to 009f6ddb has its CatchHandler @ 008f6eb8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.DragDropManager:isDragging",iVar1,0);
  }
  return iVar1 == 0;
}

