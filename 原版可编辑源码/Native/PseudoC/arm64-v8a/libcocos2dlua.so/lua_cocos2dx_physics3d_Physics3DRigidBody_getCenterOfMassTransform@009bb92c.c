
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getCenterOfMassTransform(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DRigidBody_getCenterOfMassTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009bb948 to 00abb94f has its CatchHandler @ 009bb9e0 */
                    /* try { // try from 009bb950 to 00abb96f has its CatchHandler @ 009bb880 */
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
                    /* try { // try from 009bb998 to 00abb9a3 has its CatchHandler @ 009bb9e0 */
    cocos2d::Physics3DRigidBody::getCenterOfMassTransform(this);
                    /* try { // try from 009bb9a4 to 00abb9e7 has its CatchHandler @ 009bb880 */
    mat4_to_luaval(param_1,aMStack_78);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
                    /* try { // try from 009bb970 to 00abb977 has its CatchHandler @ 009bb9e0 */
                    /* try { // try from 009bb978 to 00abb997 has its CatchHandler @ 009bb880 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getCenterOfMassTransform",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

