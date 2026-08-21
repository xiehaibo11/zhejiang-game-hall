
/* lua_cocos2dx_studio_Armature_setBatchNode(lua_State*) */

undefined4 lua_cocos2dx_studio_Armature_setBatchNode(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 00938488 to 00a3849f has its CatchHandler @ 00938550 */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009384ac to 00a384c3 has its CatchHandler @ 0093854c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.BatchNode",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009384d4 to 00a384e7 has its CatchHandler @ 00938550 */
      (**(code **)(*plVar2 + 0x5d0))(plVar2,uVar4);
                    /* try { // try from 009384e8 to 00a3852f has its CatchHandler @ 00938358 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Armature_setBatchNode\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:setBatchNode",iVar1 + -1,1);
  }
                    /* try { // try from 00938530 to 00a38537 has its CatchHandler @ 00938538 */
                    /* catch() { ... } // from try @ 0093843c with catch @ 00938538
                       catch() { ... } // from try @ 00938530 with catch @ 00938538
                       try { // try from 00938538 to 00a3856b has its CatchHandler @ 00938358 */
  return 0;
}

