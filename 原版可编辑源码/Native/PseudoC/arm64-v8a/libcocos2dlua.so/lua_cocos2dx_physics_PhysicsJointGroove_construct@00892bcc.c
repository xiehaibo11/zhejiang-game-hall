
/* lua_cocos2dx_physics_PhysicsJointGroove_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointGroove_construct(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  PhysicsJointGroove *pPVar8;
  char *pcVar9;
  undefined8 uVar10;
  PhysicsBody *unaff_x20;
  PhysicsBody *unaff_x21;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 5) {
    local_78 = 0;
    uStack_70 = 0;
    local_80 = 0;
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
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&uStack_70,"cc.PhysicsJointGroove:construct");
    uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_78,"cc.PhysicsJointGroove:construct");
    uVar7 = luaval_to_vec2(param_1,6,(Vec2 *)&local_80,"cc.PhysicsJointGroove:construct");
    if ((((bVar2) && (bVar3)) && ((uVar5 & 1) != 0)) && (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0))))
    {
      pPVar8 = (PhysicsJointGroove *)
               cocos2d::PhysicsJointGroove::construct
                         (unaff_x20,unaff_x21,(Vec2 *)&uStack_70,(Vec2 *)&local_78,(Vec2 *)&local_80
                         );
      if (pPVar8 == (PhysicsJointGroove *)0x0) {
        lua_pushnil(param_1);
        uVar10 = 1;
      }
      else {
        pcVar9 = getLuaTypeName<cocos2d::PhysicsJointGroove>(pPVar8,"cc.PhysicsJointGroove");
        tolua_pushusertype(param_1,pPVar8,pcVar9);
        uVar10 = 1;
      }
      goto LAB_00892d9c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsJointGroove_construct\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsJointGroove:construct",iVar4 + -1,5);
  }
  uVar10 = 0;
LAB_00892d9c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

