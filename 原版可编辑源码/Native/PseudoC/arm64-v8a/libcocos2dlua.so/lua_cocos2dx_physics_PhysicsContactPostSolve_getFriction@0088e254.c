
/* lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction(lua_State*) */

bool lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction(lua_State *param_1)

{
  int iVar1;
  PhysicsContactPostSolve *this;
  float fVar2;
  
  this = (PhysicsContactPostSolve *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::PhysicsContactPostSolve::getFriction(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsContactPostSolve:getFriction",iVar1,0);
  }
  return iVar1 == 0;
}

