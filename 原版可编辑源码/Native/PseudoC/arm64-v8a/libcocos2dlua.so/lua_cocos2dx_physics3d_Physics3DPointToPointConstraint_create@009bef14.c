
/* lua_cocos2dx_physics3d_Physics3DPointToPointConstraint_create(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DPointToPointConstraint_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Physics3DRigidBody *pPVar5;
  Physics3DRigidBody *pPVar6;
  void *pvVar7;
  undefined8 uVar8;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar4 = luaval_to_vec3(param_1,3,aVStack_58,"cc.Physics3DPointToPointConstraint:create");
      if ((uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::Physics3DPointToPointConstraint::create(pPVar5,aVStack_58);
joined_r0x009bf0bc:
        if (pvVar7 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar8 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                     "cc.Physics3DPointToPointConstraint");
          uVar8 = 1;
        }
        goto LAB_009bf108;
      }
    }
  }
  else if (((iVar2 == 5) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)))) {
    pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) &&
       (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar6 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar4 = luaval_to_vec3(param_1,4,aVStack_58,"cc.Physics3DPointToPointConstraint:create");
      if ((uVar4 & 1) != 0) {
        cocos2d::Vec3::Vec3(aVStack_68);
        uVar4 = luaval_to_vec3(param_1,5,aVStack_68,"cc.Physics3DPointToPointConstraint:create");
        if ((uVar4 & 1) != 0) {
          pvVar7 = (void *)cocos2d::Physics3DPointToPointConstraint::create
                                     (pPVar5,pPVar6,aVStack_58,aVStack_68);
          goto joined_r0x009bf0bc;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Physics3DPointToPointConstraint:create",iVar2 + -1,2);
  uVar8 = 0;
LAB_009bf108:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

