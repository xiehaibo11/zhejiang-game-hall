
/* lua_cocos2dx_ui_TabControl_getHeaderWidth(lua_State*) */

bool lua_cocos2dx_ui_TabControl_getHeaderWidth(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 0099a980 to 00a9a9b7 has its CatchHandler @ 0099a788 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0099a9d0 to 00a9a9db has its CatchHandler @ 0099aa38 */
    tolua_pushnumber((double)*(int *)(lVar2 + 0x52c),param_1);
                    /* try { // try from 0099a9e0 to 00a9a9eb has its CatchHandler @ 0099aa30 */
  }
  else {
                    /* try { // try from 0099a9b8 to 00a9a9c3 has its CatchHandler @ 0099aa34 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e233d,
               iVar1,0);
  }
                    /* try { // try from 0099a9ec to 00a9aa73 has its CatchHandler @ 0099a788 */
  return iVar1 == 0;
}

