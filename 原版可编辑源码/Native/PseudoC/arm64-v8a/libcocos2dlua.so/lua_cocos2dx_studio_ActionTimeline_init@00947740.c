
/* lua_cocos2dx_studio_ActionTimeline_init(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 00947754 to 00a4779f has its CatchHandler @ 00947754
                       catch() { ... } // from try @ 00947754 with catch @ 00947754
                       catch() { ... } // from try @ 009477a4 with catch @ 00947754 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009477a0 to 00a477a3 has its CatchHandler @ 009477d8 */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
                    /* try { // try from 009477a4 to 00a477eb has its CatchHandler @ 00947754 */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:init",iVar1,0);
  }
  return iVar1 == 0;
}

