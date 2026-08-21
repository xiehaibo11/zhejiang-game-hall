
/* lua_cocos2dx_studio_Tween_init(lua_State*) */

undefined8 lua_cocos2dx_studio_Tween_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009301e8 to 00a30283 has its CatchHandler @ 00930080 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar4 & 1) != 0)) {
                    /* catch() { ... } // from try @ 0093019c with catch @ 00930234 */
                    /* catch() { ... } // from try @ 009301b4 with catch @ 00930238 */
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar5);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Tween_init\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 00930168 with catch @ 00930268 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","ccs.Tween:init",
               iVar1 + -1,1);
  }
  return 0;
}

