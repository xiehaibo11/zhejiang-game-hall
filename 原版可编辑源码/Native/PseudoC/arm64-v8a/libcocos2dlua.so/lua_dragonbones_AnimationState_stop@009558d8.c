
/* lua_dragonbones_AnimationState_stop(lua_State*) */

bool lua_dragonbones_AnimationState_stop(lua_State *param_1)

{
  int iVar1;
  AnimationState *this;
  
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    dragonBones::AnimationState::stop(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 00955828 with catch @ 00955910
                       catch() { ... } // from try @ 009558bc with catch @ 00955910 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.AnimationState:stop",iVar1,0);
  }
  return iVar1 == 0;
}

