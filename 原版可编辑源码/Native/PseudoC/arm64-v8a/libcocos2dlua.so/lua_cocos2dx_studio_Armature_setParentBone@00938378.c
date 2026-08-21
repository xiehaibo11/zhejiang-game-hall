
/* lua_cocos2dx_studio_Armature_setParentBone(lua_State*) */

undefined4 lua_cocos2dx_studio_Armature_setParentBone(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x5b0))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 0093843c to 00a38443 has its CatchHandler @ 00938538 */
                    /* try { // try from 00938444 to 00a38487 has its CatchHandler @ 00938358 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Armature_setParentBone\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:setParentBone",iVar1 + -1,1);
  }
  return 0;
}

