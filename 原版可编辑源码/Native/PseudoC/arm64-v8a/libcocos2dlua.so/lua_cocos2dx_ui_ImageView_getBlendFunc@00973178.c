
/* lua_cocos2dx_ui_ImageView_getBlendFunc(lua_State*) */

bool lua_cocos2dx_ui_ImageView_getBlendFunc(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  BlendFunc *pBVar3;
  
                    /* try { // try from 0097317c to 00a73193 has its CatchHandler @ 00973244 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009731a0 to 00a731b7 has its CatchHandler @ 00973240 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pBVar3 = (BlendFunc *)(**(code **)(*plVar2 + 0x688))(plVar2);
    blendfunc_to_luaval(param_1,pBVar3);
  }
  else {
                    /* try { // try from 009731b8 to 00a731eb has its CatchHandler @ 0097312c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:getBlendFunc",iVar1,0);
  }
                    /* try { // try from 009731ec to 00a731ff has its CatchHandler @ 00973244 */
  return iVar1 == 0;
}

