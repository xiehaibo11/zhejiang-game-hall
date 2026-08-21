
/* lua_cocos2dx_physics_PhysicsJointRotarySpring_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointRotarySpring_construct(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  PhysicsJointRotarySpring *pPVar7;
  char *pcVar8;
  undefined8 uVar9;
  PhysicsBody *unaff_x20;
  PhysicsBody *unaff_x21;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 4) {
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
    uVar5 = luaval_to_number(param_1,4,&dStack_60,"cc.PhysicsJointRotarySpring:construct");
    uVar6 = luaval_to_number(param_1,5,&local_68,"cc.PhysicsJointRotarySpring:construct");
    if ((((bVar2) && (bVar3)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      pPVar7 = (PhysicsJointRotarySpring *)
               cocos2d::PhysicsJointRotarySpring::construct
                         (unaff_x20,unaff_x21,(float)dStack_60,(float)local_68);
      if (pPVar7 == (PhysicsJointRotarySpring *)0x0) {
        lua_pushnil(param_1);
        uVar9 = 1;
      }
      else {
        pcVar8 = getLuaTypeName<cocos2d::PhysicsJointRotarySpring>
                           (pPVar7,"cc.PhysicsJointRotarySpring");
        tolua_pushusertype(param_1,pPVar7,pcVar8);
        uVar9 = 1;
      }
      goto LAB_00893694;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsJointRotarySpring_construct\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsJointRotarySpring:construct",iVar4 + -1,4);
  }
  uVar9 = 0;
LAB_00893694:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

