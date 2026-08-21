
/* lua_dragonbones_CCFactory_getSoundEventManager(lua_State*) */

undefined8 lua_dragonbones_CCFactory_getSoundEventManager(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 0095ec60 to 00a5ec73 has its CatchHandler @ 0095ecf8 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095ec78 to 00a5ecab has its CatchHandler @ 0095ecfc */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* try { // try from 0095ecac to 00a5ed47 has its CatchHandler @ 0095eb74 */
    pvVar4 = (void *)(**(code **)(*plVar2 + 0xf0))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "db.CCArmatureDisplay");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCFactory:getSoundEventManager",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

