
/* lua_dragonbones_AnimationState_isFadeOut(lua_State*) */

bool lua_dragonbones_AnimationState_isFadeOut(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,0 < *(int *)(lVar2 + 100));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d2c41,
               iVar1,0);
  }
  return iVar1 == 0;
}

