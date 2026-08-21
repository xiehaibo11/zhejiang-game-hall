
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getTotalTorque(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DRigidBody_getTotalTorque(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  undefined4 local_48 [4];
  long local_38;
  
                    /* try { // try from 009bb480 to 00abb487 has its CatchHandler @ 009bb4f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009bb488 to 00abb4a7 has its CatchHandler @ 009bb390 */
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009bb4a8 to 00abb4b3 has its CatchHandler @ 009bb4f0 */
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_48[0] = cocos2d::Physics3DRigidBody::getTotalTorque(this);
    vec3_to_luaval(param_1,(Vec3 *)local_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb458 with catch @ 009bb4f0
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb480 with catch @ 009bb4f0
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb4a8 with catch @ 009bb4f0
                        */
  }
  else {
                    /* try { // try from 009bb4b4 to 00abb4f7 has its CatchHandler @ 009bb390 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getTotalTorque",iVar2,0);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb3f8 with catch @ 009bb4f4
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb424 with catch @ 009bb4f4
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

