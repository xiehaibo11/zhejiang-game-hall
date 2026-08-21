
/* lua_cocos2dx_physics_PhysicsJoint_getWorld(lua_State*) */

undefined8 lua_cocos2dx_physics_PhysicsJoint_getWorld(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  PhysicsWorld *pPVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pPVar5 = *(PhysicsWorld **)(lVar2 + 0x48);
    if (pPVar5 == (PhysicsWorld *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::PhysicsWorld>(pPVar5,"cc.PhysicsWorld");
      tolua_pushusertype(param_1,pPVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsJoint:getWorld",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

