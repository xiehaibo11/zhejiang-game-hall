
/* lua_cocos2dx_physics_PhysicsShape_recenterPoints(lua_State*) */

void lua_cocos2dx_physics_PhysicsShape_recenterPoints(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_50;
  int local_44;
  Vec2 *local_40;
  long local_38;
  
                    /* try { // try from 008b8ee0 to 009b8f37 has its CatchHandler @ 008b8ee0
                       catch() { ... } // from try @ 008b8ee0 with catch @ 008b8ee0
                       catch() { ... } // from try @ 008b8f50 with catch @ 008b8ee0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
                    /* try { // try from 008b8f50 to 009b8fbb has its CatchHandler @ 008b8ee0 */
    local_44 = 0;
    local_50 = 0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_40,&local_44,"cc.PhysicsShape:recenterPoints");
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x2e7,"lua_cocos2dx_physics_PhysicsShape_recenterPoints");
                    /* catch() { ... } // from try @ 008b8f38 with catch @ 008b8fa0 */
      cocos2d::log("Invalid Native Object");
    }
                    /* try { // try from 008b8fbc to 009b9013 has its CatchHandler @ 008b8fbc
                       catch() { ... } // from try @ 008b8fbc with catch @ 008b8fbc
                       catch() { ... } // from try @ 008b902c with catch @ 008b8fbc */
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_50,"cc.PhysicsShape:recenterPoints");
    if ((uVar3 & uVar4 & 1) == 0) {
LAB_008b907c:
                    /* catch() { ... } // from try @ 008b9014 with catch @ 008b907c */
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar6 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b9098;
      }
      goto LAB_008b9094;
    }
    cocos2d::PhysicsShape::recenterPoints(local_40,local_44,(Vec2 *)&local_50);
    iVar2 = local_44;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "recenterPoints",iVar2 + -1,2);
LAB_008b9094:
      uVar6 = 0;
      goto LAB_008b9098;
    }
    local_50 = local_50 & 0xffffffff00000000;
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_40,(int *)&local_50,"cc.PhysicsShape:recenterPoints");
                    /* try { // try from 008b8f38 to 009b8f4f has its CatchHandler @ 008b8fa0 */
    if (local_40 == (Vec2 *)0x0) {
                    /* try { // try from 008b9014 to 009b902b has its CatchHandler @ 008b907c */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x2d2,"lua_cocos2dx_physics_PhysicsShape_recenterPoints");
                    /* try { // try from 008b902c to 009b9097 has its CatchHandler @ 008b8fbc */
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) goto LAB_008b907c;
    cocos2d::PhysicsShape::recenterPoints(local_40,(int)local_50,(Vec2 *)&cocos2d::Vec2::ZERO);
    iVar2 = (int)local_50;
  }
  vec2_array_to_luaval(param_1,local_40,iVar2);
  if (local_40 != (Vec2 *)0x0) {
    operator_delete__(local_40);
    local_40 = (Vec2 *)0x0;
  }
  uVar6 = 1;
LAB_008b9098:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

