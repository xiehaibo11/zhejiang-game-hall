
/* lua_cocos2dx_studio_Bone_setChildArmature(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_setChildArmature(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Armature",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x578))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012cb788,0);
  }
  else {
                    /* try { // try from 00933360 to 00a33393 has its CatchHandler @ 00933460 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:setChildArmature",iVar1 + -1,1);
  }
                    /* try { // try from 00933394 to 00a333a7 has its CatchHandler @ 0093342c */
  return 0;
}

