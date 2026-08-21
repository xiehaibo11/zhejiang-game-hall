
/* lua_cocos2dx_physics3d_Physics3DRigidBody_setCcdSweptSphereRadius(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_setCcdSweptSphereRadius(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009baca0 with catch @ 009bac30
                       catch(type#1 @ 00000000) { ... } // from try @ 009bacd0 with catch @ 009bac30
                       catch(type#1 @ 00000000) { ... } // from try @ 009bad00 with catch @ 009bac30
                       catch(type#1 @ 00000000) { ... } // from try @ 009bad28 with catch @ 009bac30
                       catch(type#1 @ 00000000) { ... } // from try @ 009bad54 with catch @ 009bac30
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Physics3DRigidBody:setCcdSweptSphereRadius");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 009bac98 to 00abac9f has its CatchHandler @ 009bad94 */
                    /* try { // try from 009baca0 to 00abacc3 has its CatchHandler @ 009bac30 */
      cocos2d::Physics3DRigidBody::setCcdSweptSphereRadius(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009bacf0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_setCcdSweptSphereRadius\'"
                ,0);
  }
  else {
                    /* try { // try from 009bacc4 to 00abaccf has its CatchHandler @ 009bad94 */
                    /* try { // try from 009bacd0 to 00abacf7 has its CatchHandler @ 009bac30 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012eac88,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009bacf0:
                    /* try { // try from 009bacf8 to 00abacff has its CatchHandler @ 009bad90 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009bad00 to 00abad1f has its CatchHandler @ 009bac30 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

