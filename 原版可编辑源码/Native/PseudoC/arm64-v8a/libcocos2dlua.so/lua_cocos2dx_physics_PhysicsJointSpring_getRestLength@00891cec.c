
/* lua_cocos2dx_physics_PhysicsJointSpring_getRestLength(lua_State*) */

bool lua_cocos2dx_physics_PhysicsJointSpring_getRestLength(lua_State *param_1)

{
  int iVar1;
  PhysicsJointSpring *this;
  float fVar2;
  
  this = (PhysicsJointSpring *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::PhysicsJointSpring::getRestLength(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsJointSpring:getRestLength",iVar1,0);
  }
  return iVar1 == 0;
}

