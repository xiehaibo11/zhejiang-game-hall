
/* lua_cocos2dx_physics_PhysicsWorld_queryRect(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsWorld_queryRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  PhysicsWorld *pPVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  Rect aRStack_f0 [16];
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
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","queryRect",
               iVar2 + -1,3);
    uVar7 = 0;
    goto LAB_008b8304;
  }
  local_90 = (long *)0x0;
  cocos2d::Rect::Rect(aRStack_f0);
  uVar3 = toluafix_ref_function(param_1,2,0);
  uStack_78 = (ulong)uVar3;
  local_80 = &PTR_FUN_0169ac00;
  local_70 = param_1;
  local_60 = &local_80;
  FUN_008bb880(&local_80,alStack_b0);
                    /* try { // try from 008b81c4 to 009b821b has its CatchHandler @ 008b81c4
                       catch() { ... } // from try @ 008b81c4 with catch @ 008b81c4
                       catch() { ... } // from try @ 008b8234 with catch @ 008b81c4 */
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_008b820c:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_008b820c;
  }
                    /* try { // try from 008b821c to 009b8233 has its CatchHandler @ 008b8284 */
  uVar5 = luaval_to_rect(param_1,3,aRStack_f0,"cc.PhysicsWorld:queryRect");
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (local_90 == (long *)0x0) {
      local_c0 = (long *)0x0;
    }
    else {
                    /* try { // try from 008b8234 to 009b829f has its CatchHandler @ 008b81c4 */
      if (alStack_b0 == local_90) {
        local_c0 = alStack_e0;
        (**(code **)(*local_90 + 0x18))(local_90,alStack_e0);
      }
      else {
        local_c0 = (long *)(**(code **)(*local_90 + 0x10))();
      }
    }
                    /* catch() { ... } // from try @ 008b821c with catch @ 008b8284 */
    cocos2d::PhysicsWorld::queryRect(pPVar4,alStack_e0,aRStack_f0,0);
    if (alStack_e0 == local_c0) {
      pcVar6 = *(code **)(*local_c0 + 0x20);
LAB_008b82b8:
      (*pcVar6)();
    }
    else {
                    /* try { // try from 008b82a0 to 009b82f7 has its CatchHandler @ 008b82a0
                       catch() { ... } // from try @ 008b82a0 with catch @ 008b82a0
                       catch() { ... } // from try @ 008b8310 with catch @ 008b82a0 */
      if (local_c0 != (long *)0x0) {
        pcVar6 = *(code **)(*local_c0 + 0x28);
        goto LAB_008b82b8;
      }
    }
    toluafix_remove_function_by_refid(param_1,uVar3);
    uVar7 = 1;
    lua_settop(param_1,1);
  }
  if (alStack_b0 == local_90) {
                    /* try { // try from 008b82f8 to 009b830f has its CatchHandler @ 008b8360 */
    pcVar6 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_008b8304;
    pcVar6 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar6)();
LAB_008b8304:
                    /* try { // try from 008b8310 to 009b837b has its CatchHandler @ 008b82a0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

