
/* lua_dragonbones_AnimationState_getAnimationData(lua_State*) */

undefined8 lua_dragonbones_AnimationState_getAnimationData(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  AnimationData *pAVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pAVar5 = *(AnimationData **)(lVar2 + 0x80);
    if (pAVar5 == (AnimationData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::AnimationData>(pAVar5,"db.AnimationData");
      tolua_pushusertype(param_1,pAVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d2ae3,
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

