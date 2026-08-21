
/* lua_cocos2dx_physics3d_Physics3DConstraint_isEnabled(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DConstraint_isEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Physics3DConstraint *this;
  
  this = (Physics3DConstraint *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Physics3DConstraint::isEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConstraint:isEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

