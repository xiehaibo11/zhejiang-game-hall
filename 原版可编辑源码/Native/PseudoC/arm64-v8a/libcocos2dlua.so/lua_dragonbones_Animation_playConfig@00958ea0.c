
/* lua_dragonbones_Animation_playConfig(lua_State*) */

undefined8 lua_dragonbones_Animation_playConfig(lua_State *param_1)

{
  int iVar1;
  Animation *this;
  ulong uVar2;
  AnimationConfig *pAVar3;
  AnimationState *pAVar4;
  char *pcVar5;
  
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"db.AnimationConfig",0), (uVar2 & 1) != 0)) {
      pAVar3 = (AnimationConfig *)tolua_tousertype(param_1,2,0);
      pAVar4 = (AnimationState *)dragonBones::Animation::playConfig(this,pAVar3);
      if (pAVar4 != (AnimationState *)0x0) {
        pcVar5 = getLuaTypeName<dragonBones::AnimationState>(pAVar4,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar4,pcVar5);
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_Animation_playConfig\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Animation:playConfig",iVar1 + -1,1);
  }
  return 0;
}

