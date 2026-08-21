
/* lua_dragonbones_IAnimatable_getClock(lua_State*) */

undefined8 lua_dragonbones_IAnimatable_getClock(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  WorldClock *pWVar4;
  char *pcVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pWVar4 = (WorldClock *)(**(code **)(*plVar2 + 0x18))(plVar2);
    if (pWVar4 == (WorldClock *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar5 = getLuaTypeName<dragonBones::WorldClock>(pWVar4,"db.WorldClock");
      tolua_pushusertype(param_1,pWVar4,pcVar5);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.IAnimatable:getClock",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

