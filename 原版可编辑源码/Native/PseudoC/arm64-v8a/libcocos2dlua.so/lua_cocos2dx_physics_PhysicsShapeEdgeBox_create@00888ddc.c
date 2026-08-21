
/* lua_cocos2dx_physics_PhysicsShapeEdgeBox_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeEdgeBox_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  Size *pSVar8;
  undefined8 uVar9;
  PhysicsMaterial *pPVar10;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined4 local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 2:
    cocos2d::Size::Size((Size *)&local_60);
    uVar3 = luaval_to_size(param_1,2,(Size *)&local_60,"cc.PhysicsShapeEdgeBox:create");
    if ((uVar3 & 1) == 0) {
LAB_00889038:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapeEdgeBox_create\'"
                  ,0);
      goto LAB_00889070;
    }
    pPVar10 = (PhysicsMaterial *)&DAT_01297b60;
    pSVar8 = (Size *)&local_60;
    goto LAB_00889008;
  case 3:
    cocos2d::Size::Size(aSStack_50);
    local_58 = 0;
    local_60 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_50,"cc.PhysicsShapeEdgeBox:create");
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsShapeEdgeBox:create");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_00889038;
    pSVar8 = aSStack_50;
    pPVar10 = (PhysicsMaterial *)&local_60;
LAB_00889008:
    pvVar7 = (void *)cocos2d::PhysicsShapeEdgeBox::create
                               (pSVar8,pPVar10,0.0,(Vec2 *)&cocos2d::Vec2::ZERO);
    break;
  case 4:
    cocos2d::Size::Size(aSStack_50);
    local_58 = 0;
    local_60 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_50,"cc.PhysicsShapeEdgeBox:create");
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsShapeEdgeBox:create");
    uVar5 = luaval_to_number(param_1,4,&local_68,"cc.PhysicsShapeEdgeBox:create");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) goto LAB_00889038;
    pvVar7 = (void *)cocos2d::PhysicsShapeEdgeBox::create
                               (aSStack_50,(PhysicsMaterial *)&local_60,(float)local_68,
                                (Vec2 *)&cocos2d::Vec2::ZERO);
    break;
  case 5:
    cocos2d::Size::Size(aSStack_50);
    local_58 = 0;
    local_60 = 0;
    local_70 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_50,"cc.PhysicsShapeEdgeBox:create");
    uVar4 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsShapeEdgeBox:create");
    uVar5 = luaval_to_number(param_1,4,&local_68,"cc.PhysicsShapeEdgeBox:create");
    uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_70,"cc.PhysicsShapeEdgeBox:create");
    if (((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0))
    goto LAB_00889038;
    pvVar7 = (void *)cocos2d::PhysicsShapeEdgeBox::create
                               (aSStack_50,(PhysicsMaterial *)&local_60,(float)local_68,
                                (Vec2 *)&local_70);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsShapeEdgeBox:create",iVar2 + -1,1);
LAB_00889070:
    uVar9 = 0;
    goto LAB_00889074;
  }
  if (pvVar7 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar9 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
               "cc.PhysicsShapeEdgeBox");
    uVar9 = 1;
  }
LAB_00889074:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

