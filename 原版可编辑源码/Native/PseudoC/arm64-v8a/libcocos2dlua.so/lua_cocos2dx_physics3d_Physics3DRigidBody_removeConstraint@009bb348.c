
/* lua_cocos2dx_physics3d_Physics3DRigidBody_removeConstraint(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_removeConstraint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Physics3DRigidBody *this;
  ulong uVar4;
  Physics3DConstraint *pPVar5;
  undefined4 uVar6;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb400 with catch @ 009bb390
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb430 with catch @ 009bb390
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb460 with catch @ 009bb390
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb488 with catch @ 009bb390
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb4b4 with catch @ 009bb390
                        */
    uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.Physics3DRigidBody:removeConstraint");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 009bb3f8 to 00abb3ff has its CatchHandler @ 009bb4f4 */
      if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DConstraint",0), (uVar4 & 1) == 0))
      goto LAB_009bb41c;
                    /* try { // try from 009bb400 to 00abb423 has its CatchHandler @ 009bb390 */
      pPVar5 = (Physics3DConstraint *)tolua_tousertype(param_1,2,0);
      cocos2d::Physics3DRigidBody::removeConstraint(this,pPVar5);
    }
    else {
      cocos2d::Physics3DRigidBody::removeConstraint(this,local_3c);
    }
    uVar6 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_009bb41c:
                    /* try { // try from 009bb424 to 00abb42f has its CatchHandler @ 009bb4f4 */
                    /* try { // try from 009bb430 to 00abb457 has its CatchHandler @ 009bb390 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:removeConstraint",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009bb458 to 00abb45f has its CatchHandler @ 009bb4f0 */
                    /* try { // try from 009bb460 to 00abb47f has its CatchHandler @ 009bb390 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

