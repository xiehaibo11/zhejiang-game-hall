
/* lua_cocos2dx_studio_Bone_setBoneData(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_setBoneData(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.BoneData",0), (uVar3 & 1) != 0)) {
                    /* try { // try from 0093259c to 00a325cf has its CatchHandler @ 0093269c */
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
                    /* try { // try from 009325d0 to 00a325e3 has its CatchHandler @ 00932668 */
    }
    tolua_error(param_1,&DAT_012cb397,0);
  }
  else {
                    /* try { // try from 009325e8 to 00a3261b has its CatchHandler @ 0093266c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:setBoneData",iVar1 + -1,1);
  }
  return 0;
}

