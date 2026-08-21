
/* lua_cocos2dx_physics_PhysicsBody_createPolygon(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_createPolygon(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong local_60;
  int local_54;
  Vec2 *local_50;
  undefined4 local_48;
  Vec2 *local_40;
  long local_38;
  
  puVar8 = &local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008b85c4 with catch @ 008b862c */
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_54 = 0;
    local_48 = 0;
                    /* try { // try from 008b877c to 009b8793 has its CatchHandler @ 008b87e4 */
    local_50 = (Vec2 *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_40,&local_54,"cc.PhysicsBody:createPolygon");
    if (local_40 == (Vec2 *)0x0) {
                    /* try { // try from 008b8794 to 009b87ff has its CatchHandler @ 008b8724 */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x1aa,"lua_cocos2dx_physics_PhysicsBody_createPolygon");
      cocos2d::log("Invalid Native Object");
    }
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createPolygon");
                    /* catch() { ... } // from try @ 008b877c with catch @ 008b87e4 */
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_60,"cc.PhysicsBody:createPolygon");
    if (((uVar3 & uVar4 & 1) == 0) || (iVar2 = local_54, (uVar5 & 1) == 0)) {
LAB_008b8850:
      if (local_40 != (Vec2 *)0x0) {
                    /* try { // try from 008b8858 to 009b886f has its CatchHandler @ 008b88c0 */
        operator_delete__(local_40);
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b889c;
      }
      goto LAB_008b8888;
    }
LAB_008b880c:
    pvVar6 = (void *)cocos2d::PhysicsBody::createPolygon
                               (local_40,iVar2,(PhysicsMaterial *)&local_50,(Vec2 *)puVar8);
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008b882c:
    if (pvVar6 == (void *)0x0) goto LAB_008b8890;
LAB_008b8830:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsBody");
  }
  else {
    if (iVar2 == 3) {
      local_60 = local_60 & 0xffffffff00000000;
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsBody:createPolygon");
      if (local_40 == (Vec2 *)0x0) {
                    /* catch() { ... } // from try @ 008b86a0 with catch @ 008b8708 */
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x188,"lua_cocos2dx_physics_PhysicsBody_createPolygon");
        cocos2d::log("Invalid Native Object");
      }
                    /* try { // try from 008b8724 to 009b877b has its CatchHandler @ 008b8724
                       catch() { ... } // from try @ 008b8724 with catch @ 008b8724
                       catch() { ... } // from try @ 008b8794 with catch @ 008b8724 */
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsBody:createPolygon");
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008b8850;
      puVar8 = &cocos2d::Vec2::ZERO;
      iVar2 = (int)local_60;
      goto LAB_008b880c;
    }
                    /* try { // try from 008b8648 to 009b869f has its CatchHandler @ 008b8648
                       catch() { ... } // from try @ 008b8648 with catch @ 008b8648
                       catch() { ... } // from try @ 008b86b8 with catch @ 008b8648 */
    if (iVar2 != 2) {
                    /* try { // try from 008b8870 to 009b88db has its CatchHandler @ 008b8800 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","createPolygon"
                 ,iVar2 + -1,2);
LAB_008b8888:
      uVar7 = 0;
      goto LAB_008b889c;
    }
    local_50 = (Vec2 *)0x0;
    local_40 = (Vec2 *)((ulong)local_40 & 0xffffffff00000000);
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsBody:createPolygon");
    if (local_50 == (Vec2 *)0x0) {
                    /* catch() { ... } // from try @ 008b8858 with catch @ 008b88c0 */
                    /* try { // try from 008b88dc to 009b8933 has its CatchHandler @ 008b88dc
                       catch() { ... } // from try @ 008b88dc with catch @ 008b88dc
                       catch() { ... } // from try @ 008b894c with catch @ 008b88dc */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x169,"lua_cocos2dx_physics_PhysicsBody_createPolygon");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
      if (local_50 != (Vec2 *)0x0) {
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008b889c;
      }
      goto LAB_008b8888;
    }
    pvVar6 = (void *)cocos2d::PhysicsBody::createPolygon
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29ac,
                                (Vec2 *)&cocos2d::Vec2::ZERO);
                    /* try { // try from 008b86a0 to 009b86b7 has its CatchHandler @ 008b8708 */
    if (local_50 == (Vec2 *)0x0) goto LAB_008b882c;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
                    /* try { // try from 008b86b8 to 009b8723 has its CatchHandler @ 008b8648 */
    if (pvVar6 != (void *)0x0) goto LAB_008b8830;
LAB_008b8890:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008b889c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

