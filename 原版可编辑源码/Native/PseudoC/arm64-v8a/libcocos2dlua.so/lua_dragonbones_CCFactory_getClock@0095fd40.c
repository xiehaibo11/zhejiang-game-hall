
/* lua_dragonbones_CCFactory_getClock(lua_State*) */

undefined8 lua_dragonbones_CCFactory_getClock(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  WorldClock *pWVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
                    /* try { // try from 0095fd84 to 00a5fd87 has its CatchHandler @ 0095fdbc */
                    /* try { // try from 0095fd88 to 00a5fdcf has its CatchHandler @ 0095fd38 */
    pWVar3 = (WorldClock *)
             dragonBones::DragonBones::getClock(dragonBones::CCFactory::_dragonBonesInstance);
    if (pWVar3 == (WorldClock *)0x0) {
                    /* catch() { ... } // from try @ 0095fd84 with catch @ 0095fdbc */
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::WorldClock>(pWVar3,"db.WorldClock");
      tolua_pushusertype(param_1,pWVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.CCFactory:getClock",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

