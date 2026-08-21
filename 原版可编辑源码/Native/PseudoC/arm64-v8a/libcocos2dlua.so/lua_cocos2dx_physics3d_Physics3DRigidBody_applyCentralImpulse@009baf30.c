
/* lua_cocos2dx_physics3d_Physics3DRigidBody_applyCentralImpulse(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_applyCentralImpulse(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec3 *pVVar3;
  ulong uVar4;
  undefined4 uVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009baf4c to 00abaf57 has its CatchHandler @ 009bb01c */
                    /* try { // try from 009baf58 to 00abaf7f has its CatchHandler @ 009baeb8 */
  pVVar3 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
                    /* try { // try from 009baf80 to 00abaf87 has its CatchHandler @ 009bb018 */
                    /* try { // try from 009baf88 to 00abafa7 has its CatchHandler @ 009baeb8 */
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Physics3DRigidBody:applyCentralImpulse");
    if ((uVar4 & 1) != 0) {
      cocos2d::Physics3DRigidBody::applyCentralImpulse(pVVar3);
                    /* try { // try from 009bafa8 to 00abafaf has its CatchHandler @ 009bb018 */
                    /* try { // try from 009bafb0 to 00abafcf has its CatchHandler @ 009baeb8 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009baff4;
    }
                    /* try { // try from 009bafdc to 00abb01f has its CatchHandler @ 009baeb8 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_applyCentralImpulse\'"
                ,0);
  }
  else {
                    /* try { // try from 009bafd0 to 00abafdb has its CatchHandler @ 009bb018 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:applyCentralImpulse",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009baff4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009baf80 with catch @ 009bb018
                       catch(type#1 @ 00000000) { ... } // from try @ 009bafa8 with catch @ 009bb018
                       catch(type#1 @ 00000000) { ... } // from try @ 009bafd0 with catch @ 009bb018
                        */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009baf20 with catch @ 009bb01c
                       catch(type#1 @ 00000000) { ... } // from try @ 009baf4c with catch @ 009bb01c
                        */
  __stack_chk_fail();
}

