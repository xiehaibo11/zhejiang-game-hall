
/* lua_dragonbones_AnimationState_play(lua_State*) */

bool lua_dragonbones_AnimationState_play(lua_State *param_1)

{
  int iVar1;
  AnimationState *this;
  
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    dragonBones::AnimationState::play(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d27f1,
               iVar1,0);
  }
  return iVar1 == 0;
}

