
bool FUN_008f4988(undefined8 param_1)

{
  int iVar1;
  ScrollPane *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 008f48b8 with catch @ 008f4988
                       catch() { ... } // from try @ 008f493c with catch @ 008f4988 */
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::ScrollPane::getPercX(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getPercX",iVar1,0);
  }
  return iVar1 == 0;
}

