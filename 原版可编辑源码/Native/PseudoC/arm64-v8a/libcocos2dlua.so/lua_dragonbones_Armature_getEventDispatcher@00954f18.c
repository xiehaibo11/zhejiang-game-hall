
/* lua_dragonbones_Armature_getEventDispatcher(lua_State*) */

undefined8 lua_dragonbones_Armature_getEventDispatcher(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  IEventDispatcher *pIVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pIVar5 = *(IEventDispatcher **)(lVar2 + 0xb0);
    if (pIVar5 == (IEventDispatcher *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::IEventDispatcher>(pIVar5,"db.IEventDispatcher");
      tolua_pushusertype(param_1,pIVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:getEventDispatcher",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

