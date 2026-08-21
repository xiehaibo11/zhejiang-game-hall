
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_create(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Physics3DRigidBody *pPVar5;
  Physics3DRigidBody *pPVar6;
  void *pvVar7;
  undefined8 uVar8;
  Mat4 aMStack_c8 [64];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      cocos2d::Mat4::Mat4(aMStack_88);
      uVar4 = luaval_to_mat4(param_1,3,aMStack_88,"cc.Physics3DConeTwistConstraint:create");
      if ((uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::Physics3DConeTwistConstraint::create(pPVar5,aMStack_88);
        if (pvVar7 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                     "cc.Physics3DConeTwistConstraint");
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        uVar8 = 1;
        goto LAB_009c5e10;
      }
      cocos2d::Mat4::~Mat4(aMStack_88);
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
      cocos2d::Mat4::Mat4(aMStack_88);
      uVar4 = luaval_to_mat4(param_1,4,aMStack_88,"cc.Physics3DConeTwistConstraint:create");
      if ((uVar4 & 1) == 0) {
        iVar3 = 2;
      }
      else {
        cocos2d::Mat4::Mat4(aMStack_c8);
        uVar4 = luaval_to_mat4(param_1,5,aMStack_c8,"cc.Physics3DConeTwistConstraint:create");
        if ((uVar4 & 1) == 0) {
          iVar3 = 2;
        }
        else {
          pvVar7 = (void *)cocos2d::Physics3DConeTwistConstraint::create
                                     (pPVar5,pPVar6,aMStack_88,aMStack_c8);
          if (pvVar7 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                       "cc.Physics3DConeTwistConstraint");
          }
          iVar3 = 1;
        }
        cocos2d::Mat4::~Mat4(aMStack_c8);
      }
      cocos2d::Mat4::~Mat4(aMStack_88);
      if (iVar3 != 2) {
        uVar8 = 1;
        goto LAB_009c5e10;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Physics3DConeTwistConstraint:create",iVar2 + -1,2);
  uVar8 = 0;
LAB_009c5e10:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

