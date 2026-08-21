
/* lua_cocos2dx_physics_PhysicsBody_createEdgePolygon(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_createEdgePolygon(lua_State *param_1)

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
                    /* try { // try from 008b8934 to 009b894b has its CatchHandler @ 008b899c */
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_50 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2
                      (param_1,2,&local_40,&local_54,"cc.PhysicsBody:createEdgePolygon");
    if (local_40 == (Vec2 *)0x0) {
                    /* catch() { ... } // from try @ 008b8a10 with catch @ 008b8a78 */
                    /* try { // try from 008b8a94 to 009b8aeb has its CatchHandler @ 008b8a94
                       catch() { ... } // from try @ 008b8a94 with catch @ 008b8a94
                       catch() { ... } // from try @ 008b8b04 with catch @ 008b8a94 */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x222,"lua_cocos2dx_physics_PhysicsBody_createEdgePolygon");
      cocos2d::log("Invalid Native Object");
    }
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createEdgePolygon");
    uVar5 = luaval_to_number(param_1,4,(double *)&local_60,"cc.PhysicsBody:createEdgePolygon");
    if (((uVar3 & uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008b8b38:
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b8b84;
      }
      goto LAB_008b8b70;
    }
                    /* try { // try from 008b8aec to 009b8b03 has its CatchHandler @ 008b8b54 */
    fVar8 = (float)(double)CONCAT44(local_60._4_4_,(int)local_60);
    local_60._0_4_ = local_54;
LAB_008b8af8:
    pvVar6 = (void *)cocos2d::PhysicsBody::createEdgePolygon
                               (local_40,(int)local_60,(PhysicsMaterial *)&local_50,fVar8);
                    /* try { // try from 008b8b04 to 009b8b6f has its CatchHandler @ 008b8a94 */
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008b8b14:
    if (pvVar6 == (void *)0x0) goto LAB_008b8b78;
LAB_008b8b18:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsBody");
  }
  else {
    if (iVar2 == 3) {
                    /* try { // try from 008b89b8 to 009b8a0f has its CatchHandler @ 008b89b8
                       catch() { ... } // from try @ 008b89b8 with catch @ 008b89b8
                       catch() { ... } // from try @ 008b8a28 with catch @ 008b89b8 */
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsBody:createEdgePolygon");
      if (local_40 == (Vec2 *)0x0) {
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x201,"lua_cocos2dx_physics_PhysicsBody_createEdgePolygon");
        cocos2d::log("Invalid Native Object");
      }
                    /* try { // try from 008b8a10 to 009b8a27 has its CatchHandler @ 008b8a78 */
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createEdgePolygon");
                    /* try { // try from 008b8a28 to 009b8a93 has its CatchHandler @ 008b89b8 */
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008b8b38;
      fVar8 = 1.0;
      goto LAB_008b8af8;
    }
                    /* try { // try from 008b894c to 009b89b7 has its CatchHandler @ 008b88dc */
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 008b8aec with catch @ 008b8b54 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "createEdgePolygon",iVar2 + -1,2);
LAB_008b8b70:
                    /* try { // try from 008b8b70 to 009b8bc7 has its CatchHandler @ 008b8b70
                       catch() { ... } // from try @ 008b8b70 with catch @ 008b8b70
                       catch() { ... } // from try @ 008b8be0 with catch @ 008b8b70 */
      uVar7 = 0;
      goto LAB_008b8b84;
    }
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsBody:createEdgePolygon");
    if (local_50 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x1e2,"lua_cocos2dx_physics_PhysicsBody_createEdgePolygon");
                    /* try { // try from 008b8bc8 to 009b8bdf has its CatchHandler @ 008b8c30 */
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
      if (local_50 != (Vec2 *)0x0) {
                    /* try { // try from 008b8be0 to 009b8c4b has its CatchHandler @ 008b8b70 */
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008b8b84;
      }
      goto LAB_008b8b70;
    }
    pvVar6 = (void *)cocos2d::PhysicsBody::createEdgePolygon
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29ac,1.0);
                    /* catch() { ... } // from try @ 008b8934 with catch @ 008b899c */
    if (local_50 == (Vec2 *)0x0) goto LAB_008b8b14;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
    if (pvVar6 != (void *)0x0) goto LAB_008b8b18;
LAB_008b8b78:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008b8b84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

