
bool FUN_008e1380(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e1380 to 009e141b has its CatchHandler @ 008e1230 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x2e8),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getLineCount",iVar1,0);
                    /* catch() { ... } // from try @ 008e1334 with catch @ 008e13cc */
                    /* catch() { ... } // from try @ 008e134c with catch @ 008e13d0 */
  }
  return iVar1 == 0;
}

