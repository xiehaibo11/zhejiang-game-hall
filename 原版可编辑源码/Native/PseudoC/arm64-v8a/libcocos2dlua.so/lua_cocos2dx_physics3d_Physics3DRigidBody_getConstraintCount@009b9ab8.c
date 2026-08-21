
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraintCount(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraintCount(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Physics3DRigidBody *this;
  
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Physics3DRigidBody::getConstraintCount(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getConstraintCount",iVar1,0);
  }
  return iVar1 == 0;
}

