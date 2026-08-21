
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getInvInertiaDiagLocal(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DRigidBody_getInvInertiaDiagLocal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  undefined4 local_48 [4];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb8f0 with catch @ 009bb880
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb920 with catch @ 009bb880
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb950 with catch @ 009bb880
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb978 with catch @ 009bb880
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb9a4 with catch @ 009bb880
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
                    /* try { // try from 009bb8e8 to 00abb8ef has its CatchHandler @ 009bb9e4 */
    local_48[0] = cocos2d::Physics3DRigidBody::getInvInertiaDiagLocal(this);
                    /* try { // try from 009bb8f0 to 00abb913 has its CatchHandler @ 009bb880 */
    vec3_to_luaval(param_1,(Vec3 *)local_48);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getInvInertiaDiagLocal",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009bb914 to 00abb91f has its CatchHandler @ 009bb9e4 */
                    /* try { // try from 009bb920 to 00abb947 has its CatchHandler @ 009bb880 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

