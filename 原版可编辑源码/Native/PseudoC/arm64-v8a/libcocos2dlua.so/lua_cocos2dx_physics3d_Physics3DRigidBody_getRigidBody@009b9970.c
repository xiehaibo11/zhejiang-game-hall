
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getRigidBody(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DRigidBody_getRigidBody(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  btRigidBody *pbVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pbVar5 = *(btRigidBody **)(lVar2 + 0x78);
    if (pbVar5 == (btRigidBody *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<btRigidBody>(pbVar5,"btRigidBody");
      tolua_pushusertype(param_1,pbVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getRigidBody",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

