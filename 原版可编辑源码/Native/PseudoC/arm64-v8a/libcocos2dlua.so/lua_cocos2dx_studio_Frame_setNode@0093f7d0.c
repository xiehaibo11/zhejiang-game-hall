
/* lua_cocos2dx_studio_Frame_setNode(lua_State*) */

undefined4 lua_cocos2dx_studio_Frame_setNode(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0093f7fc to 00a3f847 has its CatchHandler @ 0093f7fc
                       catch() { ... } // from try @ 0093f7fc with catch @ 0093f7fc
                       catch() { ... } // from try @ 0093f84c with catch @ 0093f7fc */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 0093f848 to 00a3f84b has its CatchHandler @ 0093f880 */
                    /* try { // try from 0093f84c to 00a3f893 has its CatchHandler @ 0093f7fc */
      (**(code **)(*plVar2 + 0x30))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 0093f894 to 00a3fa83 has its CatchHandler @ 0093f894
                       catch() { ... } // from try @ 0093f894 with catch @ 0093f894
                       catch() { ... } // from try @ 0093fb04 with catch @ 0093f894 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Frame_setNode\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 0093f848 with catch @ 0093f880 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Frame:setNode",iVar1 + -1,1);
  }
  return 0;
}

