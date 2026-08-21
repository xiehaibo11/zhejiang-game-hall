
/* lua_cocos2dx_physics_PhysicsShapeEdgeChain_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeEdgeChain_create(lua_State *param_1)

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
                    /* try { // try from 008b9ee4 to 009b9efb has its CatchHandler @ 008b9f4c */
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_54 = 0;
    local_48 = 0;
                    /* catch() { ... } // from try @ 008b9fc0 with catch @ 008ba028 */
    local_50 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_40,&local_54,"cc.PhysicsShapeEdgeChain:create")
    ;
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x5c6,"lua_cocos2dx_physics_PhysicsShapeEdgeChain_create");
      cocos2d::log("Invalid Native Object");
    }
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapeEdgeChain:create");
                    /* try { // try from 008ba098 to 009ba0ef has its CatchHandler @ 008ba098
                       catch() { ... } // from try @ 008ba098 with catch @ 008ba098
                       catch() { ... } // from try @ 008ba108 with catch @ 008ba098 */
    uVar5 = luaval_to_number(param_1,4,(double *)&local_60,"cc.PhysicsShapeEdgeChain:create");
    if (((uVar3 & uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008ba0fc:
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
                    /* try { // try from 008ba108 to 009ba173 has its CatchHandler @ 008ba098 */
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008ba148;
      }
      goto LAB_008ba134;
    }
    fVar8 = (float)(double)CONCAT44(local_60._4_4_,(int)local_60);
    iVar2 = local_54;
LAB_008ba0bc:
    pvVar6 = (void *)cocos2d::PhysicsShapeEdgeChain::create
                               (local_40,iVar2,(PhysicsMaterial *)&local_50,fVar8);
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008ba0d8:
    if (pvVar6 == (void *)0x0) goto LAB_008ba13c;
LAB_008ba0dc:
                    /* try { // try from 008ba0f0 to 009ba107 has its CatchHandler @ 008ba158 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsShapeEdgeChain");
  }
  else {
                    /* try { // try from 008b9efc to 009b9f67 has its CatchHandler @ 008b9e8c */
    if (iVar2 == 3) {
      local_60._0_4_ = 0;
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsShapeEdgeChain:create");
      if (local_40 == (Vec2 *)0x0) {
                    /* try { // try from 008b9fc0 to 009b9fd7 has its CatchHandler @ 008ba028 */
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x5b0,"lua_cocos2dx_physics_PhysicsShapeEdgeChain_create");
        cocos2d::log("Invalid Native Object");
      }
                    /* try { // try from 008b9fd8 to 009ba043 has its CatchHandler @ 008b9f68 */
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapeEdgeChain:create");
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008ba0fc;
      fVar8 = 1.0;
      iVar2 = (int)local_60;
      goto LAB_008ba0bc;
    }
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","create",
                 iVar2 + -1,2);
LAB_008ba134:
      uVar7 = 0;
      goto LAB_008ba148;
    }
    local_40 = (Vec2 *)((ulong)local_40 & 0xffffffff00000000);
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsShapeEdgeChain:create");
    if (local_50 == (Vec2 *)0x0) {
                    /* try { // try from 008ba174 to 009ba1cb has its CatchHandler @ 008ba174
                       catch() { ... } // from try @ 008ba174 with catch @ 008ba174
                       catch() { ... } // from try @ 008ba1e4 with catch @ 008ba174 */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x59c,"lua_cocos2dx_physics_PhysicsShapeEdgeChain_create");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
      if (local_50 != (Vec2 *)0x0) {
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008ba148;
      }
      goto LAB_008ba134;
    }
                    /* catch() { ... } // from try @ 008b9ee4 with catch @ 008b9f4c */
    pvVar6 = (void *)cocos2d::PhysicsShapeEdgeChain::create
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29a0,1.0);
    if (local_50 == (Vec2 *)0x0) goto LAB_008ba0d8;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
                    /* try { // try from 008b9f68 to 009b9fbf has its CatchHandler @ 008b9f68
                       catch() { ... } // from try @ 008b9f68 with catch @ 008b9f68
                       catch() { ... } // from try @ 008b9fd8 with catch @ 008b9f68 */
    if (pvVar6 != (void *)0x0) goto LAB_008ba0dc;
LAB_008ba13c:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008ba148:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008ba0f0 with catch @ 008ba158 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

