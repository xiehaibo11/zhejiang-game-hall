
/* lua_cocos2dx_physics_PhysicsBody_createBox(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_createBox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    cocos2d::Size::Size(aSStack_50);
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_50,"cc.PhysicsBody:createBox");
    uVar5 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsBody:createBox");
    uVar7 = luaval_to_vec2(param_1,4,(Vec2 *)&local_68,"cc.PhysicsBody:createBox");
    if ((((uVar3 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar7 & 1) == 0)) {
LAB_0088c634:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_createBox\'",0);
LAB_0088c66c:
      uVar6 = 0;
      goto LAB_0088c670;
    }
    pvVar4 = (void *)cocos2d::PhysicsBody::createBox
                               (aSStack_50,(PhysicsMaterial *)&local_60,(Vec2 *)&local_68);
  }
  else if (iVar2 == 3) {
    cocos2d::Size::Size(aSStack_50);
    local_58 = 0;
    local_60 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_50,"cc.PhysicsBody:createBox");
    uVar5 = luaval_to_physics_material
                      (param_1,3,(PhysicsMaterial *)&local_60,"cc.PhysicsBody:createBox");
    if (((uVar3 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_0088c634;
    pvVar4 = (void *)cocos2d::PhysicsBody::createBox
                               (aSStack_50,(PhysicsMaterial *)&local_60,(Vec2 *)&cocos2d::Vec2::ZERO
                               );
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.PhysicsBody:createBox",iVar2 + -1,1);
      goto LAB_0088c66c;
    }
    cocos2d::Size::Size((Size *)&local_60);
    uVar3 = luaval_to_size(param_1,2,(Size *)&local_60,"cc.PhysicsBody:createBox");
    if ((uVar3 & 1) == 0) goto LAB_0088c634;
    pvVar4 = (void *)cocos2d::PhysicsBody::createBox
                               ((Size *)&local_60,(PhysicsMaterial *)&DAT_01297b6c,
                                (Vec2 *)&cocos2d::Vec2::ZERO);
  }
  if (pvVar4 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar6 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "cc.PhysicsBody");
    uVar6 = 1;
  }
LAB_0088c670:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

