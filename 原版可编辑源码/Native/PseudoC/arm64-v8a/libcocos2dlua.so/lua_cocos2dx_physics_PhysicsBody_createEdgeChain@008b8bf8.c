
/* lua_cocos2dx_physics_PhysicsBody_createEdgeChain(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_createEdgeChain(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_60;
  int local_54;
  Vec2 *local_50;
  undefined4 local_48;
  Vec2 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_50 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_40,&local_54,"cc.PhysicsBody:createEdgeChain");
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x29a,"lua_cocos2dx_physics_PhysicsBody_createEdgeChain");
                    /* try { // try from 008b8d80 to 009b8d97 has its CatchHandler @ 008b8de8 */
      cocos2d::log("Invalid Native Object");
    }
                    /* try { // try from 008b8d98 to 009b8e03 has its CatchHandler @ 008b8d28 */
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createEdgeChain");
    uVar5 = luaval_to_number(param_1,4,(double *)&local_60,"cc.PhysicsBody:createEdgeChain");
    if (((uVar3 & uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008b8e20:
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b8e6c;
      }
      goto LAB_008b8e58;
    }
    fVar8 = (float)(double)CONCAT44(local_60._4_4_,(int)local_60);
    local_60._0_4_ = local_54;
LAB_008b8de0:
    pvVar6 = (void *)cocos2d::PhysicsBody::createEdgeChain
                               (local_40,(int)local_60,(PhysicsMaterial *)&local_50,fVar8);
                    /* catch() { ... } // from try @ 008b8d80 with catch @ 008b8de8 */
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008b8dfc:
    if (pvVar6 == (void *)0x0) goto LAB_008b8e60;
LAB_008b8e00:
                    /* try { // try from 008b8e04 to 009b8e5b has its CatchHandler @ 008b8e04
                       catch() { ... } // from try @ 008b8e04 with catch @ 008b8e04
                       catch() { ... } // from try @ 008b8e74 with catch @ 008b8e04 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsBody");
  }
  else {
    if (iVar2 == 3) {
                    /* try { // try from 008b8ca4 to 009b8cbb has its CatchHandler @ 008b8d0c */
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
                    /* try { // try from 008b8cbc to 009b8d27 has its CatchHandler @ 008b8c4c */
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsBody:createEdgeChain");
      if (local_40 == (Vec2 *)0x0) {
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x279,"lua_cocos2dx_physics_PhysicsBody_createEdgeChain");
        cocos2d::log("Invalid Native Object");
      }
                    /* catch() { ... } // from try @ 008b8ca4 with catch @ 008b8d0c */
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createEdgeChain");
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008b8e20;
      fVar8 = 1.0;
                    /* try { // try from 008b8d28 to 009b8d7f has its CatchHandler @ 008b8d28
                       catch() { ... } // from try @ 008b8d28 with catch @ 008b8d28
                       catch() { ... } // from try @ 008b8d98 with catch @ 008b8d28 */
      goto LAB_008b8de0;
    }
                    /* catch() { ... } // from try @ 008b8bc8 with catch @ 008b8c30 */
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "createEdgeChain",iVar2 + -1,2);
LAB_008b8e58:
      uVar7 = 0;
                    /* try { // try from 008b8e5c to 009b8e73 has its CatchHandler @ 008b8ec4 */
      goto LAB_008b8e6c;
    }
                    /* try { // try from 008b8c4c to 009b8ca3 has its CatchHandler @ 008b8c4c
                       catch() { ... } // from try @ 008b8c4c with catch @ 008b8c4c
                       catch() { ... } // from try @ 008b8cbc with catch @ 008b8c4c */
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsBody:createEdgeChain");
    if (local_50 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x25a,"lua_cocos2dx_physics_PhysicsBody_createEdgeChain");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 008b8e5c with catch @ 008b8ec4 */
      if (local_50 != (Vec2 *)0x0) {
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008b8e6c;
      }
      goto LAB_008b8e58;
    }
    pvVar6 = (void *)cocos2d::PhysicsBody::createEdgeChain
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29ac,1.0);
    if (local_50 == (Vec2 *)0x0) goto LAB_008b8dfc;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
    if (pvVar6 != (void *)0x0) goto LAB_008b8e00;
LAB_008b8e60:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008b8e6c:
                    /* try { // try from 008b8e74 to 009b8edf has its CatchHandler @ 008b8e04 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

