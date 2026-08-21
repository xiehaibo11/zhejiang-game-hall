
/* lua_cocos2dx_physics_PhysicsShapeCircle_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeCircle_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_68;
  double local_60;
  undefined4 local_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_58 = 0;
    local_68 = 0;
    local_60 = 0.0;
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.PhysicsShapeCircle:create");
    uVar6 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsShapeCircle:create");
    uVar7 = luaval_to_vec2(param_1,4,(Vec2 *)&local_68,"cc.PhysicsShapeCircle:create");
    if ((((uVar3 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
LAB_008878cc:
      pvVar4 = (void *)cocos2d::PhysicsShapeCircle::create
                                 ((float)local_50,(PhysicsMaterial *)&local_60,(Vec2 *)&local_68);
joined_r0x008878dc:
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.PhysicsShapeCircle");
        uVar5 = 1;
      }
      goto LAB_00887940;
    }
LAB_00887904:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapeCircle_create\'",0
               );
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_60 = 0.0;
      uVar3 = luaval_to_number(param_1,2,&local_50,"cc.PhysicsShapeCircle:create");
      uVar6 = luaval_to_physics_material
                        (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsShapeCircle:create");
      if (((uVar3 & 1) != 0) && ((uVar6 & 1) != 0)) {
        local_68 = 0;
        goto LAB_008878cc;
      }
      goto LAB_00887904;
    }
    if (iVar2 == 2) {
      uVar3 = luaval_to_number(param_1,2,&local_60,"cc.PhysicsShapeCircle:create");
      if ((uVar3 & 1) == 0) goto LAB_00887904;
      local_50 = 0.0;
      pvVar4 = (void *)cocos2d::PhysicsShapeCircle::create
                                 ((float)local_60,(PhysicsMaterial *)&DAT_01297b60,(Vec2 *)&local_50
                                 );
      goto joined_r0x008878dc;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsShapeCircle:create",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00887940:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

