
bool FUN_008f4914(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008f4914 to 009f493b has its CatchHandler @ 008f4868 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008f493c to 009f494f has its CatchHandler @ 008f4988 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 0x54),param_1);
  }
  else {
                    /* try { // try from 008f4950 to 009f499b has its CatchHandler @ 008f4868 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getDecelerationRate",iVar1,0);
  }
  return iVar1 == 0;
}

