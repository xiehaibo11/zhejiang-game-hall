
/* lua_cocos2dx_physics_PhysicsJointDistance_getDistance(lua_State*) */

bool lua_cocos2dx_physics_PhysicsJointDistance_getDistance(lua_State *param_1)

{
  int iVar1;
  PhysicsJointDistance *this;
  float fVar2;
  
  this = (PhysicsJointDistance *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::PhysicsJointDistance::getDistance(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsJointDistance:getDistance",iVar1,0);
  }
  return iVar1 == 0;
}

