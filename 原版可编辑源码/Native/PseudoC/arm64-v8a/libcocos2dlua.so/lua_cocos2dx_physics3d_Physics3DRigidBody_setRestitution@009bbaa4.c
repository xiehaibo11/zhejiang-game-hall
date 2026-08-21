
/* lua_cocos2dx_physics3d_Physics3DRigidBody_setRestitution(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_setRestitution(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009bbafc to 00abbb77 has its CatchHandler @ 009bbafc
                       catch() { ... } // from try @ 009bbafc with catch @ 009bbafc
                       catch() { ... } // from try @ 009bbb80 with catch @ 009bbafc */
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Physics3DRigidBody:setRestitution");
    if ((uVar3 & 1) != 0) {
      cocos2d::Physics3DRigidBody::setRestitution(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009bbb64;
    }
    tolua_error(param_1,0x12eb237,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012eb212,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009bbb64:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009bbb78 to 00abbb7f has its CatchHandler @ 009bbbc4 */
                    /* try { // try from 009bbb80 to 00abbbd7 has its CatchHandler @ 009bbafc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

