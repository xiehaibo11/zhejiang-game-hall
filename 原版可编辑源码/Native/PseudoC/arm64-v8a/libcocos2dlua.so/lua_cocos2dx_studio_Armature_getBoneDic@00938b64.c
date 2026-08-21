
/* lua_cocos2dx_studio_Armature_getBoneDic(lua_State*) */

bool lua_cocos2dx_studio_Armature_getBoneDic(lua_State *param_1)

{
  int iVar1;
  Armature *this;
  Map *pMVar2;
  
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pMVar2 = (Map *)cocostudio::Armature::getBoneDic(this);
    ccmap_string_key_to_luaval<cocostudio::Bone*>(param_1,pMVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:getBoneDic",iVar1,0);
  }
  return iVar1 == 0;
}

