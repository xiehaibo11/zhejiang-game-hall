
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getLinearDamping(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_getLinearDamping(lua_State *param_1)

{
  int iVar1;
  Physics3DRigidBody *this;
  float fVar2;
  
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Physics3DRigidBody::getLinearDamping(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 009bbcc0 to 00abbd17 has its CatchHandler @ 009bbcc0
                       catch() { ... } // from try @ 009bbcc0 with catch @ 009bbcc0
                       catch() { ... } // from try @ 009bbd50 with catch @ 009bbcc0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getLinearDamping",iVar1,0);
  }
  return iVar1 == 0;
}

