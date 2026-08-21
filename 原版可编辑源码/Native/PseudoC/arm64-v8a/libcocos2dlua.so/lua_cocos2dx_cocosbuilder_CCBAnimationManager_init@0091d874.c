
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_init(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0091d894 to 00a1d897 has its CatchHandler @ 0091d8ec */
                    /* try { // try from 0091d898 to 00a1d8ff has its CatchHandler @ 0091d848 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:init",iVar1,0);
  }
                    /* catch() { ... } // from try @ 0091d894 with catch @ 0091d8ec */
  return iVar1 == 0;
}

