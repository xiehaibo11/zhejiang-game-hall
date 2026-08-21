
/* lua_cocos2dx_physics_PhysicsShapeEdgeChain_getPointsCount(lua_State*) */

bool lua_cocos2dx_physics_PhysicsShapeEdgeChain_getPointsCount(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  PhysicsShapeEdgeChain *this;
  
  this = (PhysicsShapeEdgeChain *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::PhysicsShapeEdgeChain::getPointsCount(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsShapeEdgeChain:getPointsCount",iVar1,0);
  }
  return iVar1 == 0;
}

