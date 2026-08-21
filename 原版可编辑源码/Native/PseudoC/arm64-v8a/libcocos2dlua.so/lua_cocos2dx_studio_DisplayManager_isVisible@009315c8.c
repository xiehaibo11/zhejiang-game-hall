
/* lua_cocos2dx_studio_DisplayManager_isVisible(lua_State*) */

bool lua_cocos2dx_studio_DisplayManager_isVisible(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 009315c8 to 00a31663 has its CatchHandler @ 00931490 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:isVisible",iVar1,0);
                    /* catch() { ... } // from try @ 0093157c with catch @ 00931614 */
                    /* catch() { ... } // from try @ 00931594 with catch @ 00931618 */
  }
  return iVar1 == 0;
}

