
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_physics_PhysicsJointSpring_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointSpring_construct(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  PhysicsJointSpring *pPVar9;
  char *pcVar10;
  undefined8 uVar11;
  PhysicsBody *unaff_x20;
  PhysicsBody *unaff_x21;
  double local_88;
  double adStack_80 [3];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 6) {
    adStack_80[1] = 0.0;
    adStack_80[2] = 0.0;
    if (param_1 == (lua_State *)0x0) {
      bVar2 = false;
      bVar3 = false;
    }
    else {
      iVar4 = lua_gettop(param_1);
      if ((iVar4 < 2) ||
         (uVar5 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar5 & 1) == 0)) {
        bVar2 = false;
      }
      else {
        unaff_x20 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
        bVar2 = true;
      }
      iVar4 = lua_gettop(param_1);
      if ((iVar4 < 3) ||
         (uVar5 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar5 & 1) == 0)) {
        bVar3 = false;
      }
      else {
        unaff_x21 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
        bVar3 = true;
      }
    }
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)(adStack_80 + 2),"cc.PhysicsJointSpring:construct");
    uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)(adStack_80 + 1),"cc.PhysicsJointSpring:construct");
    uVar7 = luaval_to_number(param_1,6,adStack_80,"cc.PhysicsJointSpring:construct");
    uVar8 = luaval_to_number(param_1,7,&local_88,"cc.PhysicsJointSpring:construct");
    if ((((bVar2) && (bVar3)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      pPVar9 = (PhysicsJointSpring *)
               cocos2d::PhysicsJointSpring::construct
                         (unaff_x20,unaff_x21,(Vec2 *)(adStack_80 + 2),(Vec2 *)(adStack_80 + 1),
                          (float)adStack_80[0],(float)local_88);
      if (pPVar9 == (PhysicsJointSpring *)0x0) {
        lua_pushnil(param_1);
        uVar11 = 1;
      }
      else {
        pcVar10 = getLuaTypeName<cocos2d::PhysicsJointSpring>(pPVar9,"cc.PhysicsJointSpring");
        tolua_pushusertype(param_1,pPVar9,pcVar10);
        uVar11 = 1;
      }
      goto LAB_0089237c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsJointSpring_construct\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsJointSpring:construct",iVar4 + -1,6);
  }
  uVar11 = 0;
LAB_0089237c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

