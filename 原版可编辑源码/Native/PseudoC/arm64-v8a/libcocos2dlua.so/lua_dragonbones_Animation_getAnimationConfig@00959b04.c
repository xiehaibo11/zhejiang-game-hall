
/* lua_dragonbones_Animation_getAnimationConfig(lua_State*) */

undefined8 lua_dragonbones_Animation_getAnimationConfig(lua_State *param_1)

{
  int iVar1;
  Animation *this;
  undefined8 uVar2;
  AnimationConfig *pAVar3;
  char *pcVar4;
  
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pAVar3 = (AnimationConfig *)dragonBones::Animation::getAnimationConfig(this);
    if (pAVar3 == (AnimationConfig *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00959b70 to 00a59bbb has its CatchHandler @ 00959b70
                       catch() { ... } // from try @ 00959b70 with catch @ 00959b70
                       catch() { ... } // from try @ 00959bc0 with catch @ 00959b70 */
      pcVar4 = getLuaTypeName<dragonBones::AnimationConfig>(pAVar3,"db.AnimationConfig");
      tolua_pushusertype(param_1,pAVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Animation:getAnimationConfig",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

