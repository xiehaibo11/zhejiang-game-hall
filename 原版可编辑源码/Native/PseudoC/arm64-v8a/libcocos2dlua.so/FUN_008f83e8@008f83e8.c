
bool FUN_008f83e8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  FUIInput *this;
  
                    /* try { // try from 008f83f8 to 009f842b has its CatchHandler @ 008f84f8 */
  this = (FUIInput *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = fairygui::FUIInput::isSingleLine(this);
                    /* try { // try from 008f8444 to 009f8477 has its CatchHandler @ 008f84c8 */
    lua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 008f842c to 009f843f has its CatchHandler @ 008f84c4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.FUIInput:isSingleLine",iVar1,0);
  }
  return iVar1 == 0;
}

