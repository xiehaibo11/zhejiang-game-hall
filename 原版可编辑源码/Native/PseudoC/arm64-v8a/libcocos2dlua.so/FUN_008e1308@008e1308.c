
bool FUN_008e1308(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 008e1334 to 009e1347 has its CatchHandler @ 008e13cc */
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x2f4),param_1);
  }
  else {
                    /* try { // try from 008e134c to 009e137f has its CatchHandler @ 008e13d0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getColumnGap",iVar1,0);
  }
  return iVar1 == 0;
}

