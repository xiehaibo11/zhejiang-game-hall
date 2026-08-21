
/* lua_dragonbones_CCFactory_getFactory(lua_State*) */

undefined8 lua_dragonbones_CCFactory_getFactory(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  CCFactory *pCVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    if (dragonBones::CCFactory::_factory == (CCFactory *)0x0) {
      pCVar3 = operator_new(0x68);
      dragonBones::CCFactory::CCFactory(pCVar3);
      dragonBones::CCFactory::_factory = pCVar3;
    }
    pCVar3 = dragonBones::CCFactory::_factory;
    pcVar4 = getLuaTypeName<dragonBones::CCFactory>(dragonBones::CCFactory::_factory,"db.CCFactory")
    ;
    tolua_pushusertype(param_1,pCVar3,pcVar4);
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012d4419,
               iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

