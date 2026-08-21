
/* lua_cocos2dx_studio_ArmatureData_addBoneData(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureData_addBoneData(lua_State *param_1)

{
  int iVar1;
  ArmatureData *this;
  ulong uVar2;
  BoneData *pBVar3;
  
  this = (ArmatureData *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.BoneData",0), (uVar2 & 1) != 0)) {
      pBVar3 = (BoneData *)tolua_tousertype(param_1,2,0);
      cocostudio::ArmatureData::addBoneData(this,pBVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ArmatureData_addBoneData\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureData:addBoneData",iVar1 + -1,1);
  }
  return 0;
}

