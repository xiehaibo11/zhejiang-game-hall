
/* lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create(lua_State *param_1)

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
                    /* try { // try from 008b9d2c to 009b9d43 has its CatchHandler @ 008b9d94 */
    local_54 = 0;
    local_48 = 0;
    local_50 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2
                      (param_1,2,&local_40,&local_54,"cc.PhysicsShapeEdgePolygon:create");
                    /* try { // try from 008b9d44 to 009b9daf has its CatchHandler @ 008b9cd4 */
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x56f,"lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create");
      cocos2d::log("Invalid Native Object");
    }
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapeEdgePolygon:create");
                    /* catch() { ... } // from try @ 008b9d2c with catch @ 008b9d94 */
    uVar5 = luaval_to_number(param_1,4,(double *)&local_60,"cc.PhysicsShapeEdgePolygon:create");
                    /* try { // try from 008b9db0 to 009b9e07 has its CatchHandler @ 008b9db0
                       catch() { ... } // from try @ 008b9db0 with catch @ 008b9db0
                       catch() { ... } // from try @ 008b9e20 with catch @ 008b9db0 */
    if (((uVar3 & uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008b9e08:
                    /* try { // try from 008b9e08 to 009b9e1f has its CatchHandler @ 008b9e70 */
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b9e54;
      }
      goto LAB_008b9e40;
    }
    fVar8 = (float)(double)CONCAT44(local_60._4_4_,(int)local_60);
    iVar2 = local_54;
LAB_008b9dc8:
    pvVar6 = (void *)cocos2d::PhysicsShapeEdgePolygon::create
                               (local_40,iVar2,(PhysicsMaterial *)&local_50,fVar8);
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008b9de4:
    if (pvVar6 == (void *)0x0) goto LAB_008b9e48;
LAB_008b9de8:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsShapeEdgePolygon");
  }
  else {
    if (iVar2 == 3) {
      local_60._0_4_ = 0;
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsShapeEdgePolygon:create");
      if (local_40 == (Vec2 *)0x0) {
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x559,"lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create");
                    /* try { // try from 008b9cd4 to 009b9d2b has its CatchHandler @ 008b9cd4
                       catch() { ... } // from try @ 008b9cd4 with catch @ 008b9cd4
                       catch() { ... } // from try @ 008b9d44 with catch @ 008b9cd4 */
        cocos2d::log("Invalid Native Object");
      }
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapeEdgePolygon:create")
      ;
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008b9e08;
      fVar8 = 1.0;
      iVar2 = (int)local_60;
      goto LAB_008b9dc8;
    }
    if (iVar2 != 2) {
                    /* try { // try from 008b9e20 to 009b9e8b has its CatchHandler @ 008b9db0 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","create",
                 iVar2 + -1,2);
LAB_008b9e40:
      uVar7 = 0;
      goto LAB_008b9e54;
    }
    local_40 = (Vec2 *)((ulong)local_40 & 0xffffffff00000000);
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsShapeEdgePolygon:create");
    if (local_50 == (Vec2 *)0x0) {
                    /* try { // try from 008b9e8c to 009b9ee3 has its CatchHandler @ 008b9e8c
                       catch() { ... } // from try @ 008b9e8c with catch @ 008b9e8c
                       catch() { ... } // from try @ 008b9efc with catch @ 008b9e8c */
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x545,"lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
      if (local_50 != (Vec2 *)0x0) {
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008b9e54;
      }
      goto LAB_008b9e40;
    }
    pvVar6 = (void *)cocos2d::PhysicsShapeEdgePolygon::create
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29a0,1.0);
    if (local_50 == (Vec2 *)0x0) goto LAB_008b9de4;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
    if (pvVar6 != (void *)0x0) goto LAB_008b9de8;
LAB_008b9e48:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008b9e54:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008b9e08 with catch @ 008b9e70 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

