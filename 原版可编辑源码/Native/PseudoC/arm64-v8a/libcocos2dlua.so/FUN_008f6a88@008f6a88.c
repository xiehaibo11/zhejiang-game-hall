
bool FUN_008f6a88(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ScrollPane *this;
  
                    /* try { // try from 008f6a90 to 009f6a9f has its CatchHandler @ 008f6b74 */
                    /* try { // try from 008f6aa0 to 009f6b27 has its CatchHandler @ 008f6a18 */
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::ScrollPane::getPageY(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getPageY",iVar1,0);
  }
  return iVar1 == 0;
}

