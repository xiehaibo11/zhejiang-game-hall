
/* lua_dragonbones_AnimationState_getCurrentPlayTimes(lua_State*) */

bool lua_dragonbones_AnimationState_getCurrentPlayTimes(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  AnimationState *this;
  
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = dragonBones::AnimationState::getCurrentPlayTimes(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.AnimationState:getCurrentPlayTimes",iVar1,0);
  }
  return iVar1 == 0;
}

