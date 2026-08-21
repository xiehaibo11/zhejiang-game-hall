
bool FUN_008f6a10(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ScrollPane *this;
  
                    /* try { // try from 008f6a18 to 009f6a8f has its CatchHandler @ 008f6a18
                       catch() { ... } // from try @ 008f6a18 with catch @ 008f6a18
                       catch() { ... } // from try @ 008f6aa0 with catch @ 008f6a18
                       catch() { ... } // from try @ 008f6b34 with catch @ 008f6a18 */
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = fairygui::ScrollPane::isBottomMost(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:isBottomMost",iVar1,0);
  }
  return iVar1 == 0;
}

