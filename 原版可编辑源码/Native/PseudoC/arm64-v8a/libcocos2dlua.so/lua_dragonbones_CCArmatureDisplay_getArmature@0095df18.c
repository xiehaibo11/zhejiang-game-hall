
/* lua_dragonbones_CCArmatureDisplay_getArmature(lua_State*) */

undefined8 lua_dragonbones_CCArmatureDisplay_getArmature(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  Armature *pAVar4;
  char *pcVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* try { // try from 0095df6c to 00a5df9f has its CatchHandler @ 0095e06c */
    pAVar4 = (Armature *)(**(code **)(*plVar2 + 0x570))(plVar2);
    if (pAVar4 == (Armature *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar5 = getLuaTypeName<dragonBones::Armature>(pAVar4,"db.Armature");
      tolua_pushusertype(param_1,pAVar4,pcVar5);
                    /* try { // try from 0095dfa0 to 00a5dfb3 has its CatchHandler @ 0095e038 */
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCArmatureDisplay:getArmature",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 0095dfb8 to 00a5dfeb has its CatchHandler @ 0095e03c */
  return uVar3;
}

