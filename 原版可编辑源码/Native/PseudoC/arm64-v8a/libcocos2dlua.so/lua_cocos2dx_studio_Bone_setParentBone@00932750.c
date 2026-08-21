
/* lua_cocos2dx_studio_Bone_setParentBone(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_setParentBone(lua_State *param_1)

{
  int iVar1;
  Bone *this;
  ulong uVar2;
  Bone *pBVar3;
  
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar2 & 1) != 0)) {
      pBVar3 = (Bone *)tolua_tousertype(param_1,2,0);
      cocostudio::Bone::setParentBone(this,pBVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Bone_setParentBone\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012cb428,
               iVar1 + -1,1);
  }
  return 0;
}

