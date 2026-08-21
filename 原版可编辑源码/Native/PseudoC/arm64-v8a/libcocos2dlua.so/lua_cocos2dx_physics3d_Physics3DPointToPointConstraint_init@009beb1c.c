
/* lua_cocos2dx_physics3d_Physics3DPointToPointConstraint_init(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DPointToPointConstraint_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  Physics3DRigidBody *pPVar5;
  ulong uVar6;
  Physics3DRigidBody *pPVar7;
  Vec3 *pVVar8;
  undefined8 uVar9;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar6 & 1) != 0)) {
      pVVar8 = (Vec3 *)tolua_tousertype(param_1,2,0);
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar6 = luaval_to_vec3(param_1,3,aVStack_58,"cc.Physics3DPointToPointConstraint:init");
      if ((uVar6 & 1) != 0) {
        uVar4 = cocos2d::Physics3DPointToPointConstraint::init(pPVar5,pVVar8);
LAB_009becd0:
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar9 = 1;
        goto LAB_009bed08;
      }
    }
  }
  else if (((iVar2 == 5) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar6 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar6 & 1) != 0)))) {
    pPVar7 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) &&
       (uVar6 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar6 & 1) != 0)) {
      pVVar8 = (Vec3 *)tolua_tousertype(param_1,3,0);
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar6 = luaval_to_vec3(param_1,4,aVStack_58,"cc.Physics3DPointToPointConstraint:init");
      if ((uVar6 & 1) != 0) {
        cocos2d::Vec3::Vec3(aVStack_68);
        uVar6 = luaval_to_vec3(param_1,5,aVStack_68,"cc.Physics3DPointToPointConstraint:init");
        if ((uVar6 & 1) != 0) {
          uVar4 = cocos2d::Physics3DPointToPointConstraint::init(pPVar5,pPVar7,pVVar8,aVStack_58);
          goto LAB_009becd0;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Physics3DPointToPointConstraint:init",iVar2 + -1,2);
  uVar9 = 0;
LAB_009bed08:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

