
/* lua_dragonbones_CCArmatureDisplay_getAnimation(lua_State*) */

undefined8 lua_dragonbones_CCArmatureDisplay_getAnimation(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  Animation *pAVar4;
  char *pcVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pAVar4 = (Animation *)(**(code **)(*plVar2 + 0x578))(plVar2);
    if (pAVar4 == (Animation *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar5 = getLuaTypeName<dragonBones::Animation>(pAVar4,"db.Animation");
      tolua_pushusertype(param_1,pAVar4,pcVar5);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d3de5,
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

