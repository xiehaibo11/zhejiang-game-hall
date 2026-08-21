
/* lua_cocos2dx_physics_PhysicsWorld_rayCast(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsWorld_rayCast(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  PhysicsWorld *pPVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined **local_80;
  ulong uStack_78;
  lua_State *local_70;
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 008b7ea8 to 009b7f13 has its CatchHandler @ 008b7e38 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar6 = (PhysicsWorld *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 3) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","rayCast",
               iVar2 + -1,4);
    uVar8 = 0;
                    /* try { // try from 008b7f6c to 009b7f83 has its CatchHandler @ 008b7fd4 */
    goto LAB_008b8094;
  }
  local_90 = (long *)0x0;
  local_f0 = 0;
  uStack_e8 = 0;
                    /* catch() { ... } // from try @ 008b7e90 with catch @ 008b7ef8 */
  uVar3 = toluafix_ref_function(param_1,2,0);
  uStack_78 = (ulong)uVar3;
                    /* try { // try from 008b7f14 to 009b7f6b has its CatchHandler @ 008b7f14
                       catch() { ... } // from try @ 008b7f14 with catch @ 008b7f14
                       catch() { ... } // from try @ 008b7f84 with catch @ 008b7f14 */
  local_80 = &PTR_FUN_0169ab70;
  local_70 = param_1;
  local_60 = &local_80;
  FUN_008bb600(&local_80,alStack_b0);
  if (&local_80 == local_60) {
    pcVar7 = (code *)(*local_60)[4];
LAB_008b7f78:
    (*pcVar7)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_60)[5];
    goto LAB_008b7f78;
  }
                    /* try { // try from 008b7f84 to 009b7fef has its CatchHandler @ 008b7f14 */
  uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&uStack_e8,"cc.PhysicsWorld:rayCast");
  uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_f0,"cc.PhysicsWorld:rayCast");
  if ((uVar4 & uVar5 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (local_90 == (long *)0x0) {
      local_c0 = (long *)0x0;
    }
    else if (alStack_b0 == local_90) {
                    /* try { // try from 008b7ff0 to 009b8047 has its CatchHandler @ 008b7ff0
                       catch() { ... } // from try @ 008b7ff0 with catch @ 008b7ff0
                       catch() { ... } // from try @ 008b8060 with catch @ 008b7ff0 */
      local_c0 = alStack_e0;
      (**(code **)(*local_90 + 0x18))(local_90,alStack_e0);
    }
    else {
                    /* catch() { ... } // from try @ 008b7f6c with catch @ 008b7fd4 */
      local_c0 = (long *)(**(code **)(*local_90 + 0x10))();
    }
    cocos2d::PhysicsWorld::rayCast(pPVar6,alStack_e0,&uStack_e8,&local_f0,0);
    if (alStack_e0 == local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_008b8048:
                    /* try { // try from 008b8048 to 009b805f has its CatchHandler @ 008b80b0 */
      (*pcVar7)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_c0 + 0x28);
      goto LAB_008b8048;
    }
    toluafix_remove_function_by_refid(param_1,uVar3);
    uVar8 = 1;
                    /* try { // try from 008b8060 to 009b80cb has its CatchHandler @ 008b7ff0 */
    lua_settop(param_1,1);
  }
  if (alStack_b0 == local_90) {
    pcVar7 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_008b8094;
    pcVar7 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar7)();
LAB_008b8094:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008b8048 with catch @ 008b80b0 */
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

