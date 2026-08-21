
/* lua_dragonbones_Armature_getAnimation(lua_State*) */

undefined8 lua_dragonbones_Armature_getAnimation(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  Animation *pAVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pAVar5 = *(Animation **)(lVar2 + 0xa8);
    if (pAVar5 == (Animation *)0x0) {
                    /* try { // try from 00954e68 to 00a54eb3 has its CatchHandler @ 00954e68
                       catch() { ... } // from try @ 00954e68 with catch @ 00954e68
                       catch() { ... } // from try @ 00954eb8 with catch @ 00954e68 */
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::Animation>(pAVar5,"db.Animation");
      tolua_pushusertype(param_1,pAVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:getAnimation",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

