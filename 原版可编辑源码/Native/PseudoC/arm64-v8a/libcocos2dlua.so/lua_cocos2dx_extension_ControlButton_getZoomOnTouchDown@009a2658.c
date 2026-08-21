
/* lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 009a2668 to 00aa267f has its CatchHandler @ 009a2990 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x788))(plVar3);
                    /* try { // try from 009a26c4 to 00aa26e3 has its CatchHandler @ 009a2938 */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009a268c to 00aa26a3 has its CatchHandler @ 009a2954 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getZoomOnTouchDown",iVar1,0);
                    /* try { // try from 009a26a8 to 00aa26bf has its CatchHandler @ 009a293c */
  }
  return iVar1 == 0;
}

