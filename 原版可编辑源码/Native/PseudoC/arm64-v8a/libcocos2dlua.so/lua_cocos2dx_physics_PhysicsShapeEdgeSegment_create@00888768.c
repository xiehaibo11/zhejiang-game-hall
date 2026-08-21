
/* lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  double local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 5) {
    local_58 = 0;
    local_50 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.PhysicsShapeEdgeSegment:create");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.PhysicsShapeEdgeSegment:create");
    uVar7 = luaval_to_physics_material
                      (param_1,4,(PhysicsMaterial *)&local_68,"cc.PhysicsShapeEdgeSegment:create");
    uVar8 = luaval_to_number(param_1,5,&local_70,"cc.PhysicsShapeEdgeSegment:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)) {
      fVar9 = (float)local_70;
LAB_0088891c:
      pvVar5 = (void *)cocos2d::PhysicsShapeEdgeSegment::create
                                 ((Vec2 *)&local_50,(Vec2 *)&local_58,(PhysicsMaterial *)&local_68,
                                  fVar9);
joined_r0x0088892c:
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.PhysicsShapeEdgeSegment");
        uVar6 = 1;
      }
      goto LAB_00888990;
    }
LAB_00888954:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create\'"
                ,0);
  }
  else {
    if (iVar2 == 4) {
      local_58 = 0;
      local_50 = 0;
      local_68 = 0;
      local_60 = 0;
      uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.PhysicsShapeEdgeSegment:create");
      uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.PhysicsShapeEdgeSegment:create");
      uVar7 = luaval_to_physics_material
                        (param_1,4,(PhysicsMaterial *)&local_68,"cc.PhysicsShapeEdgeSegment:create")
      ;
      if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar7 & 1) != 0)) {
        fVar9 = 1.0;
        goto LAB_0088891c;
      }
      goto LAB_00888954;
    }
    if (iVar2 == 3) {
      local_68 = 0;
      local_50 = 0;
      uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_68,"cc.PhysicsShapeEdgeSegment:create");
      uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_50,"cc.PhysicsShapeEdgeSegment:create");
      if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_00888954;
      pvVar5 = (void *)cocos2d::PhysicsShapeEdgeSegment::create
                                 ((Vec2 *)&local_68,(Vec2 *)&local_50,
                                  (PhysicsMaterial *)&DAT_01297b60,1.0);
      goto joined_r0x0088892c;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsShapeEdgeSegment:create",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00888990:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

