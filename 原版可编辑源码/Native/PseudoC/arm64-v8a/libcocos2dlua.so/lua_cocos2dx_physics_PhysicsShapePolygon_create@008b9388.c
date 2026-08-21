
/* lua_cocos2dx_physics_PhysicsShapePolygon_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapePolygon_create(lua_State *param_1)

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
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_54 = 0;
    local_48 = 0;
    local_50 = (Vec2 *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_40,&local_54,"cc.PhysicsShapePolygon:create");
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x3bf,"lua_cocos2dx_physics_PhysicsShapePolygon_create");
      cocos2d::log("Invalid Native Object");
    }
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapePolygon:create");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_60,"cc.PhysicsShapePolygon:create");
    if (((uVar3 & uVar4 & 1) == 0) || (iVar2 = local_54, (uVar5 & 1) == 0)) {
LAB_008b95cc:
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar7 = 0;
        local_40 = (Vec2 *)0x0;
        goto LAB_008b9618;
      }
      goto LAB_008b9604;
    }
LAB_008b9584:
    pvVar6 = (void *)cocos2d::PhysicsShapePolygon::create
                               (local_40,iVar2,(PhysicsMaterial *)&local_50,(Vec2 *)puVar8,0.0);
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      local_40 = (Vec2 *)0x0;
    }
LAB_008b95a8:
    if (pvVar6 == (void *)0x0) goto LAB_008b960c;
LAB_008b95ac:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
               "cc.PhysicsShapePolygon");
  }
  else {
    if (iVar2 == 3) {
      local_60 = local_60 & 0xffffffff00000000;
      local_48 = 0;
      local_50 = (Vec2 *)0x0;
      uVar3 = luaval_to_array_of_vec2
                        (param_1,2,&local_40,(int *)&local_60,"cc.PhysicsShapePolygon:create");
      if (local_40 == (Vec2 *)0x0) {
        cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                     ,0x3a9,"lua_cocos2dx_physics_PhysicsShapePolygon_create");
        cocos2d::log("Invalid Native Object");
      }
      uVar4 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_50,"cc.PhysicsShapePolygon:create");
      if ((uVar3 & uVar4 & 1) == 0) goto LAB_008b95cc;
      puVar8 = &cocos2d::Vec2::ZERO;
      iVar2 = (int)local_60;
      goto LAB_008b9584;
    }
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","create",
                 iVar2 + -1,2);
LAB_008b9604:
      uVar7 = 0;
      goto LAB_008b9618;
    }
    local_40 = (Vec2 *)((ulong)local_40 & 0xffffffff00000000);
    uVar5 = luaval_to_array_of_vec2
                      (param_1,2,&local_50,(int *)&local_40,"cc.PhysicsShapePolygon:create");
                    /* try { // try from 008b93f0 to 009b944b has its CatchHandler @ 008b92d4 */
    if (local_50 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x394,"lua_cocos2dx_physics_PhysicsShapePolygon_create");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar5 & 1) == 0) {
      if (local_50 != (Vec2 *)0x0) {
        operator_delete__(local_50);
        uVar7 = 0;
        local_50 = (Vec2 *)0x0;
        goto LAB_008b9618;
      }
      goto LAB_008b9604;
    }
                    /* catch() { ... } // from try @ 008b9330 with catch @ 008b9414 */
    pvVar6 = (void *)cocos2d::PhysicsShapePolygon::create
                               (local_50,(int)local_40,(PhysicsMaterial *)&DAT_012a29a0,
                                (Vec2 *)&cocos2d::Vec2::ZERO,0.0);
    if (local_50 == (Vec2 *)0x0) goto LAB_008b95a8;
    operator_delete__(local_50);
    local_50 = (Vec2 *)0x0;
    if (pvVar6 != (void *)0x0) goto LAB_008b95ac;
LAB_008b960c:
    lua_pushnil(param_1);
  }
  uVar7 = 1;
LAB_008b9618:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

