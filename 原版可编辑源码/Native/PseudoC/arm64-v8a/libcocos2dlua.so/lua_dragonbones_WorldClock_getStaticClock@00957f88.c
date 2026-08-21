
/* lua_dragonbones_WorldClock_getStaticClock(lua_State*) */

bool lua_dragonbones_WorldClock_getStaticClock(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pcVar2 = getLuaTypeName<dragonBones::WorldClock>
                       ((WorldClock *)&dragonBones::WorldClock::clock,"db.WorldClock");
    tolua_pushusertype(param_1,&dragonBones::WorldClock::clock,pcVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.WorldClock:getStaticClock",iVar1,0);
  }
  return iVar1 == 0;
}

