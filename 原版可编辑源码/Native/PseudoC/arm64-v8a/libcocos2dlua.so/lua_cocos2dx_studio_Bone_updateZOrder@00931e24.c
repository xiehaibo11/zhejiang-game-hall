
/* lua_cocos2dx_studio_Bone_updateZOrder(lua_State*) */

bool lua_cocos2dx_studio_Bone_updateZOrder(lua_State *param_1)

{
  int iVar1;
  Bone *this;
  
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::Bone::updateZOrder(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:updateZOrder",iVar1,0);
  }
  return iVar1 == 0;
}

