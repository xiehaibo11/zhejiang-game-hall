
/* lua_cocos2dx_physics_PhysicsWorld_getAllBodies(lua_State*) */

bool lua_cocos2dx_physics_PhysicsWorld_getAllBodies(lua_State *param_1)

{
  int iVar1;
  PhysicsWorld *this;
  Vector *pVVar2;
  
  this = (PhysicsWorld *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocos2d::PhysicsWorld::getAllBodies(this);
    ccvector_to_luaval<cocos2d::PhysicsBody*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsWorld:getAllBodies",iVar1,0);
  }
  return iVar1 == 0;
}

