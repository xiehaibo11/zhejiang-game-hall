
/* lua_cocos2dx_physics3d_Physics3DRigidBody_applyForce(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_applyForce(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec3 *pVVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
                    /* try { // try from 009bad20 to 00abad27 has its CatchHandler @ 009bad90 */
                    /* try { // try from 009bad28 to 00abad47 has its CatchHandler @ 009bac30 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009bad48 to 00abad53 has its CatchHandler @ 009bad90 */
  pVVar3 = (Vec3 *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009bad54 to 00abad97 has its CatchHandler @ 009bac30 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3(aVStack_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bacf8 with catch @ 009bad90
                       catch(type#1 @ 00000000) { ... } // from try @ 009bad20 with catch @ 009bad90
                       catch(type#1 @ 00000000) { ... } // from try @ 009bad48 with catch @ 009bad90
                        */
    uVar4 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Physics3DRigidBody:applyForce");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bac98 with catch @ 009bad94
                       catch(type#1 @ 00000000) { ... } // from try @ 009bacc4 with catch @ 009bad94
                        */
    uVar5 = luaval_to_vec3(param_1,3,aVStack_68,"cc.Physics3DRigidBody:applyForce");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      cocos2d::Physics3DRigidBody::applyForce(pVVar3,aVStack_58);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009bae10;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_applyForce\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:applyForce",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009bae10:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

