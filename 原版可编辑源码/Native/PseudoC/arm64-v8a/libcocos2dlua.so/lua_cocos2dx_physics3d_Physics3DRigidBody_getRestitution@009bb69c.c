
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getRestitution(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_getRestitution(lua_State *param_1)

{
  int iVar1;
  Physics3DRigidBody *this;
  float fVar2;
  
                    /* try { // try from 009bb6a0 to 00abb6c7 has its CatchHandler @ 009bb600 */
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 009bb6c8 to 00abb6cf has its CatchHandler @ 009bb760 */
  if (iVar1 == 0) {
                    /* try { // try from 009bb6f0 to 00abb6f7 has its CatchHandler @ 009bb760 */
    fVar2 = (float)cocos2d::Physics3DRigidBody::getRestitution(this);
                    /* try { // try from 009bb6f8 to 00abb717 has its CatchHandler @ 009bb600 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 009bb6d0 to 00abb6ef has its CatchHandler @ 009bb600 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getRestitution",iVar1,0);
  }
  return iVar1 == 0;
}

