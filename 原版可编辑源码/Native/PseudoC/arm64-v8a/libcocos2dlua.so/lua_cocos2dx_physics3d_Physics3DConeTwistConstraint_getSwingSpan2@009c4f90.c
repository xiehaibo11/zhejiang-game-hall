
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan2(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan2(lua_State *param_1)

{
  int iVar1;
  Physics3DConeTwistConstraint *this;
  float fVar2;
  
  this = (Physics3DConeTwistConstraint *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Physics3DConeTwistConstraint::getSwingSpan2(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConeTwistConstraint:getSwingSpan2",iVar1,0);
  }
  return iVar1 == 0;
}

