
/* lua_cocos2dx_physics3d_Physics3DRigidBody_setCenterOfMassTransform(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_setCenterOfMassTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  ulong uVar3;
  bool bVar4;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Mat4::Mat4(aMStack_78);
                    /* try { // try from 009bb198 to 00abb19f has its CatchHandler @ 009bb294 */
                    /* try { // try from 009bb1a0 to 00abb1c3 has its CatchHandler @ 009bb130 */
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Physics3DRigidBody:setCenterOfMassTransform");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
                    /* try { // try from 009bb1f8 to 00abb1ff has its CatchHandler @ 009bb290 */
                    /* try { // try from 009bb200 to 00abb21f has its CatchHandler @ 009bb130 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_setCenterOfMassTransform\'"
                  ,0);
    }
    else {
      cocos2d::Physics3DRigidBody::setCenterOfMassTransform(this,aMStack_78);
                    /* try { // try from 009bb1c4 to 00abb1cf has its CatchHandler @ 009bb294 */
      lua_settop(param_1,1);
                    /* try { // try from 009bb1d0 to 00abb1f7 has its CatchHandler @ 009bb130 */
    }
    bVar4 = !bVar4;
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:setCenterOfMassTransform",iVar2 + -1,1);
    bVar4 = false;
  }
                    /* try { // try from 009bb220 to 00abb227 has its CatchHandler @ 009bb290 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009bb228 to 00abb247 has its CatchHandler @ 009bb130 */
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

