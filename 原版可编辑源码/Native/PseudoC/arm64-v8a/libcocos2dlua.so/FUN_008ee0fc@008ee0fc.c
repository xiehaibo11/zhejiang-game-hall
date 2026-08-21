
bool FUN_008ee0fc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008ee108 to 009ee153 has its CatchHandler @ 008ee108
                       catch() { ... } // from try @ 008ee108 with catch @ 008ee108
                       catch() { ... } // from try @ 008ee158 with catch @ 008ee108 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008ee154 to 009ee157 has its CatchHandler @ 008ee18c */
                    /* try { // try from 008ee158 to 009ee19f has its CatchHandler @ 008ee108 */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x70),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GController:getSelectedIndex",iVar1,0);
  }
  return iVar1 == 0;
}

