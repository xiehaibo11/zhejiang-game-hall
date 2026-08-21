
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_physics_PhysicsJointLimit_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointLimit_construct(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  PhysicsBody *pPVar5;
  PhysicsBody *pPVar6;
  PhysicsJointLimit *pPVar7;
  char *pcVar8;
  undefined8 uVar9;
  double local_68;
  double adStack_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
        adStack_60[2] = 0.0;
        uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)(adStack_60 + 2),"cc.PhysicsJointLimit:construct");
        if ((uVar4 & 1) != 0) {
          adStack_60[1] = 0.0;
          uVar4 = luaval_to_vec2(param_1,5,(Vec2 *)(adStack_60 + 1),"cc.PhysicsJointLimit:construct"
                                );
          if ((uVar4 & 1) != 0) {
            pPVar7 = (PhysicsJointLimit *)
                     cocos2d::PhysicsJointLimit::construct
                               (pPVar5,pPVar6,(Vec2 *)(adStack_60 + 2),(Vec2 *)(adStack_60 + 1));
            if (pPVar7 == (PhysicsJointLimit *)0x0) {
              lua_pushnil(param_1);
              uVar9 = 1;
            }
            else {
              pcVar8 = getLuaTypeName<cocos2d::PhysicsJointLimit>(pPVar7,"cc.PhysicsJointLimit");
              tolua_pushusertype(param_1,pPVar7,pcVar8);
              uVar9 = 1;
            }
            goto LAB_00890c44;
          }
        }
      }
    }
  }
  else if (((iVar2 == 7) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)))) {
    pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) && (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0))
    {
      pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
      adStack_60[2] = 0.0;
      uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)(adStack_60 + 2),"cc.PhysicsJointLimit:construct");
      if ((uVar4 & 1) != 0) {
        adStack_60[1] = 0.0;
        uVar4 = luaval_to_vec2(param_1,5,(Vec2 *)(adStack_60 + 1),"cc.PhysicsJointLimit:construct");
        if ((((uVar4 & 1) != 0) &&
            (uVar4 = luaval_to_number(param_1,6,adStack_60,"cc.PhysicsJointLimit:construct"),
            (uVar4 & 1) != 0)) &&
           (uVar4 = luaval_to_number(param_1,7,&local_68,"cc.PhysicsJointLimit:construct"),
           (uVar4 & 1) != 0)) {
          pPVar7 = (PhysicsJointLimit *)
                   cocos2d::PhysicsJointLimit::construct
                             (pPVar5,pPVar6,(Vec2 *)(adStack_60 + 2),(Vec2 *)(adStack_60 + 1),
                              (float)adStack_60[0],(float)local_68);
          if (pPVar7 == (PhysicsJointLimit *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            pcVar8 = getLuaTypeName<cocos2d::PhysicsJointLimit>(pPVar7,"cc.PhysicsJointLimit");
            tolua_pushusertype(param_1,pPVar7,pcVar8);
          }
          uVar9 = 1;
          goto LAB_00890c44;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.PhysicsJointLimit:construct",iVar2 + -1,4);
  uVar9 = 0;
LAB_00890c44:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

