
/* lua_cocos2dx_physics_PhysicsWorld_queryPoint(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsWorld_queryPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  PhysicsWorld *pPVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 local_e8;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined **local_80;
  ulong uStack_78;
  lua_State *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar4 = (PhysicsWorld *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008b83d8 to 009b83ef has its CatchHandler @ 008b8474 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","queryPoint",
               iVar2 + -1,3);
    uVar7 = 0;
    goto LAB_008b8574;
  }
                    /* try { // try from 008b83f0 to 009b848f has its CatchHandler @ 008b837c */
  local_90 = (long *)0x0;
  local_e8 = 0;
  uVar3 = toluafix_ref_function(param_1,2,0);
  uStack_78 = (ulong)uVar3;
  local_80 = &PTR_FUN_0169ac90;
  local_70 = param_1;
  local_60 = &local_80;
  FUN_008bb880(&local_80,alStack_b0);
  if (&local_80 == local_60) {
                    /* catch() { ... } // from try @ 008b83d8 with catch @ 008b8474 */
    pcVar6 = (code *)(*local_60)[4];
LAB_008b847c:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_008b847c;
  }
                    /* try { // try from 008b8490 to 009b84e7 has its CatchHandler @ 008b8490
                       catch() { ... } // from try @ 008b8490 with catch @ 008b8490
                       catch() { ... } // from try @ 008b8500 with catch @ 008b8490 */
  uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_e8,"cc.PhysicsWorld:queryPoint");
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (local_90 == (long *)0x0) {
      local_c0 = (long *)0x0;
    }
    else if (alStack_b0 == local_90) {
      local_c0 = alStack_e0;
                    /* try { // try from 008b84e8 to 009b84ff has its CatchHandler @ 008b8550 */
      (**(code **)(*local_90 + 0x18))(local_90,alStack_e0);
    }
    else {
      local_c0 = (long *)(**(code **)(*local_90 + 0x10))();
    }
                    /* try { // try from 008b8500 to 009b856b has its CatchHandler @ 008b8490 */
    cocos2d::PhysicsWorld::queryPoint(pPVar4,alStack_e0,&local_e8,0);
    if (alStack_e0 == local_c0) {
      pcVar6 = *(code **)(*local_c0 + 0x20);
LAB_008b8528:
      (*pcVar6)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar6 = *(code **)(*local_c0 + 0x28);
      goto LAB_008b8528;
    }
    toluafix_remove_function_by_refid(param_1,uVar3);
    uVar7 = 1;
    lua_settop(param_1,1);
  }
                    /* catch() { ... } // from try @ 008b84e8 with catch @ 008b8550 */
  if (alStack_b0 == local_90) {
                    /* try { // try from 008b856c to 009b85c3 has its CatchHandler @ 008b856c
                       catch() { ... } // from try @ 008b856c with catch @ 008b856c
                       catch() { ... } // from try @ 008b85dc with catch @ 008b856c */
    pcVar6 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_008b8574;
    pcVar6 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar6)();
LAB_008b8574:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

