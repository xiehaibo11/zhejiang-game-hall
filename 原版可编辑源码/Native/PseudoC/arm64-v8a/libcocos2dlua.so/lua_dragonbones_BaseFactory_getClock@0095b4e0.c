
/* lua_dragonbones_BaseFactory_getClock(lua_State*) */

undefined8 lua_dragonbones_BaseFactory_getClock(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  WorldClock *pWVar4;
  char *pcVar5;
  
                    /* try { // try from 0095b4ec to 00a5b5a3 has its CatchHandler @ 0095b4ec
                       catch() { ... } // from try @ 0095b4ec with catch @ 0095b4ec
                       catch() { ... } // from try @ 0095b624 with catch @ 0095b4ec */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pWVar4 = (WorldClock *)dragonBones::DragonBones::getClock(*(DragonBones **)(lVar2 + 0x40));
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
               "db.BaseFactory:getClock",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

